#pragma once
#include "CoreMinimal.h"
#include "ReceiveQuestParam.generated.h"

USTRUCT(BlueprintType)
struct FReceiveQuestParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MReserveCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsForceBroadcast;
    
    GAMEBASESYSTEM_API FReceiveQuestParam();
};

