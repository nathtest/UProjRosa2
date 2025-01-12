#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=GenerateConditions -FallbackName=GenerateConditions
#include "ReceiveInteractEventInfo.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ReceiveInteractEventInfo -FallbackName=ReceiveInteractEventInfo
#include "G01GimmickObjectBase.h"
#include "G01GimmickMemoryPlaybackDeviceBase.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01GimmickMemoryPlaybackDeviceBase : public AG01GimmickObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReceiveInteractEventInfo MReceiveInteractEventInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenerateConditions MGenerateConditions2;
    
public:
    AG01GimmickMemoryPlaybackDeviceBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEnableCollision(bool InIsEnable);
    
    UFUNCTION(BlueprintCallable)
    void CheckGenerateConditions2(bool& OutResult);
    
};

