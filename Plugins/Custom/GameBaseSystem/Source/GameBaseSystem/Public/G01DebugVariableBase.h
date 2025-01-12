#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "G01DebugMainGameObserverInf.h"
#include "G01DebugSettingCSVKeyStruct.h"
#include "G01DebugVariableBase.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UG01DebugVariableBase : public UObject, public IG01DebugMainGameObserverInf {
    GENERATED_BODY()
public:
    UG01DebugVariableBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Initialize(FG01DebugSettingCSVKeyStruct InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01DebugSettingCSVKeyStruct GetKey();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Finalize();
    

    // Fix for true pure virtual functions not being implemented
};

