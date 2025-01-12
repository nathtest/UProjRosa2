#pragma once
#include "CoreMinimal.h"
#include "G01DebugVariableBase.h"
#include "G01DebugVariableInt.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UG01DebugVariableInt : public UG01DebugVariableBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
public:
    UG01DebugVariableInt();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Set(int32 In);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    void Get(int32& Out);
    
};

