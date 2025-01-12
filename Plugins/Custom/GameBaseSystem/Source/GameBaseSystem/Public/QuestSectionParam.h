#pragma once
#include "CoreMinimal.h"
#include "QuestSectionParam.generated.h"

USTRUCT(BlueprintType)
struct FQuestSectionParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MSectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MSectionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MDescription;
    
    GAMEBASESYSTEM_API FQuestSectionParam();
};

