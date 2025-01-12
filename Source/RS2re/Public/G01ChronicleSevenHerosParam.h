#pragma once
#include "CoreMinimal.h"
#include "FlagIDListViewStruct.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagIDListViewStruct -FallbackName=FlagIDListViewStruct
#include "G01ChronicleSevenHerosParam.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct RS2RE_API FG01ChronicleSevenHerosParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlagIDListViewStruct FlagID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> EventImage;
    
    FG01ChronicleSevenHerosParam();
};

