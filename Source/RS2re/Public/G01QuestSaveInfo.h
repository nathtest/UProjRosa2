#pragma once
#include "CoreMinimal.h"
#include "G01QuestData.h"
#include "G01QuestSaveInfo.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01QuestSaveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01QuestData> Datas;
    
    FG01QuestSaveInfo();
};

