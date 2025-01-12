#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "FxRequestTypeData.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FxRequestTypeData -FallbackName=FxRequestTypeData
#include "G01FxAnimNotifyUserInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01FxAnimNotifyUserInf : public UInterface {
    GENERATED_BODY()
};

class IG01FxAnimNotifyUserInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FxAnimNotifyUser_OnRequestPlay(const FFxRequestTypeData& InRequestTypeData);
    
};

