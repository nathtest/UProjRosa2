#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "CustomizableTrackHelperFuncLib.generated.h"

class UObject;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UCustomizableTrackHelperFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCustomizableTrackHelperFuncLib();

    UFUNCTION(BlueprintCallable)
    static bool IsPlayingEd();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static bool IsEditor(const UObject* InWorldContext);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetCurrentTimeEd();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetCurrentLocalTimeEd();
    
};

