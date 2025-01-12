#pragma once
#include "CoreMinimal.h"
#include "Helper.h"
#include "VAAnimInstPathData.h"
#include "VisualActorHelper.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UVisualActorHelper : public UHelper {
    GENERATED_BODY()
public:
    UVisualActorHelper();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVAAnimInstPathData ConvertVisualActorAnimationPath(FName InVisualId, FName InFigureID, FName InAssetName);
    
};

