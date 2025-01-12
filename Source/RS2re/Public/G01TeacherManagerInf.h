#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01GameEffectFlagIDStruct.h"
#include "G01TeacherManagerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01TeacherManagerInf : public UInterface {
    GENERATED_BODY()
};

class IG01TeacherManagerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01TeacherManager_SetGameEffectFlagCheck(int32 InCurrentTrueNum);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01TeacherManager_GetTeacherFlagCurrentTrueNum(int32& OutCurrentTrueNum);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01TeacherManager_GetGameEffect(FG01GameEffectFlagIDStruct InFlagID, TMap<FName, float>& OutEffect, bool& OutIsValid);
    
};

