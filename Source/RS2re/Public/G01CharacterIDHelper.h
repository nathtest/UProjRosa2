#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "G01CharacterID.h"
#include "G01CharacterIDHelper.generated.h"

UCLASS(Blueprintable)
class UG01CharacterIDHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UG01CharacterIDHelper();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FG01CharacterID CreateG01CharacterID(FName InCharacterId);
    
};

