#pragma once
#include "CoreMinimal.h"
#include "SeqGateRange.h"
#include "SequenceActionControllerBase.h"
#include "SequenceGateController.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ASequenceGateController : public ASequenceActionControllerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CheckTrackRowIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentGateIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AnimBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSeqGateRange LastGate;
    
public:
    ASequenceGateController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetGateSkipBlendSeconds(float InAnimBlendTime);
    
};

