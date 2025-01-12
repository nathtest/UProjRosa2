#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "G01DebugLevelTransitionFuncLib.generated.h"

UCLASS(Blueprintable)
class UG01DebugLevelTransitionFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UG01DebugLevelTransitionFuncLib();

    UFUNCTION(BlueprintCallable)
    static void ParseToString(FName InLevelID, FName InRoomId, FVector InLocation, FString& OutStr);
    
    UFUNCTION(BlueprintCallable)
    static void ParseToLocation(const FString& InStr, FName& OutLevelID, FName& OutRoomID, FVector& OutLocation);
    
};

