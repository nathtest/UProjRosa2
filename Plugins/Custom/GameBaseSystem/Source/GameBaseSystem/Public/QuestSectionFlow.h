#pragma once
#include "CoreMinimal.h"
#include "QuestSectionFlowBranchData.h"
#include "QuestSectionFlowData.h"
#include "QuestSectionFlow.generated.h"

USTRUCT(BlueprintType)
struct FQuestSectionFlow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestSectionFlowBranchData> MBranchData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestSectionFlowData> MFlowData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MTargetFlowDataIndex;
    
    GAMEBASESYSTEM_API FQuestSectionFlow();
};

