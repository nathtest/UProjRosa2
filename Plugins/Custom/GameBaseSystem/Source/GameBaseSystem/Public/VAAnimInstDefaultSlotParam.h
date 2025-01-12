#pragma once
#include "CoreMinimal.h"
#include "VAAnimInstDefaultSlotParam.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FVAAnimInstDefaultSlotParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DefaultSlotNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendTime;
    
    FVAAnimInstDefaultSlotParam();
};

