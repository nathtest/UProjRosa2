#pragma once
#include "CoreMinimal.h"
#include "EInputGlobalState.h"
#include "EPlatformType.h"
#include "InputStackData.h"
#include "ManagerAccessor.h"
#include "InputManagerAccessComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API UInputManagerAccessComponent : public UManagerAccessor {
    GENERATED_BODY()
public:
    UInputManagerAccessComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPressingAnyKey(int32 InPlayerControllerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPlatformType GetLastInputPlatform() const;
    
    UFUNCTION(BlueprintCallable)
    void GetInputStackData(int32 InPlayerControllerIndex, bool& OutIsValid, FInputStackData& OutInputStackData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EInputGlobalState GetInputGlobalState() const;
    
};

