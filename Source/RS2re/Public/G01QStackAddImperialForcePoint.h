#pragma once
#include "CoreMinimal.h"
#include "QuestStackObjectBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestStackObjectBase -FallbackName=QuestStackObjectBase
#include "G01ImperialForcePointIDStruct.h"
#include "G01QStackAddImperialForcePoint.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01QStackAddImperialForcePoint : public UQuestStackObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01ImperialForcePointIDStruct PointID;
    
public:
    UG01QStackAddImperialForcePoint();

};

