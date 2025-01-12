#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAttachLocation -FallbackName=EAttachLocation
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
#include "G01SEADActiveSoundShared.h"
#include "G01VoiceLanguageID.h"
#include "G01VoiceLoadRequestParam.h"
#include "G01VoicePlay2DParam.h"
#include "G01VoicePlay3DParam.h"
#include "G01VoicePlayAttachParam.h"
#include "G01VoiceReleaseRequestParam.h"
#include "G01VoiceStopParam.h"
#include "G01VoiceManagerAccessor.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01VoiceManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UG01VoiceManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool StopVoice(const FG01VoiceStopParam& InParam);
    
    UFUNCTION(BlueprintCallable)
    void SetupVoiceLanguage(bool& OutIsSuccess, FG01VoiceLanguageID InLanguageID, bool InIsAsync);
    
    UFUNCTION(BlueprintCallable)
    bool RequestVoiceLoad(const FG01VoiceLoadRequestParam& InParam);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseVoice(const FG01VoiceReleaseRequestParam& InParam);
    
    UFUNCTION(BlueprintCallable)
    FG01SEADActiveSoundShared PlayVoiceAttached(const FG01VoicePlayAttachParam& InParam, TEnumAsByte<EAttachLocation::Type> InLocationType);
    
    UFUNCTION(BlueprintCallable)
    FG01SEADActiveSoundShared PlayVoice3D(const FG01VoicePlay3DParam& InParam);
    
    UFUNCTION(BlueprintCallable)
    FG01SEADActiveSoundShared PlayVoice2D(const FG01VoicePlay2DParam& InParam);
    
    UFUNCTION(BlueprintCallable)
    FG01VoiceLanguageID GetCurrentVoiceLanguageID();
    
};

