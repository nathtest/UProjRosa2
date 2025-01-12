#pragma once
#include "CoreMinimal.h"
#include "ReceiveInteractEventInfo.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ReceiveInteractEventInfo -FallbackName=ReceiveInteractEventInfo
#include "G01GimmickLevelMoveInfo.h"
#include "G01GimmickObjectBase.h"
#include "G01GimmickDreadQueenBossShortcutBase.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01GimmickDreadQueenBossShortcutBase : public AG01GimmickObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReceiveInteractEventInfo MReceiveInteractEventInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01GimmickLevelMoveInfo MG01GimmickLevelMoveInfoTower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01GimmickLevelMoveInfo MG01GimmickLevelMoveInfoQueen;
    
public:
    AG01GimmickDreadQueenBossShortcutBase(const FObjectInitializer& ObjectInitializer);

};

