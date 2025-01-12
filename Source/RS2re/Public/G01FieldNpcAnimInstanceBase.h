#pragma once
#include "CoreMinimal.h"
#include "G01FieldCharaAnimInstanceBase.h"
#include "G01UniqueFieldAnimIDStruct.h"
#include "G01FieldNpcAnimInstanceBase.generated.h"

class AActor;
class AG01FieldNpcBase;

UCLASS(Blueprintable, NonTransient)
class RS2RE_API UG01FieldNpcAnimInstanceBase : public UG01FieldCharaAnimInstanceBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01UniqueFieldAnimIDStruct NpcUniqueAnimID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NpcUniqueAnimStartPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFollowing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AG01FieldNpcBase* OwnerNpc;
    
public:
    UG01FieldNpcAnimInstanceBase();

protected:
    UFUNCTION(BlueprintCallable)
    void SetUpAnimationParam(AG01FieldNpcBase* InNpc, float InAnimWalkSpeed, float InAnimRunSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetVisualActor();
    
};

