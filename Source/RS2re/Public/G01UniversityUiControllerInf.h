#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01UniversityUiControllerInf.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01UniversityUiControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01UniversityUiControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01UniversityUiController_Request(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01UniversityUiController_Back(bool IsImperialTest);
    
};

