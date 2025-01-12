#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "G01ArtsDelayHitKey.h"
#include "G01ArtsDelayHitRequest.h"
#include "G01ArtsDelayHitRequestPerTag.h"
#include "G01ArtsDelayRegister.h"
#include "G01SeqNotifyBattleDamageParam.h"
#include "G01ArtsDelayHitComponent.generated.h"

class UG01BattleTask;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01ArtsDelayHitComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FG01ArtsDelayRegister> RegisterMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FG01ArtsDelayHitRequestPerTag> RequestMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentHitTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01ArtsDelayHitRequest CurrentHitRequest;
    
public:
    UG01ArtsDelayHitComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Unregister(FName InTag);
    
    UFUNCTION(BlueprintCallable)
    void RequestDelayHit(FName InTag, const FG01ArtsDelayHitRequest& InRequest);
    
    UFUNCTION(BlueprintCallable)
    void Register(FName InTag, int32 InMultiCount, UObject* InSubject);
    
    UFUNCTION(BlueprintCallable)
    void ProcessArtsHitNotify(UG01BattleTask* InTask, const TArray<int32>& InTargetNo, int32 InHitNo, const FG01SeqNotifyBattleDamageParam& InParam);
    
    UFUNCTION(BlueprintCallable)
    void MakeRegisteredHitKeyList(TArray<FG01ArtsDelayHitKey>& OutKeyList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsInDelayHit(bool& OutIsHit);
    
    UFUNCTION(BlueprintCallable)
    void GetRemainDelayHitRequest(TArray<FG01ArtsDelayHitRequest>& OutRequestList);
    
    UFUNCTION(BlueprintCallable)
    void GetMultiTotalCount(int32& OutCount);
    
    UFUNCTION(BlueprintCallable)
    void GetCurrentDelayHitKey(bool& OutIsExist, FG01ArtsDelayHitKey& OutKey);
    
    UFUNCTION(BlueprintCallable)
    void GetCurrentDelayHit(bool& OutIsExist, FName& OutTag, FG01ArtsDelayHitRequest& OutRequest);
    
    UFUNCTION(BlueprintCallable)
    void CancelDelayHit(FName InTag);
    
};

