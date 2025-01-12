#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "CharaAnimParam.h"
#include "G01CharaAnimInstanceBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class RS2RE_API UG01CharaAnimInstanceBase : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaAnimParam MCharaAnimParam;
    
public:
    UG01CharaAnimInstanceBase();

    UFUNCTION(BlueprintCallable)
    void SetAnimationAsset();
    
};

