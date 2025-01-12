#pragma once
#include "CoreMinimal.h"
#include "G01LibrarySaveInfo.generated.h"

USTRUCT(BlueprintType)
struct FG01LibrarySaveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> SpellLevelVisibility;
    
    RS2RE_API FG01LibrarySaveInfo();
};

