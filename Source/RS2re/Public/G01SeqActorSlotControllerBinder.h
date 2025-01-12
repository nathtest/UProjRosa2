#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "SeqActorSlotControllerBinder.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SeqActorSlotControllerBinder -FallbackName=SeqActorSlotControllerBinder
#include "G01SeqActorBinder_VisualParams.h"
#include "G01SeqActorSlotControllerBinder.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01SeqActorSlotControllerBinder : public ASeqActorSlotControllerBinder {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FG01SeqActorBinder_VisualParams BrutusVisualParams;
    
public:
    AG01SeqActorSlotControllerBinder(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetIsAddEmissiveBaseColor(bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetEmissiveRimReduce(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetEmissiveRate_Eyes(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetEmissiveColor(const FLinearColor& InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetDisintegrationRate(float InRate);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomizeBaseColor(const FLinearColor& InValue);
    
};

