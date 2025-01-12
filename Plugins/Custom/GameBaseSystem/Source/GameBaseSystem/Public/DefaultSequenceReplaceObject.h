#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SeqDefaultReplaceAnimActorInf.h"
#include "SequenceReplaceObjectInterface.h"
#include "VisualActorOwnerInf.h"
#include "DefaultSequenceReplaceObject.generated.h"

class UChildActorComponent;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ADefaultSequenceReplaceObject : public AActor, public IVisualActorOwnerInf, public ISequenceReplaceObjectInterface, public ISeqDefaultReplaceAnimActorInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* MVisualActor;
    
public:
    ADefaultSequenceReplaceObject(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

