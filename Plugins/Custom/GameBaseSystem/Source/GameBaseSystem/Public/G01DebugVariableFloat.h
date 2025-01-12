#pragma once
#include "CoreMinimal.h"
#include "G01DebugVariableBase.h"
#include "G01DebugVariableFloat.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UG01DebugVariableFloat : public UG01DebugVariableBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
public:
    UG01DebugVariableFloat();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Set(float In);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    void Get(float& Out);
    
};

