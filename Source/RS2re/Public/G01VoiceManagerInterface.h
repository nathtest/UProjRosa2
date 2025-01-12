#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01SEADActiveSoundShared.h"
#include "G01VoiceLanguageID.h"
#include "G01VoiceLoadRequestParam.h"
#include "G01VoicePlay2DParam.h"
#include "G01VoicePlay3DParam.h"
#include "G01VoicePlayAttachParam.h"
#include "G01VoiceReleaseRequestParam.h"
#include "G01VoiceStopParam.h"
#include "G01VoiceManagerInterface.generated.h"

UINTERFACE(Blueprintable)
class UG01VoiceManagerInterface : public UInterface {
    GENERATED_BODY()
};

class IG01VoiceManagerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_VoiceManager_StopVoice(const FG01VoiceStopParam& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_VoiceManager_RequestVoiceLoad(const FG01VoiceLoadRequestParam& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VoiceManager_ReleaseVoice(const FG01VoiceReleaseRequestParam& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FG01SEADActiveSoundShared Inf_VoiceManager_PlayVoiceAttached(const FG01VoicePlayAttachParam& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FG01SEADActiveSoundShared Inf_VoiceManager_PlayVoice3D(const FG01VoicePlay3DParam& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FG01SEADActiveSoundShared Inf_VoiceManager_PlayVoice2D(const FG01VoicePlay2DParam& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FG01VoiceLanguageID Inf_VoiceManager_GetCurrentVoiceLanguageID();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01VoiceManager_SetupVoiceLanguage(bool& OutIsSuccess, FG01VoiceLanguageID InLanguageID, bool InIsAsync);
    
};

