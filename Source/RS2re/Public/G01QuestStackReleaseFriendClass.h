#pragma once
#include "CoreMinimal.h"
#include "QuestStackObjectBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestStackObjectBase -FallbackName=QuestStackObjectBase
#include "G01QStackReleaseFriendClassParam.h"
#include "G01QuestStackReleaseFriendClass.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01QuestStackReleaseFriendClass : public UQuestStackObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01QStackReleaseFriendClassParam MReleaseClassParam;
    
public:
    UG01QuestStackReleaseFriendClass();

};

