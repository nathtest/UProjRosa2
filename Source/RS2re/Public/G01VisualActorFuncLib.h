#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=AssetData -FallbackName=AssetData
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "VisualActorID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=VisualActorID -FallbackName=VisualActorID
#include "G01VAAnimReplaceFormatParams.h"
#include "G01VAIkTargetParam.h"
#include "G01VisualActorFuncLib.generated.h"

class UG01VisualActorCommonSettings;

UCLASS(Blueprintable)
class RS2RE_API UG01VisualActorFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UG01VisualActorFuncLib();

    UFUNCTION(BlueprintCallable)
    static bool Func_IsVehicleID(const FVisualActorID& InID);
    
    UFUNCTION(BlueprintCallable)
    static bool Func_IsNormalCharaID(const FVisualActorID& InID);
    
    UFUNCTION(BlueprintCallable)
    static bool Func_IsEquipmentID(const FVisualActorID& InID);
    
    UFUNCTION(BlueprintCallable)
    static bool Func_IsEnemyID(const FVisualActorID& InID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform Func_GetEffectorTransform(const FG01VAIkTargetParam& InParam);
    
    UFUNCTION(BlueprintCallable)
    static FAssetData Func_FindActualAnimAsset(UG01VisualActorCommonSettings* InCommonSettings, const FString& InSrcAnimPath, const FG01VAAnimReplaceFormatParams& InParams);
    
    UFUNCTION(BlueprintCallable)
    static void Func_CopytoBattleIkSettings();
    
};

