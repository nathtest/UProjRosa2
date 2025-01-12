#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h"
#include "GimmickGenManagerAccessComponent.generated.h"

class AGimmickObjectGeneratorBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API UGimmickGenManagerAccessComponent : public UManagerAccessor {
    GENERATED_BODY()
public:
    UGimmickGenManagerAccessComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveGimmick(AGimmickObjectGeneratorBase* InCreatedGimmick);
    
    UFUNCTION(BlueprintCallable)
    void RegistrationGimmick(AGimmickObjectGeneratorBase* InCreatedGimmick);
    
};

