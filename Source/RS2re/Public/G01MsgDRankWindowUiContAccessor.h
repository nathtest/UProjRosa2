#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=ETextJustify -FallbackName=ETextJustify
#include "G01MsgUiControllerAccessorBase.h"
#include "G01MsgWindowParamArray.h"
#include "G01MsgWindowParamByFlag.h"
#include "G01MsgWindowParamByQuestProgress.h"
#include "G01MsgDRankWindowUiContAccessor.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01MsgDRankWindowUiContAccessor : public UG01MsgUiControllerAccessorBase {
    GENERATED_BODY()
public:
    UG01MsgDRankWindowUiContAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool ShowWindowByQuestProgress(const TEnumAsByte<ETextJustify::Type>& InJustify, const FG01MsgWindowParamByQuestProgress& InParam);
    
    UFUNCTION(BlueprintCallable)
    bool ShowWindowByFlag(const TEnumAsByte<ETextJustify::Type>& InJustify, const FG01MsgWindowParamByFlag& InParam);
    
    UFUNCTION(BlueprintCallable)
    bool ShowWindow(const TEnumAsByte<ETextJustify::Type>& InJustify, const FG01MsgWindowParamArray& InParam);
    
    UFUNCTION(BlueprintCallable)
    void CloseWindow();
    
};

