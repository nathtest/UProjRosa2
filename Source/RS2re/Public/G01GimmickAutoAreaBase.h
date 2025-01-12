#pragma once
#include "CoreMinimal.h"
#include "ReceiveInteractEventInfo.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ReceiveInteractEventInfo -FallbackName=ReceiveInteractEventInfo
#include "G01GimmickObjectBase.h"
#include "G01GimmickAutoAreaBase.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01GimmickAutoAreaBase : public AG01GimmickObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReceiveInteractEventInfo MAutoEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUseCustomInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MIntervalSeconds;
    
public:
    AG01GimmickAutoAreaBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetTimer();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableAction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetIntervalSeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetCustomIntervalSeconds() const;
    
};

