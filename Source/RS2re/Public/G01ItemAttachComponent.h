#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "G01ItemAttachCacheArg.h"
#include "G01ItemAttachComponentInf.h"
#include "G01ItemDataStruct.h"
#include "G01ItemAttachComponent.generated.h"

class AActor;
class AG01ItemObjectBase;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01ItemAttachComponent : public UActorComponent, public IG01ItemAttachComponentInf {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AG01ItemObjectBase* ItemObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01ItemAttachCacheArg CacheArg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, AG01ItemObjectBase*> CacheItemObject;
    
public:
    UG01ItemAttachComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Visible();
    
    UFUNCTION(BlueprintCallable)
    void SetVASlotNo(int32 InSlotNo);
    
    UFUNCTION(BlueprintCallable)
    void SetDitherRate(bool InDitherUsed, float InRate);
    
    UFUNCTION(BlueprintCallable)
    void RemoveCache();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnItemVACreated(FName InItemID);
    
public:
    UFUNCTION(BlueprintCallable)
    void NewAttach(FName InItemID, FName InKeyName, FName InSocketName, FName InTagName, USceneComponent* InSceneComponent);
    
    UFUNCTION(BlueprintCallable)
    void Invisible();
    
    UFUNCTION(BlueprintCallable)
    void GetItemId(FName& OutItemID);
    
    UFUNCTION(BlueprintCallable)
    void GetItemDataByItemID(FName InItemID, FG01ItemDataStruct& OutData);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AActor* GetAttachParentActor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FName GetAttachKeyName();
    
public:
    UFUNCTION(BlueprintCallable)
    void Detach();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AG01ItemObjectBase* CreateItem(FName InItemID, int32 InVASlotNo);
    
public:
    UFUNCTION(BlueprintCallable)
    void CreateCache(const FG01ItemAttachCacheArg& InCacheArg);
    
    UFUNCTION(BlueprintCallable)
    void Attach(FName InKeyName, FName InSocketName, FName InTagName, USceneComponent* InSceneComponent);
    

    // Fix for true pure virtual functions not being implemented
};

