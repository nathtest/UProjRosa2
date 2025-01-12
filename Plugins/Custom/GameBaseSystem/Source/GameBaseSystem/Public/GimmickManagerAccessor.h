#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h"
#include "GimmickManagerAccessor.generated.h"

class AGimmickObjectBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API UGimmickManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UGimmickManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterGimmick(AGimmickObjectBase* InGimmickObject);
    
    UFUNCTION(BlueprintCallable)
    void SetGlobalInteractEnabled(bool InEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugVisible(bool InDebugVisible);
    
    UFUNCTION(BlueprintCallable)
    void RegisterGimmick(AGimmickObjectBase* InGimmickObject);
    
};

