#pragma once
#include "CoreMinimal.h"
#include "G01AbilityCharaStatusNotify.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct RS2RE_API FG01AbilityCharaStatusNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AbilityIdList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> CharacterList;
    
    FG01AbilityCharaStatusNotify();
};

