#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01BtActionLearnUiContInf.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BtActionLearnUiContInf : public UInterface {
    GENERATED_BODY()
};

class IG01BtActionLearnUiContInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BtActionLearnUiCont_Start(AActor* InSubjectActor, const TArray<FName>& InActionIdList, bool InIsAuto);
    
};

