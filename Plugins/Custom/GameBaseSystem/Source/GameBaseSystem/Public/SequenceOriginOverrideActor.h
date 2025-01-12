#pragma once
#include "CoreMinimal.h"
#include "SeqOriginOverrideParam.h"
#include "SequenceTrackActorBase.h"
#include "SequenceOriginOverrideActor.generated.h"

class AActor;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ASequenceOriginOverrideActor : public ASequenceTrackActorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSeqOriginOverrideParam MOverrideParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* MOverrideActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MCount;
    
public:
    ASequenceOriginOverrideActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void Cmd_RP_OverrideOrigin(FSeqOriginOverrideParam InParam);
    
};

