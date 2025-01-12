#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "SeqActorPool.h"
#include "SeqAnimHijackParam.h"
#include "SequenceActionControllerBase.h"
#include "SequenceActorAnimationController.generated.h"

class ASeqActorAnimControllerBinder;
class USequenceSettingDataAsset;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ASequenceActorAnimationController : public ASequenceActionControllerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USequenceSettingDataAsset* SequenceSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ASeqActorAnimControllerBinder*, FSeqAnimHijackParam> MHijackParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASeqActorAnimControllerBinder* MLastAnimBinder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector MOffsetVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSeqActorPool> CharaPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MFrameJumpBlendTime;
    
public:
    ASequenceActorAnimationController(const FObjectInitializer& ObjectInitializer);

};

