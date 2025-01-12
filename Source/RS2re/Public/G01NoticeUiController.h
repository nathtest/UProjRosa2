#pragma once
#include "CoreMinimal.h"
#include "G01ThroneMenuUiControllerDataStructID.h"
#include "G01UiController.h"
#include "G01NoticeUiController.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01NoticeUiController : public AG01UiController {
    GENERATED_BODY()
public:
    AG01NoticeUiController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool ShowNotice(const FG01ThroneMenuUiControllerDataStructID& ThroneID);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenNotice(const FG01ThroneMenuUiControllerDataStructID& ThroneID);
    
public:
    UFUNCTION(BlueprintCallable)
    void EndNotice();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseNotice();
    
};

