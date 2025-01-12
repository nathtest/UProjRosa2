#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "QuestConditionParamObjectBase.generated.h"

UCLASS(Abstract, Blueprintable)
class GAMEBASESYSTEM_API UQuestConditionParamObjectBase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MUseSectionIndex;
    
public:
    UQuestConditionParamObjectBase();

};

