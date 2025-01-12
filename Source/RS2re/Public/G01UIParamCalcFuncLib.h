#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EG01HudIconHighTypeEnum.h"
#include "G01UIParamCalcFuncLib.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01UIParamCalcFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UG01UIParamCalcFuncLib();

    UFUNCTION(BlueprintCallable)
    static void CalcMaskDistance(FVector2D InPosition, int32 InMaskDistanceValue, TArray<FVector2D> InParamList, bool& OutIsAddMaskData, FVector2D& OutValue);
    
    UFUNCTION(BlueprintCallable)
    static void CalcMapPos(FVector InWorldPos, FVector InCenterMapPos, float InMapRatio, float InMapAngle, FVector2D& OutPos);
    
    UFUNCTION(BlueprintCallable)
    static void CalcImportantIconPos(FVector2D InPlayerPos, FVector2D InMapPos, float InMapScale, bool& IsOutOfRange, float& OutDirectionAngle, FVector2D& OutPos);
    
    UFUNCTION(BlueprintCallable)
    static void CalcIconScale(float InLength, float InMaxScaleLength, float InMinScaleLength, float InMaxScale, float InMinScale, float& OutScale);
    
    UFUNCTION(BlueprintCallable)
    static void CalcIconRange(FVector InPlayerPos, FVector InActorPos, float InRange, bool InIsInfinityView, float& OutLength, bool& OutIsIn);
    
    UFUNCTION(BlueprintCallable)
    static void CalcIconHigh(float InPlayerPos, float InActorPos, float HighRange, EG01HudIconHighTypeEnum& OutHighType);
    
    UFUNCTION(BlueprintCallable)
    static void CalcAngleParamPos(FVector2D InPosition, float InAngleYaw, FVector2D& OutPos);
    
};

