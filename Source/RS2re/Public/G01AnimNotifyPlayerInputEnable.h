#pragma once
#include "CoreMinimal.h"
#include "G01AnimNotify.h"
#include "G01AnimNotifyPlayerInputEnable.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories)
class RS2RE_API UG01AnimNotifyPlayerInputEnable : public UG01AnimNotify {
    GENERATED_BODY()
public:
    UG01AnimNotifyPlayerInputEnable();

};

