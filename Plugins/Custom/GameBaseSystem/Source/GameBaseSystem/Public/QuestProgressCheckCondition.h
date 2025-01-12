#pragma once
#include "CoreMinimal.h"
#include "QuestConditionObjectBase.h"
#include "QuestProgressCheckCondition.generated.h"

class UQuestCoreData;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UQuestProgressCheckCondition : public UQuestConditionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UQuestCoreData* CachedCoreData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString CachedSectionName;
    
public:
    UQuestProgressCheckCondition();

};

