#pragma once
#include "CoreMinimal.h"
#include "EAIState.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EAIState -FallbackName=EAIState
#include "ReceiveInteractEventInfo.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ReceiveInteractEventInfo -FallbackName=ReceiveInteractEventInfo
#include "G01GimmickObjectBase.h"
#include "G01ChangeEnemyAIStateAreaBase.generated.h"

class AG01FieldEnemyGeneratorBase;

UCLASS(Blueprintable)
class RS2RE_API AG01ChangeEnemyAIStateAreaBase : public AG01GimmickObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReceiveInteractEventInfo EnemyChangeStateEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AG01FieldEnemyGeneratorBase> FieldEnemyGenerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIState CurrentAIState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIState ChangeAIState;
    
public:
    AG01ChangeEnemyAIStateAreaBase(const FObjectInitializer& ObjectInitializer);

};

