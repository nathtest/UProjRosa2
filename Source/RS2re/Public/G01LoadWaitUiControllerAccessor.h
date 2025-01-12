#pragma once
#include "CoreMinimal.h"
#include "UiControllerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=UiControllerAccessor -FallbackName=UiControllerAccessor
#include "G01LoadWaitUiControllerAccessor.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01LoadWaitUiControllerAccessor : public UUiControllerAccessor {
    GENERATED_BODY()
public:
    UG01LoadWaitUiControllerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable)
    void LoadStart();
    
    UFUNCTION(BlueprintCallable)
    void GetActiveElapsedTime(float& OutTime);
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

