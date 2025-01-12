#pragma once
#include "CoreMinimal.h"
#include "ReceiveInteractEventInfo.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ReceiveInteractEventInfo -FallbackName=ReceiveInteractEventInfo
#include "EG01GimmickType.h"
#include "G01GimmickDoorBase.h"
#include "G01GimmickSimpleDoorBase.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01GimmickSimpleDoorBase : public AG01GimmickDoorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReceiveInteractEventInfo MSimpleDoorEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01GimmickType MGimmickType;
    
public:
    AG01GimmickSimpleDoorBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetOpened(bool InOpened);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDoorClose();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsOpened();
    
    UFUNCTION(BlueprintCallable)
    void CheckClose();
    
};

