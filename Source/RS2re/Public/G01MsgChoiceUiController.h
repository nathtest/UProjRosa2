#pragma once
#include "CoreMinimal.h"
#include "EG01MsgChoiceType.h"
#include "G01MsgChoiceParam.h"
#include "G01MsgChoiceUseCrownDataParamID.h"
#include "G01MsgUiControllerBase.h"
#include "G01ThroneMenuUiControllerDataStructID.h"
#include "Templates/SubclassOf.h"
#include "G01MsgChoiceUiController.generated.h"

class AActor;
class AInputObjectBase;
class UDataTable;

UCLASS(Blueprintable)
class RS2RE_API AG01MsgChoiceUiController : public AG01MsgUiControllerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInputObjectBase> MUseInputObjectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInputObjectBase* MInputObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* MMessageUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MMsgChoceiParamTable;
    
public:
    AG01MsgChoiceUiController(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetShowPos(AActor* InUser, AActor* InRequester, const FG01MsgChoiceParam& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetShowOffset(const FG01MsgChoiceParam& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetChoiceThroneIDTextCrownList(const FG01MsgChoiceUseCrownDataParamID& ChoiceID, const FString& InConbineChoiceText, const FG01ThroneMenuUiControllerDataStructID& ThroneID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetChoiceTextList(const FG01MsgChoiceParam& InParam, const TArray<FText>& InChoiceTextList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetChoiceTextImperialCrownList(const FG01MsgChoiceUseCrownDataParamID& ChoiceID, const FString& InConbineChoiceText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetChoiceTextCrownList(const FG01MsgChoiceUseCrownDataParamID& ChoiceID, const FString& InConbineChoiceText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetChoiceOldThroneIDTextImperialCrownList(const FG01MsgChoiceParam& InParam, const TArray<FText>& InChoiceTextList, const TArray<int32>& InImperialCrownList, const FG01ThroneMenuUiControllerDataStructID& ThroneID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetChoiceOldTextImperialCrownList(const FG01MsgChoiceParam& InParam, const TArray<FText>& InChoiceTextList, const TArray<int32>& InImperialCrownList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetChoiceOldTextCrownList(const FG01MsgChoiceParam& InParam, const TArray<FText>& InChoiceTextList, const TArray<int32>& InCrownList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenWindow(const EG01MsgChoiceType& ChoiceType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenChoiceWindow(const FG01MsgChoiceParam& InParam);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 GetChoiceIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseChoiceWindow();
    
};

