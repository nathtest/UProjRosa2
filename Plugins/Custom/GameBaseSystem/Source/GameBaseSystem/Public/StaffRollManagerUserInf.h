#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "StaffRollManagerUserInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UStaffRollManagerUserInf : public UInterface {
    GENERATED_BODY()
};

class IStaffRollManagerUserInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_StaffRollManagerUser_OnDeactive();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_StaffRollManagerUser_OnActive();
    
};

