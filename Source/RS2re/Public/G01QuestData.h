#pragma once
#include "CoreMinimal.h"
#include "G01QuestChronicleActiveData.h"
#include "G01QuestConditionBuffers.h"
#include "G01QuestData.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01QuestData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01QuestConditionBuffers ConditionBuffers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01QuestChronicleActiveData> ActiveChronicle;
    
    FG01QuestData();
};

