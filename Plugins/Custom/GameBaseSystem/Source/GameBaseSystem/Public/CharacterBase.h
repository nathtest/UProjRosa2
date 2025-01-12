#pragma once
#include "CoreMinimal.h"
#include "AIMovePathInfo.h"
#include "AIMoveSpeedInfo.h"
#include "AIRotationSpeedInfo.h"
#include "AiMoveUserInf.h"
#include "EAISpeed.h"
#include "EAIState.h"
#include "ObjectCharacter.h"
#include "OnFinishAiMoveDelegate.h"
#include "CharacterBase.generated.h"

class UAIControllerComponent;
class UBehaviorTree;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ACharacterBase : public AObjectCharacter, public IAiMoveUserInf {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIControllerComponent* MMyAIControllerCompo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsSetAIControllerCompo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIState MAIState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIMovePathInfo MAIMovePathParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIMoveSpeedInfo MAISpeedParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIRotationSpeedInfo MAIRotationSpeedParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* MAIBehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsBeginAI;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MObjectName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookTypeBlendTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinishAiMove MOnFinishAiMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsDebugConstructionProcess;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool MIsDetachAiControllerBySequence;
    
public:
    ACharacterBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetupAttachment(TArray<FName> InAttachmentKeyList);
    
    UFUNCTION(BlueprintCallable)
    void SetupAiController();
    
    UFUNCTION(BlueprintCallable)
    void SetRotationSpeed(float InMoveSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetMoveSpeed(float InMoveSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRotationSpeed(EAISpeed InSpeedID) const;
    
    UFUNCTION(BlueprintCallable)
    float GetMoveSpeed(EAISpeed InSpeedID);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugConstructionProcessInitialization();
    
    UFUNCTION(BlueprintCallable)
    void ActiveDebugConstructionProcess();
    

    // Fix for true pure virtual functions not being implemented
};

