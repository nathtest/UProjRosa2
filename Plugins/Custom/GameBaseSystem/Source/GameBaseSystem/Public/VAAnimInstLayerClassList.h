#pragma once
#include "CoreMinimal.h"
#include "VAAnimInstLayerClassList.generated.h"

class UAnimInstance;

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FVAAnimInstLayerClassList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UAnimInstance>> AnimLayerClassList;
    
    FVAAnimInstLayerClassList();
};

