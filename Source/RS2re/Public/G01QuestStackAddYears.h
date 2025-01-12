#pragma once
#include "CoreMinimal.h"
#include "QuestStackObjectBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestStackObjectBase -FallbackName=QuestStackObjectBase
#include "G01QuestStackAddYears.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01QuestStackAddYears : public UQuestStackObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 YearsCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsForcePeriodJump;
    
public:
    UG01QuestStackAddYears();

};

