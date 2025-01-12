#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ReceiveInteractEventInfo.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ReceiveInteractEventInfo -FallbackName=ReceiveInteractEventInfo
#include "EG01WalkingAreaType.h"
#include "G01GimmickObjectBase.h"
#include "G01WalkingAreaBase.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01WalkingAreaBase : public AG01GimmickObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReceiveInteractEventInfo MWalkingEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01WalkingAreaType MAreaType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MWalkSpeed;
    
public:
    AG01WalkingAreaBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartWalking(FName InReceiverName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMoveArrow(const FTransform InTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FTransform GetFinishTransform(const float InDistance, const bool InIsReverse);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndWalking();
    
};

