#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "OnPathOverTurningPointDelegateDelegate.h"
#include "OnProgressBarMaxDelegateDelegate.h"
#include "OnUpdateProgressBarDelegateDelegate.h"
#include "G01ProgressBarControlComponent.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01ProgressBarControlComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WidgetObject;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProgressBarAnimSpeed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnProgressBarMaxDelegate OnProgressBarMax;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPathOverTurningPointDelegate OnPathOverTurningPoint;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateProgressBarDelegate OnUpdateProgressBar;
    
    UG01ProgressBarControlComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWidget(UObject* InWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetTurningPointList(const TArray<float>& InList, bool IsUseAnime);
    
    UFUNCTION(BlueprintCallable)
    void SetPercentage(float InPercent, bool InImmediate);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxPercentage(float InMax);
    
    UFUNCTION(BlueprintCallable)
    void GetTurningPoint(float InPercent, int32& OutPointIndex);
    
    UFUNCTION(BlueprintCallable)
    void GetPercentage(float& OutPercent);
    
    UFUNCTION(BlueprintCallable)
    void GetAnimPercentage(float& OutPercent);
    
};

