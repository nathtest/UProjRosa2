#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetUserData -FallbackName=AssetUserData
#include "AssetUserDataBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RS2RE_API UAssetUserDataBase : public UAssetUserData {
    GENERATED_BODY()
public:
    UAssetUserDataBase();

};

