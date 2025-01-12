#pragma once
#include "CoreMinimal.h"
#include "FlagIDListViewStruct.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagIDListViewStruct -FallbackName=FlagIDListViewStruct
#include "ReceiveInteractEventInfo.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ReceiveInteractEventInfo -FallbackName=ReceiveInteractEventInfo
#include "G01GimmickObjectBase.h"
#include "G01PitfallBase.generated.h"

class UAnimationAsset;
class UObject;
class USQEXSEADSoundBank;

UCLASS(Blueprintable)
class RS2RE_API AG01PitfallBase : public AG01GimmickObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReceiveInteractEventInfo MPitfallEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimationAsset> MAnimationCrash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USQEXSEADSoundBank> MSoundBankPreCrash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlagIDListViewStruct MFlagID;
    
public:
    AG01PitfallBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetCoverMesh(UObject* InCoverMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimationFinished();
    
    UFUNCTION(BlueprintCallable)
    bool ResetAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnOpenCover();
    
    UFUNCTION(BlueprintCallable)
    void GetPreCrashSound(USQEXSEADSoundBank*& OutSoundBank, FName& OutSoundName);
    
    UFUNCTION(BlueprintCallable)
    UObject* GetCoverMesh();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ForceOpen();
    
};

