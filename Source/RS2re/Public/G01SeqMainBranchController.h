#pragma once
#include "CoreMinimal.h"
#include "SequenceMainBranchController.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SequenceMainBranchController -FallbackName=SequenceMainBranchController
#include "G01SeqMainBranchController.generated.h"

class UG01HudManagerAccessor;

UCLASS(Blueprintable)
class RS2RE_API AG01SeqMainBranchController : public ASequenceMainBranchController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01HudManagerAccessor* HudManagerAccessor;
    
public:
    AG01SeqMainBranchController(const FObjectInitializer& ObjectInitializer);

};

