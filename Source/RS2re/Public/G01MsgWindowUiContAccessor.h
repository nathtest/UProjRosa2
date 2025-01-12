#pragma once
#include "CoreMinimal.h"
#include "G01MsgUiControllerAccessorBase.h"
#include "G01MsgWindowParamArray.h"
#include "G01MsgWindowParamByFlag.h"
#include "G01MsgWindowParamByQuestProgress.h"
#include "G01MsgWindowUiContAccessor.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01MsgWindowUiContAccessor : public UG01MsgUiControllerAccessorBase {
    GENERATED_BODY()
public:
    UG01MsgWindowUiContAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool ShowWindowByQuestProgress(AActor* InUser, AActor* InRequester, const FG01MsgWindowParamByQuestProgress& InParam, bool InIsAutoClose);
    
    UFUNCTION(BlueprintCallable)
    bool ShowWindowByFlag(AActor* InUser, AActor* InRequester, const FG01MsgWindowParamByFlag& InParam, bool InIsAutoClose);
    
    UFUNCTION(BlueprintCallable)
    bool ShowWindow(AActor* InUser, AActor* InRequester, const FG01MsgWindowParamArray& InParam, bool InIsAutoClose);
    
    UFUNCTION(BlueprintCallable)
    void CloseWindow(AActor* InUser);
    
};

