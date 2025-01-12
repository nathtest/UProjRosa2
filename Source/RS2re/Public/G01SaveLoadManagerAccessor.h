#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
#include "G01SaveLoadManagerAccessor.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01SaveLoadManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UG01SaveLoadManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestSave();
    
    UFUNCTION(BlueprintCallable)
    void RequestReturnToTitleSave();
    
    UFUNCTION(BlueprintCallable)
    void RequestLoad();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

