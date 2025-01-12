#pragma once
#include "CoreMinimal.h"
#include "EQuestEndType.h"
#include "QuestStackObjectBase.h"
#include "QuestStackQuestEnd.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UQuestStackQuestEnd : public UQuestStackObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EQuestEndType::Type> MQuestEndType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsImmediate;
    
public:
    UQuestStackQuestEnd();

};

