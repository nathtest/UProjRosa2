#include "G01VoiceManagerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

UG01VoiceManagerAccessor::UG01VoiceManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_VOICE;
}

bool UG01VoiceManagerAccessor::StopVoice(const FG01VoiceStopParam& InParam) {
    return false;
}

void UG01VoiceManagerAccessor::SetupVoiceLanguage(bool& OutIsSuccess, FG01VoiceLanguageID InLanguageID, bool InIsAsync) {
}

bool UG01VoiceManagerAccessor::RequestVoiceLoad(const FG01VoiceLoadRequestParam& InParam) {
    return false;
}

void UG01VoiceManagerAccessor::ReleaseVoice(const FG01VoiceReleaseRequestParam& InParam) {
}

FG01SEADActiveSoundShared UG01VoiceManagerAccessor::PlayVoiceAttached(const FG01VoicePlayAttachParam& InParam, TEnumAsByte<EAttachLocation::Type> InLocationType) {
    return FG01SEADActiveSoundShared{};
}

FG01SEADActiveSoundShared UG01VoiceManagerAccessor::PlayVoice3D(const FG01VoicePlay3DParam& InParam) {
    return FG01SEADActiveSoundShared{};
}

FG01SEADActiveSoundShared UG01VoiceManagerAccessor::PlayVoice2D(const FG01VoicePlay2DParam& InParam) {
    return FG01SEADActiveSoundShared{};
}

FG01VoiceLanguageID UG01VoiceManagerAccessor::GetCurrentVoiceLanguageID() {
    return FG01VoiceLanguageID{};
}


