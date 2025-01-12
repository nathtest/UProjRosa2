#pragma once
#include "CoreMinimal.h"
#include "EScreenTransitionType.h"
#include "ManagerAccessor.h"
#include "ScreenTransitionManagerAccessor.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API UScreenTransitionManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UScreenTransitionManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TransitionUnlock(AActor* InObject);
    
    UFUNCTION(BlueprintCallable)
    void TransitionLock(AActor* InObject);
    
    UFUNCTION(BlueprintCallable)
    void SetTransitionType(EScreenTransitionType InType);
    
    UFUNCTION(BlueprintCallable)
    void ScreenTransitionReset(bool InIsOn);
    
    UFUNCTION(BlueprintCallable)
    void ScreenTransitionOut(float InTime, EScreenTransitionType InType);
    
    UFUNCTION(BlueprintCallable)
    void ScreenTransitionIn(EScreenTransitionType InType, float InTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHideScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveScreenTransition();
    
    UFUNCTION(BlueprintCallable)
    void GetIsTransitionLock(bool& OutIsLock);
    
};

