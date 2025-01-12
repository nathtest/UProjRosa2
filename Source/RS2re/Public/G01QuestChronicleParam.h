#pragma once
#include "CoreMinimal.h"
#include "G01QuestChronicleActiveData.h"
#include "G01QuestChronicleTableRow.h"
#include "G01QuestChronicleParam.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01QuestChronicleParam : public FG01QuestChronicleActiveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01QuestChronicleTableRow Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveLogIndex;
    
    FG01QuestChronicleParam();
};

