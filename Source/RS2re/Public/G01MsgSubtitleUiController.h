#pragma once
#include "CoreMinimal.h"
#include "G01MsgSubtitleParam.h"
#include "G01MsgUiControllerBase.h"
#include "G01TextFindResult.h"
#include "G01MsgSubtitleUiController.generated.h"

class AActor;

UCLASS(Blueprintable)
class RS2RE_API AG01MsgSubtitleUiController : public AG01MsgUiControllerBase {
    GENERATED_BODY()
public:
    AG01MsgSubtitleUiController(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenSubtitle(AActor* InUser, const FG01MsgSubtitleParam& InParam, const FG01TextFindResult& InTextFindResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseSubtitle();
    
};

