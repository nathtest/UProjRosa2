#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TargetPoint -FallbackName=TargetPoint
#include "Engine/TargetPoint.h"
#include "Components/ArrowComponent.h"
#include "GeneratePoint.generated.h"

class AGeneratorBase;
class UArrowComponent;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AGeneratePoint : public ATargetPoint {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* MForwardArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AGeneratorBase>> MReferredGenerators;
    
public:
    AGeneratePoint(const FObjectInitializer& ObjectInitializer);

};

