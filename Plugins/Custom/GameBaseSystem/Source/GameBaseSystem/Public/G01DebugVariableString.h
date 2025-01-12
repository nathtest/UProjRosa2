#pragma once
#include "CoreMinimal.h"
#include "G01DebugVariableBase.h"
#include "G01DebugVariableString.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UG01DebugVariableString : public UG01DebugVariableBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
public:
    UG01DebugVariableString();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Set(const FString& In);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    void Get(FString& Out);
    
};

