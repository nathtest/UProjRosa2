#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
#include "G01UniversityManagerAccessor.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01UniversityManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UG01UniversityManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestUniversityMenu(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void RequestFirstTest();
    
};

