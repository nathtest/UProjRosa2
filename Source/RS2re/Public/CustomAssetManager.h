#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetManager.h" //CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetManager -FallbackName=AssetManager
#include "CustomAssetManager.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UCustomAssetManager : public UAssetManager {
    GENERATED_BODY()
public:
    UCustomAssetManager();

};

