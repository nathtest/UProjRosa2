#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "G01BattleCameraFuncLib.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01BattleCameraFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UG01BattleCameraFuncLib();

    UFUNCTION(BlueprintCallable)
    static void CalcLookAtRotation(FVector InStart, FVector InTarget, float InHorizontalFov, float InVerticalFov, FVector2D InDispPos, FRotator& ReRotation);
    
};

