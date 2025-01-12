#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "VFXLoadInfo.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=VFXLoadInfo -FallbackName=VFXLoadInfo
#include "G01BattleLoadVFXTaskInf.generated.h"

class UG01VFXHandle;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BattleLoadVFXTaskInf : public UInterface {
    GENERATED_BODY()
};

class IG01BattleLoadVFXTaskInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleLoadVFXTask_StartLoadVFX();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleLoadVFXTask_SetVFXLoadInfo(const FVFXLoadInfo& InInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleLoadVFXTask_GetVFXHandle(UG01VFXHandle*& OutHandle);
    
};

