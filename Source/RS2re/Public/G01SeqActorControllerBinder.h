#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SequenceActorControllerBinder -FallbackName=SequenceActorControllerBinder
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=VAPartsKey -FallbackName=VAPartsKey
#include "VAPartsKey.h"
#include "SequenceActorControllerBinder.h"
#include "G01SeqActorBinder_AnimSeParams.h"
#include "G01SeqActorBinder_CharaCorrection.h"
#include "G01SeqActorBinder_VisualParams.h"
#include "G01SeqActorControllerBinder.generated.h"

class UG01CharacterManagerAccessor;

UCLASS(Blueprintable)
class RS2RE_API AG01SeqActorControllerBinder : public ASequenceActorControllerBinder {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01CharacterManagerAccessor* CharacterManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FG01SeqActorBinder_CharaCorrection BrutusCharaCorrectionParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FG01SeqActorBinder_VisualParams BrutusVisualParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FG01SeqActorBinder_AnimSeParams BrutusAnimSeParams;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsFirstEvaluation;
    
public:
    AG01SeqActorControllerBinder(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetIsOverride(bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIsAddEmissiveBaseColor(bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetInnerRange(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetEmissiveRimReduce(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetEmissiveRate_Eyes(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetEmissiveInvalidateMaskRate(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetEmissiveColor(const FLinearColor& InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetDisintegrationRate(float InRate);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomizeBaseColor(const FLinearColor& InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAudibleRange(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetActorBasePositionType(const FVAPartsKey& InKey, bool InIsForcePoseUpdate);
    
public:
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_UpdateCharaBasePosition(FVAPartsKey InKey);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_RP_UpdateCharaBasePosition(FVAPartsKey InKey);
    
};

