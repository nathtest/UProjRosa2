#pragma once
#include "CoreMinimal.h"
#include "G01MsgChoiceCrownParam.h"
#include "G01MsgChoiceParam.h"
#include "G01MsgChoiceUseCrownDataParamID.h"
#include "G01MsgUiControllerAccessorBase.h"
#include "G01ThroneMenuUiControllerDataStructID.h"
#include "G01MsgChoiceUiContAccessor.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01MsgChoiceUiContAccessor : public UG01MsgUiControllerAccessorBase {
    GENERATED_BODY()
public:
    UG01MsgChoiceUiContAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool ShowChoiceWindow(AActor* InUser, AActor* InRequester, const FG01MsgChoiceParam& InParam);
    
    UFUNCTION(BlueprintCallable)
    bool ShowChoiceUseImperialCrownWindow(AActor* InUser, AActor* InRequester, const FString& CommonText, FG01MsgChoiceUseCrownDataParamID ChoiceID);
    
    UFUNCTION(BlueprintCallable)
    bool ShowChoiceUseImperialCrownBuildThroneWindow(AActor* InUser, AActor* InRequester, const FString& CommonText, FG01MsgChoiceUseCrownDataParamID ChoiceID, FG01ThroneMenuUiControllerDataStructID ThroneID);
    
    UFUNCTION(BlueprintCallable)
    bool ShowChoiceUseCrownWindow(AActor* InUser, AActor* InRequester, const FString& CommonText, FG01MsgChoiceUseCrownDataParamID ChoiceID);
    
    UFUNCTION(BlueprintCallable)
    bool ShowChoiceOldUseImperialCrownWindow(AActor* InUser, AActor* InRequester, const FG01MsgChoiceCrownParam& InParam);
    
    UFUNCTION(BlueprintCallable)
    bool ShowChoiceOldUseImperialCrownBuildThroneWindow(AActor* InUser, AActor* InRequester, const FG01MsgChoiceCrownParam& InParam, FG01ThroneMenuUiControllerDataStructID ThroneID);
    
    UFUNCTION(BlueprintCallable)
    bool ShowChoiceOldUseCrownWindow(AActor* InUser, AActor* InRequester, const FG01MsgChoiceCrownParam& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChoiceIndex() const;
    
    UFUNCTION(BlueprintCallable)
    void CloseChoiceWindow(AActor* InUser);
    
};

