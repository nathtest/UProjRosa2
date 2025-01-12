#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Templates/SubclassOf.h"
#include "EU01AUDFunctionLib.generated.h"

class UAssetUserData;
class UMaterialInstanceConstant;
class UObject;

UCLASS(Blueprintable)
class RS2RE_API UEU01AUDFunctionLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEU01AUDFunctionLib();

    UFUNCTION(BlueprintCallable)
    static UAssetUserData* GetAllAssetUserDataOfMaterialInstance(UMaterialInstanceConstant* TargetObject, TSubclassOf<UAssetUserData> AssetUserDataClass);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllAssetUserDataOfClass(UObject* TargetObject, TSubclassOf<UAssetUserData> AssetUserDataClass, TArray<UAssetUserData*>& OutAssetUserData);
    
};

