#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "ImGuiMainMenuBarRegisteredInfo.h"
#include "ImGuiSideMenuBarRegisteredInfo.h"
#include "ImGuiMainMenuHelper.generated.h"

UCLASS(Blueprintable)
class IMGUIMAINMENUHELPER_API UImGuiMainMenuHelper : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FImGuiMainMenuBarRegisteredInfo> mainMenuBarRegisteredList_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FImGuiSideMenuBarRegisteredInfo> sideMenuBarRegisteredList_;
    
public:
    UImGuiMainMenuHelper();

};

