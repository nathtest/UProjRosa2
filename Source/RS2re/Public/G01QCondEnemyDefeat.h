#pragma once
#include "CoreMinimal.h"
#include "QuestConditionObjectBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestConditionObjectBase -FallbackName=QuestConditionObjectBase
#include "G01QCondEnemyDefeat.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01QCondEnemyDefeat : public UQuestConditionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString TargetMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString EnemyName;
    
public:
    UG01QCondEnemyDefeat();

};

