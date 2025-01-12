#pragma once
#include "CoreMinimal.h"
#include "FlagAccessParam.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagAccessParam -FallbackName=FlagAccessParam
#include "QuestConditionObjectBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestConditionObjectBase -FallbackName=QuestConditionObjectBase
#include "EG01QCondBattleEndType.h"
#include "G01QCondBattleEnd.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01QCondBattleEnd : public UQuestConditionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EG01QCondBattleEndType, FFlagAccessParam> FlagAccessParams;
    
public:
    UG01QCondBattleEnd();

};

