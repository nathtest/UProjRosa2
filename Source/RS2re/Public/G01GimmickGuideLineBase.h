#pragma once
#include "CoreMinimal.h"
#include "G01GimmickObjectBase.h"
#include "G01GimmickGuideLineBase.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01GimmickGuideLineBase : public AG01GimmickObjectBase {
    GENERATED_BODY()
public:
    AG01GimmickGuideLineBase(const FObjectInitializer& ObjectInitializer);

};

