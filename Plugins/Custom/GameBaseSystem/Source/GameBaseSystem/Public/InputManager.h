#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "EInputGlobalState.h"
#include "InputManagerInterface.h"
#include "InputStackData.h"
#include "ManagerBase.h"
#include "InputManager.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AInputManager : public AManagerBase, public IInputManagerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FInputStackData> StackDataByController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FKey> PressedKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EInputGlobalState InputGlobalState;
    
public:
    AInputManager(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

