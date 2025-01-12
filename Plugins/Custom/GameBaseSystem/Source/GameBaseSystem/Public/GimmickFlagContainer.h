#pragma once
#include "CoreMinimal.h"
#include "GimmickFlagInfo.h"
#include "GimmickFlagContainer.generated.h"

USTRUCT(BlueprintType)
struct FGimmickFlagContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGimmickFlagInfo> Flags;
    
    GAMEBASESYSTEM_API FGimmickFlagContainer();
};

