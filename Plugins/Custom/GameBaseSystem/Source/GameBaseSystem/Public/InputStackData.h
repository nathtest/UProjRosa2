#pragma once
#include "CoreMinimal.h"
#include "EInputObjectPriorityGroup.h"
#include "InputActorArray.h"
#include "InputStackData.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FInputStackData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EInputObjectPriorityGroup, FInputActorArray> Stack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EInputObjectPriorityGroup, FInputActorArray> Sharing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EInputObjectPriorityGroup AllowedPriority;
    
    FInputStackData();
};

