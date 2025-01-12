#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ESoundCategoryID.h"
#include "SoundSystemFuncLib.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API USoundSystemFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USoundSystemFuncLib();

    UFUNCTION(BlueprintCallable)
    static FName Func_InsertSoundCategory(ESoundCategoryID InInsertCategory, const FName& InSoundID);
    
    UFUNCTION(BlueprintCallable)
    static ESoundCategoryID Func_GetSoundCategoryID(const FName& InSoundID);
    
};

