#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "G01DebugArtsViewerWindowSettings.h"
#include "Templates/SubclassOf.h"
#include "G01DebugArtsViewerGuiControlActor.generated.h"

class UG01DebugArtsViewerMenu;

UCLASS(Blueprintable)
class RS2RE_API AG01DebugArtsViewerGuiControlActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UG01DebugArtsViewerMenu> MeinMenuClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UG01DebugArtsViewerMenu* MainWindow;
    
public:
    AG01DebugArtsViewerGuiControlActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UG01DebugArtsViewerMenu* GetMainMenu() const;
    
    UFUNCTION(BlueprintCallable)
    UG01DebugArtsViewerMenu* CreateMenu(const FG01DebugArtsViewerWindowSettings& InSettings);
    
};

