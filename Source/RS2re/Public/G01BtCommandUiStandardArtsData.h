#pragma once
#include "CoreMinimal.h"
#include "G01BtCommandUiStandardArtsData.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BtCommandUiStandardArtsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Power;
    
    FG01BtCommandUiStandardArtsData();
};

