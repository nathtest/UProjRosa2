#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagChangedEventParam -FallbackName=FlagChangedEventParam
#include "FlagIDListViewStruct.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagIDListViewStruct -FallbackName=FlagIDListViewStruct
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "Components/Image.h" //CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Image -FallbackName=Image
#include "G01HudUiControllerObserverInf.h"
#include "G01SwitcherFlagParam.h"
#include "FlagEventReceiveComponent.h"
#include "SwitcherFlagImage.generated.h"

class UFlagEventReceiveComponent;

UCLASS(Blueprintable)
class RS2RE_API USwitcherFlagImage : public UImage, public IG01HudUiControllerObserverInf {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MMemo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlagIDListViewStruct DispFlagID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFlagIDListViewStruct> DispFlagIDList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DispFlagValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlagReverse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush DispBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01SwitcherFlagParam> FlagParamList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFlagEventReceiveComponent* MFlagEventReceiver;
    
public:
    USwitcherFlagImage();

private:
    UFUNCTION(BlueprintCallable)
    void OnFlagChanged(const FFlagChangedEventParam& InParam);
    
public:
    UFUNCTION(BlueprintCallable)
    void ConditionCheck();
    
    UFUNCTION(BlueprintCallable)
    void AddCondition();
    

    // Fix for true pure virtual functions not being implemented
};

