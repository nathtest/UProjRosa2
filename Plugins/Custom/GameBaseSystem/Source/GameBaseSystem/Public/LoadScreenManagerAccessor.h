#pragma once
#include "CoreMinimal.h"
#include "ELoadScreenType.h"
#include "ManagerAccessor.h"
#include "LoadScreenManagerAccessor.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API ULoadScreenManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    ULoadScreenManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetIsLoadingSequence(bool InIsLoading);
    
    UFUNCTION(BlueprintCallable)
    void ReserveLoadScreenType(ELoadScreenType InType);
    
    UFUNCTION(BlueprintCallable)
    void RemoveWaitDeactivate(UObject* InObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadScreenActive();
    
    UFUNCTION(BlueprintCallable)
    void AddWaitDeactivate(UObject* InObject);
    
};

