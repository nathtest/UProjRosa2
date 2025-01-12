#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AchievementSaveInfo.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AchievementSaveInfo -FallbackName=AchievementSaveInfo
#include "G01AchievementID.h"
#include "G01AchievementFuncLib.generated.h"

class UObject;

UCLASS(Blueprintable)
class RS2RE_API UG01AchievementFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UG01AchievementFuncLib();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static void Func_UnlockAchievementSimple(const UObject* InWorldContext, FG01AchievementID InAchievementID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static void Func_UnlockAchievementProgress(const UObject* InWorldContext, FG01AchievementID InAchievementID, float InProgress);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static void Func_ResetAllAchievement(const UObject* InWorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static void Func_RecoverSavedAchievement(const UObject* InWorldContext, const FAchievementSaveInfo& InSaveInfo);
    
};

