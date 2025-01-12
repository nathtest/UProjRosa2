#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "CollisionObjectBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=CollisionObjectBase -FallbackName=CollisionObjectBase
#include "EPlayerReactionType.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EPlayerReactionType -FallbackName=EPlayerReactionType
#include "EG01GimmickIconTypeEnum.h"
#include "G01BattleEndNotifyData.h"
#include "G01HudMapObjectIconInf.h"
#include "G01InteractUiContUserInf.h"
#include "G01GimmickObjectBase.generated.h"

class AActor;
class UG01RoomManagerAccessor;
class UPrimitiveComponent;
class USphereComponent;

UCLASS(Blueprintable)
class RS2RE_API AG01GimmickObjectBase : public ACollisionObjectBase, public IG01InteractUiContUserInf, public IG01HudMapObjectIconInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MListenBattleEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFollowMoveIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* MInteractDetectiveCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01RoomManagerAccessor* MRoomManagerAccessor;
    
public:
    AG01GimmickObjectBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetIconTrakingEnabled(bool InIsTracking);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayerInteractDeactivate(bool InIsSwitch);
    
    UFUNCTION(BlueprintCallable)
    void PlayerInteractActivate(EPlayerReactionType InReactionType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartBattleEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndBattleEvent(const FG01BattleEndNotifyData& InBattleEndNotifyData);
    
    UFUNCTION(BlueprintCallable)
    void NotifyOnEndInteractEvent();
    
    UFUNCTION(BlueprintCallable)
    void NotifyOnBeginInteractEvent();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void IsReceiveInteractEnable(bool& OutEnableInteract);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsListenBattleEvent();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsEnableUpdateGimmickEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetIconTrackingWidth();
    
public:
    UFUNCTION(BlueprintCallable)
    void GetIconTrackingPosition(const FVector& InPlayerPos, float InInteractObjectWidth, FVector& OutPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EG01GimmickIconTypeEnum GetGimmickIconType();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndPause();
    
    UFUNCTION(BlueprintCallable)
    void CallEndOverlap(UPrimitiveComponent* InOverlappedComponent, AActor* InOtherActor, UPrimitiveComponent* InOtherComponent, int32 InOtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void CallBeginOverlap(UPrimitiveComponent* InOverlappedComponent, AActor* InOtherActor, UPrimitiveComponent* InOtherComponent, int32 InOtherBodyIndex, bool InIsFromSweep, const FHitResult& InSweepResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginPause();
    

    // Fix for true pure virtual functions not being implemented
};

