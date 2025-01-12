#pragma once
#include "CoreMinimal.h"
#include "GimmickObjectGeneratorBase.h"
#include "Smp_ItemObjectGeneratorBase.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ASmp_ItemObjectGeneratorBase : public AGimmickObjectGeneratorBase {
    GENERATED_BODY()
public:
    ASmp_ItemObjectGeneratorBase(const FObjectInitializer& ObjectInitializer);

};

