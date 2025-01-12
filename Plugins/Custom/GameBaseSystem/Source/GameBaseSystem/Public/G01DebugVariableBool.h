#pragma once
#include "CoreMinimal.h"
#include "G01DebugVariableBase.h"
#include "G01DebugVariableBool.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UG01DebugVariableBool : public UG01DebugVariableBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Value;
    
public:
    UG01DebugVariableBool();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Set(bool In);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    void Get(bool& Out);
    
};

