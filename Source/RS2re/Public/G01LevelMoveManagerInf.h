#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "LevelTransitionInfoView.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=LevelTransitionInfoView -FallbackName=LevelTransitionInfoView
#include "G01LevelMoveManagerInf.generated.h"

UINTERFACE(Blueprintable)
class UG01LevelMoveManagerInf : public UInterface {
    GENERATED_BODY()
};

class IG01LevelMoveManagerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_LevelMoveManager_UpdateSaveLevelID(const FLevelTransitionInfoView& InLevelID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_LevelMoveManager_SetIsLoadingSequence(bool InIsLoading);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_LevelMoveManager_RequestLevelTransitionFromSaveData();
    
};

