#pragma once
#include "CoreMinimal.h"
#include "GeneratorBase.h"
#include "SimpleActorGeneratorBase.generated.h"

class AActor;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ASimpleActorGeneratorBase : public AGeneratorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> MGenerateActorClass;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsGenerateClassEdit;
    
public:
    ASimpleActorGeneratorBase(const FObjectInitializer& ObjectInitializer);

};

