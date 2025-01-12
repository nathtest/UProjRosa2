#pragma once
#include "CoreMinimal.h"
#include "ReceiveInteractEventInfo.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ReceiveInteractEventInfo -FallbackName=ReceiveInteractEventInfo
#include "EG01GimmickType.h"
#include "G01GimmickDoorSettingTableRow.h"
#include "G01GimmickLevelMoveBase.h"
#include "G01GimmickLevelMoveActionBase.generated.h"

class UDataTable;
class USQEXSEADSoundBank;

UCLASS(Blueprintable)
class RS2RE_API AG01GimmickLevelMoveActionBase : public AG01GimmickLevelMoveBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReceiveInteractEventInfo MLevelMoveEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MDoorTypeDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MDoorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01GimmickType MGimmickType;
    
public:
    AG01GimmickLevelMoveActionBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void GetOpenSound(USQEXSEADSoundBank*& OutSoundBank, FName& OutSoundName);
    
    UFUNCTION(BlueprintCallable)
    FG01GimmickDoorSettingTableRow GetDoorSetting();
    
    UFUNCTION(BlueprintCallable)
    void GetCloseSound(USQEXSEADSoundBank*& OutSoundBank, FName& OutSoundName);
    
};

