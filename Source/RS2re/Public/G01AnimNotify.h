#pragma once
#include "CoreMinimal.h"
#include "AppAnimNotify.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppAnimNotify -FallbackName=AppAnimNotify
#include "G01AnimNotify.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories)
class RS2RE_API UG01AnimNotify : public UAppAnimNotify {
    GENERATED_BODY()
public:
    UG01AnimNotify();

};

