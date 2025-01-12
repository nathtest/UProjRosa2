#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "G01SkyLightComponentFunctionLibrary.generated.h"

class USkyLightComponent;

UCLASS(Blueprintable)
class RS2RE_API UG01SkyLightComponentFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UG01SkyLightComponentFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static TArray<FVector4> GetIrradianceEnvironmentMap(USkyLightComponent* InSkyLightComponent);
    
};

