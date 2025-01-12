#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "VisualActorParamDataAssetBase.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UVisualActorParamDataAssetBase : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UVisualActorParamDataAssetBase();

};

