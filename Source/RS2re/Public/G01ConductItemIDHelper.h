#pragma once
#include "CoreMinimal.h"
#include "G01ConductItemIDHelper.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01ConductItemIDHelper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemId;
    
    FG01ConductItemIDHelper();
};

