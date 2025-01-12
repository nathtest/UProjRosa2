#pragma once
#include "CoreMinimal.h"
#include "QuestSectionFlowBase.h"
#include "QuestSectionFlowData.generated.h"

class UQuestStackConditions;
class UQuestStackObjectBase;

USTRUCT(BlueprintType)
struct FQuestSectionFlowData : public FQuestSectionFlowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestStackConditions* MConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> MConditionObjectClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UQuestStackObjectBase*> MStackObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> MStackObjectClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MNextSectionIndex;
    
    GAMEBASESYSTEM_API FQuestSectionFlowData();
};

