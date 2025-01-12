#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADBankSoundEntry.h" //CROSS-MODULE INCLUDE V2: -ModuleName=SQEXSEAD -ObjectName=SQEXSEADBankSoundEntry -FallbackName=SQEXSEADBankSoundEntry
#include "G01AnimNotifyState.h"
#include "G01AnimNotifyState_SEADPlaySound.generated.h"

class USQEXSEADSoundAttenuation;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class RS2RE_API UG01AnimNotifyState_SEADPlaySound : public UG01AnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlayPositionSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQEXSEADBankSoundEntry BankSoundEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEXSEADSoundAttenuation* AttenuationAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlayAttach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutTime;
    
public:
    UG01AnimNotifyState_SEADPlaySound();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetPausedSound(FName InOwnerName, bool InOwnerEnable) const;
    
};

