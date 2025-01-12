#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EG01GameDifficultyType.h"
#include "EG01GamePlayModeType.h"
#include "G01GamePlayDataManagerObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01GamePlayDataManagerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01GamePlayDataManagerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01GamePlayDataManager_OnChangeTotalEventPoint(int32 InPoint, int32 InPrePoint);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01GamePlayDataManager_OnChangeSevenHeroesDefeatCount(int32 InPrev, int32 InCurrent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01GamePlayDataManager_OnChangeImperialForceLevel(int32 InLevel, int32 InPreLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01GamePlayDataManager_OnChangeImperialCrown(int32 InNum);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01GamePlayDataManager_OnChangeGamePlayMode(EG01GamePlayModeType InCurrent, EG01GamePlayModeType InPrev);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01GamePlayDataManager_OnChangeGameDifficulty(EG01GameDifficultyType InCurrent, EG01GameDifficultyType InPrev);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01GamePlayDataManager_OnChangeEnemyForceLevel(int32 InLevel, int32 InPreLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01GamePlayDataManager_OnChangeCurrentEventPoint(int32 InPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01GamePlayDataManager_OnChangeCrown(int32 InNum);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01GamePlayDataManager_OnChangeClearAreaCount(int32 InPreCount, int32 InCurrentCount);
    
};

