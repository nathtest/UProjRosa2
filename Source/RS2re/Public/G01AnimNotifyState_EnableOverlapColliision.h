#pragma once
#include "CoreMinimal.h"
#include "G01AnimNotifyState_EnableColliisionBase.h"
#include "G01AnimNotifyState_EnableOverlapColliision.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class RS2RE_API UG01AnimNotifyState_EnableOverlapColliision : public UG01AnimNotifyState_EnableColliisionBase {
    GENERATED_BODY()
public:
    UG01AnimNotifyState_EnableOverlapColliision();

};

