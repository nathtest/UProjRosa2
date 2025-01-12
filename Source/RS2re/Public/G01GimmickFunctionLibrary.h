#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "G01GimmickFunctionLibrary.generated.h"

class USQEXSEADSoundBank;

UCLASS(Blueprintable)
class RS2RE_API UG01GimmickFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UG01GimmickFunctionLibrary();

protected:
    UFUNCTION(BlueprintCallable)
    static void GetStringArrayFromNameArray(TArray<FName> InNameArray, TArray<FString>& OutStringArray);
    
    UFUNCTION(BlueprintCallable)
    static void GetSoundNameByIndex(USQEXSEADSoundBank* InSoundBank, int32 InIndex, FName& OutSoundName);
    
};

