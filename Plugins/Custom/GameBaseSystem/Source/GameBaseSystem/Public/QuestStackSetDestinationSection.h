#pragma once
#include "CoreMinimal.h"
#include "QuestSectionNameView.h"
#include "QuestStackObjectBase.h"
#include "QuestStackSetDestinationSection.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UQuestStackSetDestinationSection : public UQuestStackObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestSectionNameView MTargetSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsClearLogWhenRewind;
    
public:
    UQuestStackSetDestinationSection();

};

