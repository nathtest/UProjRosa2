#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "G01PlatformFuncLib.generated.h"

class UObject;

UCLASS(Blueprintable)
class RS2RE_API UG01PlatformFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UG01PlatformFuncLib();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static bool IsSteamDeck(const UObject* InWorldContext);
    
    UFUNCTION(BlueprintCallable)
    static void GetStoreProductInfo(FString& OutProductId);
    
    UFUNCTION(BlueprintCallable)
    static void GetProductInfo(bool InIsTrial, bool InIsBackward, FString& OutTitleId, FString& OutFingerprint);
    
    UFUNCTION(BlueprintCallable)
    static void GetDLCInfo(const int32 InDLCIndex, FString& OutDLCName);
    
};

