#pragma once
#include "CoreMinimal.h"
#include "SequenceTrackActorBase.h"
#include "SequenceCharaCollectCollision.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ASequenceCharaCollectCollision : public ASequenceTrackActorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FName MCollisionID;
    
public:
    ASequenceCharaCollectCollision(const FObjectInitializer& ObjectInitializer);

};

