#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "FlagIDListViewStruct.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagIDListViewStruct -FallbackName=FlagIDListViewStruct
#include "G01FieldSenseiNpcInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01FieldSenseiNpcInf : public UInterface {
    GENERATED_BODY()
};

class IG01FieldSenseiNpcInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldSenseiNpc_SetSenseiFlag(FFlagIDListViewStruct InSenseiFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FFlagIDListViewStruct Inf_G01FieldSenseiNpc_GetSenseiFlag();
    
};

