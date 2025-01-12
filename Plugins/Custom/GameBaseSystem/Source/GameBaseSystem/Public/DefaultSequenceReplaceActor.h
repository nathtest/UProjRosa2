#pragma once
#include "CoreMinimal.h"
#include "CharacterBase.h"
#include "SeqDefaultReplaceAnimActorInf.h"
#include "DefaultSequenceReplaceActor.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ADefaultSequenceReplaceActor : public ACharacterBase, public ISeqDefaultReplaceAnimActorInf {
    GENERATED_BODY()
public:
    ADefaultSequenceReplaceActor(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

