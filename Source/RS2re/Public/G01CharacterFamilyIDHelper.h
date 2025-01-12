#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EG01CharacterFamilyID.h"
#include "G01CharacterFamilyIDHelper.generated.h"

UCLASS(Blueprintable)
class UG01CharacterFamilyIDHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UG01CharacterFamilyIDHelper();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EG01CharacterFamilyID ConvertFNameToFamilyID(FName InFame);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName ConvertFamilyIDToFName(EG01CharacterFamilyID InFamilyID);
    
};

