#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01NoticeUiControllerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01NoticeUiControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01NoticeUiControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01Notice_OpenRequest(int32 PrevLevel, int32 CurrentLevel, FName InstitutionName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01Notice_CloseRequest();
    
};

