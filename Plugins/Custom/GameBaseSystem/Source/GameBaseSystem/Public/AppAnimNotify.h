#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "AppAnimNotify.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories)
class GAMEBASESYSTEM_API UAppAnimNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UAppAnimNotify();

};

