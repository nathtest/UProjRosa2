#pragma once
#include "CoreMinimal.h"
#include "EG01LadderMoveType.h"
#include "G01AnimNotify_SEADPlaySound3D.h"
#include "G01AnimNotify_LadderPlaySound.generated.h"

class USQEXSEADSoundAttenuation;

UCLASS(Abstract, Blueprintable, CollapseCategories)
class RS2RE_API UG01AnimNotify_LadderPlaySound : public UG01AnimNotify_SEADPlaySound3D {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlayPositionSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEXSEADSoundAttenuation* AttenuationAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlayAttach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01LadderMoveType LadderMoveType;
    
public:
    UG01AnimNotify_LadderPlaySound();

};

