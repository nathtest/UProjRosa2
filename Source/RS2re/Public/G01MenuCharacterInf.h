#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01MenuCharacterInf.generated.h"

class UAnimSequence;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01MenuCharacterInf : public UInterface {
    GENERATED_BODY()
};

class IG01MenuCharacterInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MenuCharacter_PlayAnimation(UAnimSequence* InAnimationObject, bool IsLooping);
    
};

