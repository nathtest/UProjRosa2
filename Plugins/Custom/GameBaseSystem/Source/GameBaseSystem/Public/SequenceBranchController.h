#pragma once
#include "CoreMinimal.h"
#include "SequenceActionControllerBase.h"
#include "SequenceBranchController.generated.h"

class UFlagSystemManagerAccessCompo;
class UQuestManagerAccessComponent;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ASequenceBranchController : public ASequenceActionControllerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFlagSystemManagerAccessCompo* MFlagSystemManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuestManagerAccessComponent* MQuestManagerAccessor;
    
public:
    ASequenceBranchController(const FObjectInitializer& ObjectInitializer);

};

