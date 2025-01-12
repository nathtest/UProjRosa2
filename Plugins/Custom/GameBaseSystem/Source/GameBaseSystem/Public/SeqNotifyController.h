#pragma once
#include "CoreMinimal.h"
#include "ForceFeedbackCommonParams.h"
#include "SeqCameraShakeTimeInfo.h"
#include "SequenceActionControllerBase.h"
#include "SeqNotifyController.generated.h"

class UCameraShakeBase;
class UGameForceFeedbackManagerAccessor;
class UObject;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ASeqNotifyController : public ASequenceActionControllerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCameraShakeBase*> MCameraShakeInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSeqCameraShakeTimeInfo> MCameraShakeTimeInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UCameraShakeBase*> MRepeaterCameraShakeInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UGameForceFeedbackManagerAccessor* ForceFeedbackManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FForceFeedbackCommonParams> PlayingForceFeedbackParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> MWorkingObjects;
    
public:
    ASeqNotifyController(const FObjectInitializer& ObjectInitializer);

};

