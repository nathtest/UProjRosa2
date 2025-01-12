#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "G01BgmLayerHandleObject.generated.h"

UCLASS(Blueprintable)
class UG01BgmLayerHandleObject : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Owner;
    
public:
    UG01BgmLayerHandleObject();

    UFUNCTION(BlueprintCallable)
    void SetVolume(float In, float InFadeTime);
    
    UFUNCTION(BlueprintCallable)
    void Release(float InFadeTime);
    
    UFUNCTION(BlueprintCallable)
    float GetVolume();
    
    UFUNCTION(BlueprintCallable)
    float GetFadeTime();
    
};

