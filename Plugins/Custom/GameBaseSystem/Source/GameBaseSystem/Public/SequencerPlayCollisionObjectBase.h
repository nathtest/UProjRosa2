#pragma once
#include "CoreMinimal.h"
#include "CollisionObjectBase.h"
#include "SeqPlayCollisionEventInfo.h"
#include "SequencerPlayCollisionObjectBase.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ASequencerPlayCollisionObjectBase : public ACollisionObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSeqPlayCollisionEventInfo PlaySequencerParam;
    
public:
    ASequencerPlayCollisionObjectBase(const FObjectInitializer& ObjectInitializer);

};

