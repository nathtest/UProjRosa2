#pragma once
#include "CoreMinimal.h"
#include "G01BattleLinkCommandStruct.h"
#include "G01BtCommandUiLinkArtsData.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BtCommandUiLinkArtsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01BattleLinkCommandStruct Data;
    
    FG01BtCommandUiLinkArtsData();
};

