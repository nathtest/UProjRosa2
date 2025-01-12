#pragma once
#include "CoreMinimal.h"
#include "ItemIDListViewStruct.h"
#include "ItemConditionNotifyStruct.generated.h"

USTRUCT(BlueprintType)
struct FItemConditionNotifyStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemIDListViewStruct MItemInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MGetItemNum;
    
    GAMEBASESYSTEM_API FItemConditionNotifyStruct();
};

