#pragma once
#include "CoreMinimal.h"
#include "EG01EnemyUniqueAnimID.h"
#include "G01FieldCharaAnimInstanceBase.h"
#include "G01FieldEnemyAnimInstanceBase.generated.h"

class AG01FieldEnemyBase;

UCLASS(Blueprintable, NonTransient)
class RS2RE_API UG01FieldEnemyAnimInstanceBase : public UG01FieldCharaAnimInstanceBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01EnemyUniqueAnimID EnemyUniqueAnimID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01EnemyUniqueAnimID PlayEnemyUniqueAnimID;
    
public:
    UG01FieldEnemyAnimInstanceBase();

protected:
    UFUNCTION(BlueprintCallable)
    void SetUpAnimationParam(AG01FieldEnemyBase* InEnemy, float InAnimWalkSpeed, float InAnimRunSpeed, float InRunningAnimeThreshold);
    
};

