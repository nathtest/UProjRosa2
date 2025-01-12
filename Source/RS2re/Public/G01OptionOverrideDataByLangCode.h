#pragma once
#include "CoreMinimal.h"
#include "ERegionType.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ERegionType -FallbackName=ERegionType
#include "G01OptionOverrideData.h"
#include "G01OptionOverrideDataByLangCode.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01OptionOverrideDataByLangCode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ERegionType> TargetRegions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01OptionOverrideData Unknown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01OptionOverrideData Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<FName, FG01OptionOverrideData> Map;
    
    FG01OptionOverrideDataByLangCode();
};

