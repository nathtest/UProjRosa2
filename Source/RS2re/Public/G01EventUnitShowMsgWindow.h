#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=ETextJustify -FallbackName=ETextJustify
#include "G01EventUnitTalkBase.h"
#include "G01MsgWindowParamArray.h"
#include "G01EventUnitShowMsgWindow.generated.h"

class AUiController;
class UG01MsgCheckUiContAccessor;

UCLASS(Blueprintable)
class RS2RE_API AG01EventUnitShowMsgWindow : public AG01EventUnitTalkBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01MsgCheckUiContAccessor* MMessageWindowUiAccessor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01MsgWindowParamArray MWindowParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETextJustify::Type> MTextJustify;
    
public:
    AG01EventUnitShowMsgWindow(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnCompleteAllMessage(AUiController* InUiController);
    
};

