#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01DestinationInfos.h"
#include "G01DestinationUpdateData.h"
#include "G01DestinationUserInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01DestinationUserInf : public UInterface {
    GENERATED_BODY()
};

class IG01DestinationUserInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01DestUser_OnUpdateDestination(const FG01DestinationUpdateData& InData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01DestUser_OnRemoveDestination(const FG01DestinationInfos& InData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01DestUser_OnAddDestination(const FName& InKey);
    
};

