#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "G01VisualActorAnimInstFuncLib.generated.h"

class UG01VisualActorParamDataAsset;
class UVisualActorAnimInstanceBase;

UCLASS(Blueprintable)
class RS2RE_API UG01VisualActorAnimInstFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UG01VisualActorAnimInstFuncLib();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UG01VisualActorParamDataAsset* Func_GetG01VisualActorParam(UVisualActorAnimInstanceBase* InAnimInst);
    
};

