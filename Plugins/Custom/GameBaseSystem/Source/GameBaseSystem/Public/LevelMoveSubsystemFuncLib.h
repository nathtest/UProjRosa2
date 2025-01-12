#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "LevelTransitionInfoView.h"
#include "LevelMoveSubsystemFuncLib.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ULevelMoveSubsystemFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULevelMoveSubsystemFuncLib();

    UFUNCTION(BlueprintCallable)
    static FLevelTransitionInfoView Func_ToLevelInfoView(const FName& InLevelRowName);
    
    UFUNCTION(BlueprintCallable)
    static FString Func_GetLevelName(FLevelTransitionInfoView InLevelInfo);
    
};

