#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "G01BattleCharacteristic.h"
#include "G01CharacteristicFunctionLib.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01CharacteristicFunctionLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UG01CharacteristicFunctionLib();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ConverteTo(FName InName, G01BattleCharacteristic& OutCharacteristic);
    
};

