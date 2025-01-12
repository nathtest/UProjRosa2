#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h"
#include "StaffRollManagerAccesser.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API UStaffRollManagerAccesser : public UManagerAccessor {
    GENERATED_BODY()
public:
    UStaffRollManagerAccesser(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveStaffRoll();
    
};

