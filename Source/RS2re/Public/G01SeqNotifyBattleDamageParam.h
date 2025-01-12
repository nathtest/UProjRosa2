#pragma once
#include "CoreMinimal.h"
#include "G01SeqNotifyBattleDamage.h"
#include "G01SeqNotifyBattleDamageParam.generated.h"

class AG01VFXPlayerBase;

USTRUCT(BlueprintType)
struct FG01SeqNotifyBattleDamageParam : public FG01SeqNotifyBattleDamage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AG01VFXPlayerBase* EffectPlayer;
    
    RS2RE_API FG01SeqNotifyBattleDamageParam();
};

