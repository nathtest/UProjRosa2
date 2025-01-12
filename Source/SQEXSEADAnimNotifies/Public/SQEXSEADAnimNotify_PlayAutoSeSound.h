#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
//CROSS-MODULE INCLUDE V2: -ModuleName=SQEXSEAD -ObjectName=ESQEXSEADAutoSeMotionSoundType -FallbackName=ESQEXSEADAutoSeMotionSoundType
#include "SQEXSEADAnimNotify_PlayAutoSeSound.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class SQEXSEADANIMNOTIFIES_API USQEXSEADAnimNotify_PlayAutoSeSound : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESQEXSEADAutoSeMotionSoundType::Type> MotionSoundType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneOrSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MotionSoundIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlaySoundVolume;
    
    USQEXSEADAnimNotify_PlayAutoSeSound();

};

