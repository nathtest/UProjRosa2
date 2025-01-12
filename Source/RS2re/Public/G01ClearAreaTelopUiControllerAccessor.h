#pragma once
#include "CoreMinimal.h"
#include "EG01AreaId.h"
#include "EG01TelopId.h"
#include "G01MsgUiControllerAccessorBase.h"
#include "G01ClearAreaTelopUiControllerAccessor.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01ClearAreaTelopUiControllerAccessor : public UG01MsgUiControllerAccessorBase {
    GENERATED_BODY()
public:
    UG01ClearAreaTelopUiControllerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool ShowTelop(const EG01AreaId& ClearAreaID);
    
    UFUNCTION(BlueprintCallable)
    bool ShowAreaTelop(const EG01TelopId& ClearAreaID);
    
    UFUNCTION(BlueprintCallable)
    void RequestInput();
    
    UFUNCTION(BlueprintCallable)
    void CloseTelop();
    
};

