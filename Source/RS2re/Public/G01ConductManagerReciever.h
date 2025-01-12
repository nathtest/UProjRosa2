#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
#include "OnChangeConductDelegate.h"
#include "G01ConductManagerReciever.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01ConductManagerReciever : public UManagerAccessor {
    GENERATED_BODY()
public:
    UG01ConductManagerReciever(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Bind(const FOnChangeConduct& InChangeEvent, bool& OutIsSuccess);
    
};

