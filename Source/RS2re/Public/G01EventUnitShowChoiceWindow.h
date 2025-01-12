#pragma once
#include "CoreMinimal.h"
#include "G01EventUnitTalkBase.h"
#include "G01MsgChoiceParam.h"
#include "G01EventUnitShowChoiceWindow.generated.h"

class AUiController;
class UG01MsgChoiceUiContAccessor;

UCLASS(Blueprintable)
class RS2RE_API AG01EventUnitShowChoiceWindow : public AG01EventUnitTalkBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01MsgChoiceUiContAccessor* MMessageChoiceUiAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01MsgChoiceParam MParam;
    
public:
    AG01EventUnitShowChoiceWindow(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnWindowDeactivate(AUiController* InMessageObject);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetSelectedIndex() const;
    
};

