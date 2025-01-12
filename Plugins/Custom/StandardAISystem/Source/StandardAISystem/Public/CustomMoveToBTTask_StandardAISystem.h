#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "TargetMoveToBTTask_StandardAISystem.h"
#include "Templates/SubclassOf.h"
#include "CustomMoveToBTTask_StandardAISystem.generated.h"

class UNavigationQueryFilter;

UCLASS(Blueprintable)
class STANDARDAISYSTEM_API UCustomMoveToBTTask_StandardAISystem : public UTargetMoveToBTTask_StandardAISystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> FilterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector QueryExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsMoveTarget;
    
    UCustomMoveToBTTask_StandardAISystem();

};

