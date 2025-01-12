#pragma once
#include "CoreMinimal.h"
#include "SequenceResources.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SequenceResources -FallbackName=SequenceResources
#include "G01LipSyncLoadedRessources.h"
#include "G01SeqMsgVoiceWaitEventParam.h"
#include "G01SeqNotifyBgmPlaybackParam.h"
#include "G01VoiceLoadInfo.h"
#include "G01SequenceResources.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01SequenceResources : public USequenceResources {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MEffectRequestNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MVFXRequestNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01LipSyncLoadedRessources MLipSyncResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01VoiceLoadInfo VoiceInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FG01SeqMsgVoiceWaitEventParam> VoiceWaitEventParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsUseBinderArtsNameCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FG01SeqNotifyBgmPlaybackParam> BgmPlaybackParams;
    
public:
    UG01SequenceResources();

};

