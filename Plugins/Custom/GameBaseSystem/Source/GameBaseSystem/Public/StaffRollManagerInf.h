#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "StaffRollParameterStruct.h"
#include "StaffRollManagerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UStaffRollManagerInf : public UInterface {
    GENERATED_BODY()
};

class IStaffRollManagerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_StaffRollManager_StartMove(FStaffRollParameterStruct InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_StaffRollManager_IsActive();
    
};

