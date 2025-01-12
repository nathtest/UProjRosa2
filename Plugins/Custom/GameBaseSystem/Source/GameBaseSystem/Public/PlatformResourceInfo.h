#pragma once
#include "CoreMinimal.h"
#include "EPlatformType.h"
#include "PlatformResourceInfo.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FPlatformResourceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPlatformType> LoadTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> KeyIconTable;
    
    FPlatformResourceInfo();
};

