#pragma once
#include "CoreMinimal.h"
#include "GimmickObjectGeneratorBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=GimmickObjectGeneratorBase -FallbackName=GimmickObjectGeneratorBase
#include "G01GimmickObjectGeneratorBase.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01GimmickObjectGeneratorBase : public AGimmickObjectGeneratorBase {
    GENERATED_BODY()
public:
    AG01GimmickObjectGeneratorBase(const FObjectInitializer& ObjectInitializer);

};

