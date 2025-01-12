#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
#include "G01BlackSmithManagerAccessor.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01BlackSmithManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UG01BlackSmithManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestBlackSmith(AActor* Actor, bool IsFirst);
    
};

