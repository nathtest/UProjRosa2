#pragma once
#include "CoreMinimal.h"
#include "QuestSectionNameView.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FQuestSectionNameView {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MUniqueSectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MSectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MQuestID;
    
    FQuestSectionNameView();
};

