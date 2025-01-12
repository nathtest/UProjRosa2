#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "G01GimmickLevelMoveBase.h"
#include "G01StoneShrineBase.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01StoneShrineBase : public AG01GimmickLevelMoveBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MFadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MFadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform MInteractTransform;
    
public:
    AG01StoneShrineBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetInteractLocation(FTransform InTransform);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEnableCollision(bool InIsEnable);
    
    UFUNCTION(BlueprintCallable)
    void CompleteEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginEffectFadeOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginEffectFadeIn();
    
};

