#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
#include "G01BattleBossRecordManagerAccessor.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01BattleBossRecordManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UG01BattleBossRecordManagerAccessor(const FObjectInitializer& ObjectInitializer);

};

