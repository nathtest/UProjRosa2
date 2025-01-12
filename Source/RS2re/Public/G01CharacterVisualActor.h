#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "CharacterVisualActor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=CharacterVisualActor -FallbackName=CharacterVisualActor
#include "LipsyncParam.h" //CROSS-MODULE INCLUDE V2: -ModuleName=LipSyncCurve -ObjectName=LipsyncParam -FallbackName=LipsyncParam
#include "EG01VAIkPartType.h"
#include "EG01VisualActorSizeType.h"
#include "G01CharacterVisualActorInf.h"
#include "G01LipSyncPlaybackComponentOwnerInf.h"
#include "G01VACcdikTargetParam.h"
#include "G01VARuntimeIkParam.h"
#include "G01VisualActorInf.h"
#include "G01CharacterVisualActor.generated.h"

class AG01CharacterVisualActor;
class UG01FootstepDataAsset;
class UG01LipSyncPlaybackComponent;

UCLASS(Blueprintable)
class RS2RE_API AG01CharacterVisualActor : public ACharacterVisualActor, public IG01VisualActorInf, public IG01CharacterVisualActorInf, public IG01LipSyncPlaybackComponentOwnerInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01VisualActorSizeType MSizeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01VARuntimeIkParam RuntimeIkParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01LipSyncPlaybackComponent* LipsyncPlaybackComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UG01FootstepDataAsset* FootstepData;
    
public:
    AG01CharacterVisualActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UnregisterIK(EG01VAIkPartType InPart);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetIsUseEmissiveBaseColor(bool InIsUseEmissiveBaseColor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEmissiveRimReduce(float InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEmissiveInvalidateMaskRate(float InRate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDisintegrationRate(float InRate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCustomizeBaseColor(const FLinearColor& InColor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAddEmissiveColor(const FLinearColor& InColor);
    
    UFUNCTION(BlueprintCallable)
    void RegisterIK_CCDIK(EG01VAIkPartType InPart, const FG01VACcdikTargetParam& InTargetParam, bool InIsActivate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateTemplateBP(AG01CharacterVisualActor* InDefault);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLipsyncParam GetLipsyncParam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01VARuntimeIkParam GetIkParam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void FindIkParam_CCDIK(EG01VAIkPartType InPart, bool& OutIsFound, FG01VACcdikTargetParam& OutParam) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    bool DeactivateIK(EG01VAIkPartType InPart);
    
    UFUNCTION(BlueprintCallable)
    bool ActivateIK(EG01VAIkPartType InPart);
    

    // Fix for true pure virtual functions not being implemented
};

