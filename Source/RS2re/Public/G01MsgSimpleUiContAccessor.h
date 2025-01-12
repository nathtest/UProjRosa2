#pragma once
#include "CoreMinimal.h"
#include "G01MsgSimpleParam.h"
#include "G01MsgSimpleParamArray.h"
#include "G01MsgUiControllerAccessorBase.h"
#include "G01MsgSimpleUiContAccessor.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01MsgSimpleUiContAccessor : public UG01MsgUiControllerAccessorBase {
    GENERATED_BODY()
public:
    UG01MsgSimpleUiContAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool ShowSimpleWindowByParamList(AActor* InUser, FG01MsgSimpleParamArray InParam);
    
    UFUNCTION(BlueprintCallable)
    bool ShowSimpleWindow(AActor* InUser, FG01MsgSimpleParam InParam);
    
    UFUNCTION(BlueprintCallable)
    void CloseSimpleWindow(AActor* InUser);
    
    UFUNCTION(BlueprintCallable)
    void AddParamList(AActor* InUser, FG01MsgSimpleParamArray InParamList);
    
    UFUNCTION(BlueprintCallable)
    void AddParam(AActor* InUser, FG01MsgSimpleParam InParam);
    
};

