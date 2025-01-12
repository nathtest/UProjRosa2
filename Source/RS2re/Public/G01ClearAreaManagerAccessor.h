#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
#include "EG01AreaId.h"
#include "G01ClearAreaManagerAccessor.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01ClearAreaManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UG01ClearAreaManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestClearAreaSequence(EG01AreaId ClearAreaID);
    
};

