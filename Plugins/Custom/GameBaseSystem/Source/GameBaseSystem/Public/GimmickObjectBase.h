#pragma once
#include "CoreMinimal.h"
#include "ActorVisibilityControlInf.h"
#include "InteractColliderTag.h"
#include "InteractCreateEventInfo.h"
#include "InteractHitCreateEventInfo.h"
#include "LevelObjectID.h"
#include "ObjectBase.h"
#include "RoomID.h"
#include "GimmickObjectBase.generated.h"

class UGimmickManagerAccessor;
class UInteractIconPositionComponent;
class UPlayerManagerAccessCompo;
class URoomInfoComponent;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AGimmickObjectBase : public AObjectBase, public IActorVisibilityControlInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FInteractColliderTag, FInteractCreateEventInfo> MEventInfoByTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URoomInfoComponent* MRoomInfoComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractIconPositionComponent* MInteractIconPositionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UGimmickManagerAccessor* MGimmickManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerManagerAccessCompo* MPlayerManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelObjectID MLevelObjectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DefaultInteractEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractHitCreateEventInfo PreCreateEventInfo;
    
public:
    AGimmickObjectBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPreTeleport();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPostTeleport();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInteractReaction();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnInitialize();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndGimmickEvent();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDebugVisibleChanged(bool InDebugVisible);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsPlayerInFrontOfGimmick();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitParamater();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HitInteractMovement();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRoomID GetRoomID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckEnable() const;
    

    // Fix for true pure virtual functions not being implemented
};

