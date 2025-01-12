#pragma once
#include "CoreMinimal.h"
#include "G01BattleLinkCommandDebugArtsInfo.h"
#include "G01BattleLinkCommandDebugInfo.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleLinkCommandDebugInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01BattleLinkCommandDebugArtsInfo> ArtsInfoList;
    
    FG01BattleLinkCommandDebugInfo();
};

