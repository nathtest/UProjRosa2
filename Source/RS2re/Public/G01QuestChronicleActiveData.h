#pragma once
#include "CoreMinimal.h"
#include "EG01QuestChronicleState.h"
#include "G01QuestChronicleHierarchyData.h"
#include "G01QuestChronicleActiveData.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01QuestChronicleActiveData : public FG01QuestChronicleHierarchyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01QuestChronicleState State;
    
    FG01QuestChronicleActiveData();
};

