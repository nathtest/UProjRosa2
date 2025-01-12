#pragma once
#include "CoreMinimal.h"
#include "G01BattleSaveInfo.h"
#include "G01SaveDataUserSubsystemBase.h"
#include "G01BattleSubsystem.generated.h"

class UG01BattleCacheSettingDataAsset;
class UG01BattleSubsystemHelper;

UCLASS(Blueprintable)
class RS2RE_API UG01BattleSubsystem : public UG01SaveDataUserSubsystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01BattleSaveInfo BattleSaveInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UG01BattleSubsystemHelper* MyHelperObject;
    
public:
    UG01BattleSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetSaveInfo(const FG01BattleSaveInfo& InSaveInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetEnemyAffinityAllOpen(FName InEnemyID, bool InIfNotExistToAdd);
    
    UFUNCTION(BlueprintCallable)
    void GetSaveInfo(FG01BattleSaveInfo& OutSaveInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetHelperObject(UG01BattleSubsystemHelper*& OutHelper);
    
    UFUNCTION(BlueprintCallable)
    void GetCacheSettingAsset(UG01BattleCacheSettingDataAsset*& OutSetting);
    
    UFUNCTION(BlueprintCallable)
    void ForgetAllAffinity(FName InEnemyID);
    
};

