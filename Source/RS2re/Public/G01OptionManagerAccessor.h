#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
#include "G01OptionManagerAccessor.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01OptionManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UG01OptionManagerAccessor(const FObjectInitializer& ObjectInitializer);

};

