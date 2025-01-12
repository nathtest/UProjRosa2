#pragma once
#include "CoreMinimal.h"
#include "GameLevelManagerAccesser.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=GameLevelManagerAccesser -FallbackName=GameLevelManagerAccesser
#include "G01GameLevelManagerAccesser.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01GameLevelManagerAccesser : public UGameLevelManagerAccesser {
    GENERATED_BODY()
public:
    UG01GameLevelManagerAccesser(const FObjectInitializer& ObjectInitializer);

};

