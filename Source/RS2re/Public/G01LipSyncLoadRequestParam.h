#pragma once
#include "CoreMinimal.h"
#include "G01LipSyncLoadRequestParam.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01LipSyncLoadRequestParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> VoiceIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAsyncLoad;
    
    FG01LipSyncLoadRequestParam();
};

