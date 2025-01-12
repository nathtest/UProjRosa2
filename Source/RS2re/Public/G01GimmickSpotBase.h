#pragma once
#include "CoreMinimal.h"
#include "FlagAccessParam.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagAccessParam -FallbackName=FlagAccessParam
#include "FlagIDListViewStruct.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagIDListViewStruct -FallbackName=FlagIDListViewStruct
#include "ReceiveInteractEventInfo.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ReceiveInteractEventInfo -FallbackName=ReceiveInteractEventInfo
#include "EG01SpotScopeType.h"
#include "G01GimmickObjectBase.h"
#include "G01GimmickSpotBase.generated.h"

class UFlagSystemManagerAccessCompo;
class UObject;
class USQEXSEADSoundBank;

UCLASS(Blueprintable)
class RS2RE_API AG01GimmickSpotBase : public AG01GimmickObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReceiveInteractEventInfo MSpotEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFlagSystemManagerAccessCompo* MFlagManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagAccessParam MFlagAccessParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlagIDListViewStruct MTargetFlagID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01SpotScopeType MScopeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USQEXSEADSoundBank> MSoundBankTouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USQEXSEADSoundBank> MSoundBankAction;
    
public:
    AG01GimmickSpotBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SpotFinish();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SpotAction();
    
    UFUNCTION(BlueprintCallable)
    void SetSpotEffect(UObject* InSpotEffect);
    
protected:
    UFUNCTION(BlueprintCallable)
    void GetTouchSound(USQEXSEADSoundBank*& OutSoundBank, FName& OutSoundName);
    
public:
    UFUNCTION(BlueprintCallable)
    UObject* GetSpotEffect();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool GetFlag();
    
    UFUNCTION(BlueprintCallable)
    void GetActionSound(USQEXSEADSoundBank*& OutSoundBank, FName& OutSoundName);
    
};

