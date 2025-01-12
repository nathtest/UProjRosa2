#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "BattleStatusStoreParamHP.h"
#include "EG01BattleStatusStorageType.h"
#include "G01BattleStatusStorageComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01BattleStatusStorageComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FBattleStatusStoreParamHP> StoreHpList;
    
public:
    UG01BattleStatusStorageComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StoreHP(FName InKey, const FBattleStatusStoreParamHP& InParam);
    
    UFUNCTION(BlueprintCallable)
    void Restore(FName InKey, EG01BattleStatusStorageType InType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void MakeStoreParamHP(AActor* InSource, FBattleStatusStoreParamHP& OutParam);
    
    UFUNCTION(BlueprintCallable)
    void FindStoreHP(FName InKey, bool& OutIsExist, FBattleStatusStoreParamHP& OutParam);
    
    UFUNCTION(BlueprintCallable)
    void Discard(FName InKey, EG01BattleStatusStorageType InType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Contains(FName InKey, EG01BattleStatusStorageType InType, bool& OutContains);
    
};

