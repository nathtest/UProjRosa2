#pragma once
#include "CoreMinimal.h"
#include "ManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerBase -FallbackName=ManagerBase
#include "G01TutorialManagerInf.h"
#include "UiManagerAccessor.h"
#include "G01TutorialManager.generated.h"

class AUiController;
class UUiManagerAccessor;

UCLASS(Blueprintable)
class RS2RE_API AG01TutorialManager : public AManagerBase, public IG01TutorialManagerInf {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUiManagerAccessor* UiManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AUiController* TutorialUiController;
    
public:
    AG01TutorialManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnGameStart();
    

    // Fix for true pure virtual functions not being implemented
};

