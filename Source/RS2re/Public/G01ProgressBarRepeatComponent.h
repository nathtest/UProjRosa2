#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "G01ProgressBarRepeatComponent_OnEndedProgressBarDelegate.h"
#include "G01ProgressBarRepeatComponent_OnMaxDelegateDelegate.h"
#include "G01ProgressBarRepeatComponent_OnOverTurningPointDelegateDelegate.h"
#include "G01ProgressBarRepeatComponent_OnUpdateDelegateDelegate.h"
#include "G01ProgressBarRepeatComponent.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01ProgressBarRepeatComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WidgetObject;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProgressBarAnimSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> OverrideProgressBarAnimSpeed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01ProgressBarRepeatComponent_OnMaxDelegate OnProgressBarMax;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01ProgressBarRepeatComponent_OnOverTurningPointDelegate OnPathOverTurningPoint;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01ProgressBarRepeatComponent_OnUpdateDelegate OnUpdateProgressBar;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01ProgressBarRepeatComponent_OnEndedProgressBar OnEndedProgressBar;
    
    UG01ProgressBarRepeatComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ThrowUseGaugeInfo();
    
    UFUNCTION(BlueprintCallable)
    void SetWidget(UObject* InWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetTurningPointList(const TArray<float>& InList, bool IsUseAnime);
    
    UFUNCTION(BlueprintCallable)
    void SetReverseUsedAnimationIndex(bool In);
    
    UFUNCTION(BlueprintCallable)
    void SetRepeatCount(int32 InCount);
    
    UFUNCTION(BlueprintCallable)
    void SetPercentage(float InPercent, int32 InIndex, bool InImmediate);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxPercentage(float InMax);
    
    UFUNCTION(BlueprintCallable)
    void GetTurningPoint(float InPercent, int32& OutPointIndex);
    
    UFUNCTION(BlueprintCallable)
    void GetPercentage(int32 InIndex, float& OutPercent);
    
    UFUNCTION(BlueprintCallable)
    void GetAnimPercentage(int32 InIndex, float& OutPercent);
    
};

