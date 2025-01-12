#pragma once
#include "CoreMinimal.h"
#include "G01EventUnitTalkBase.h"
#include "G01MsgWindowParamArray.h"
#include "G01EventUnitNormalTalk.generated.h"

class AUiController;
class UG01MsgDRankWindowUiContAccessor;

UCLASS(Blueprintable)
class RS2RE_API AG01EventUnitNormalTalk : public AG01EventUnitTalkBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01MsgDRankWindowUiContAccessor* WindowUiAccessor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01MsgWindowParamArray MWindowParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAutoClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsChangeAIState;
    
public:
    AG01EventUnitNormalTalk(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnCompleteAllMessage(AUiController* InUiController);
    
};

