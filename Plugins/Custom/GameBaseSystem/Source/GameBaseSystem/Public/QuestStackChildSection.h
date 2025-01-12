#pragma once
#include "CoreMinimal.h"
#include "QuestStackObjectBase.h"
#include "QuestStackChildSection.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UQuestStackChildSection : public UQuestStackObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SectionIndex;
    
public:
    UQuestStackChildSection();

};

