#pragma once
#include "CoreMinimal.h"
#include "G01GimmickDoorSettingTableRow.h"
#include "G01GimmickObjectBase.h"
#include "G01GimmickDoorBase.generated.h"

class UAnimationAsset;
class UDataTable;
class UObject;
class USQEXSEADSoundBank;

UCLASS(Blueprintable)
class RS2RE_API AG01GimmickDoorBase : public AG01GimmickObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MDoorTypeDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MDoorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MAutoClose;
    
public:
    AG01GimmickDoorBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDoorMesh(UObject* InDoorMesh);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayDoorAnimation(bool InIsOpen, bool InIsForward);
    
    UFUNCTION(BlueprintCallable)
    void GetUnlockedSound(USQEXSEADSoundBank*& OutSoundBank, FName& OutSoundName);
    
    UFUNCTION(BlueprintCallable)
    void GetLockedSound(USQEXSEADSoundBank*& OutSoundBank, FName& OutSoundName);
    
private:
    UFUNCTION(BlueprintCallable)
    FG01GimmickDoorSettingTableRow GetDoorSetting();
    
public:
    UFUNCTION(BlueprintCallable)
    UObject* GetDoorMesh();
    
protected:
    UFUNCTION(BlueprintCallable)
    UAnimationAsset* GetDoorAnimationAsset(bool InIsOpen, bool InIsForward);
    
};

