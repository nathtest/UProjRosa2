#pragma once
#include "CoreMinimal.h"
#include "ReceiveInteractEventInfo.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ReceiveInteractEventInfo -FallbackName=ReceiveInteractEventInfo
#include "EG01EnemyFieldSize.h"
#include "EG01EnemyUniqueAnimID.h"
#include "EG01MaxAccelerationEnum.h"
#include "G01CharaStatus.h"
#include "G01CharacterBase.h"
#include "G01EnemyHearingIDStruct.h"
#include "G01EnemyNotificationCollisionNotifyParam.h"
#include "G01EnemyNotificationCollisionObjectBaseInf.h"
#include "G01EnemySightIDStruct.h"
#include "OnEnableTickDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "G01FieldEnemyBase.generated.h"

class AActor;
class AGimmickObjectBase;
class UG01AIControllerComponent;
class UG01FieldEnemyUROComponent;
class UNavigationQueryFilter;

UCLASS(Blueprintable)
class RS2RE_API AG01FieldEnemyBase : public AG01CharacterBase, public IG01EnemyNotificationCollisionObjectBaseInf {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MMaxMoveRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MSearchStartRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MSearchRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MSearchHight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsNotifiedByEnemyNotificationCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01EnemyNotificationCollisionNotifyParam MEnemyNotificationCollisionNofityParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnableTickDelegate MOnEnableTickDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HeadSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnableDitherStartLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnableDitherEndLength;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsPlayerHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MPlayerHitTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReceiveInteractEventInfo MEncountEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReceiveInteractEventInfo MInteractEncountEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MEnemyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MBattleTableID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01CharaStatus MEnemyStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReceiveInteractEventInfo MDebugDamageEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01EnemyFieldSize MEnemyFieldSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MToleranceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MEnemyDispFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01FieldEnemyUROComponent* MUROComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> NavigationQueryFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EG01MaxAccelerationEnum, float> MaxAccelerationMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01EnemySightIDStruct SightID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01EnemyHearingIDStruct HearingID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MFieldAttackRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01AIControllerComponent* MAIControllerComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGimmickObjectBase* MInterlockGimmick;
    
public:
    AG01FieldEnemyBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEnemyUniqueAnimID(EG01EnemyUniqueAnimID InEnemyUniqueAnimID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnHitPlayer(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    void OnHitOtherEnemy(AActor* InOtherActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCanUsedUniqueAnim(EG01EnemyUniqueAnimID InEnemyUniqueAnimID) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetSightDataFromID(float& OutSightRadhius, float& OutSightHight, float& OutLoseSightRadius, float& OutVisionAngleDegrees);
    
    UFUNCTION(BlueprintCallable)
    bool GetHearingDataFromID(float& OutHearingRadius, float& OutHearingHight);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EG01EnemyFieldSize GetFieldSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EG01EnemyUniqueAnimID GetEnemyUniqueAnimID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01CharaStatus GetEnemyBaseStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCrowdID();
    

    // Fix for true pure virtual functions not being implemented
};

