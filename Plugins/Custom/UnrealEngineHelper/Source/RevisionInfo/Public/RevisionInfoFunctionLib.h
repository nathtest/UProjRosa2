#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "RevisionInfoFunctionLib.generated.h"

UCLASS(Blueprintable)
class REVISIONINFO_API URevisionInfoFunctionLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URevisionInfoFunctionLib();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Func_GetRevisionInfoString();
    
};

