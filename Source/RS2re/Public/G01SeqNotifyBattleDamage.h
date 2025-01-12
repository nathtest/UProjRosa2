#pragma once
#include "CoreMinimal.h"
#include "G01SeqNotifyCameraShake.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=G01SeqNotifyCameraShake -FallbackName=G01SeqNotifyCameraShake
#include "VFXExternalParam.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=VFXExternalParam -FallbackName=VFXExternalParam
#include "MovieSceneObjectBindingID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneObjectBindingID -FallbackName=MovieSceneObjectBindingID
#include "SQEXSEADBankSoundEntry.h" //CROSS-MODULE INCLUDE V2: -ModuleName=SQEXSEAD -ObjectName=SQEXSEADBankSoundEntry -FallbackName=SQEXSEADBankSoundEntry
#include "EG01SeqBattleDamageType.h"
#include "G01SeqNotifyBattleDamage.generated.h"

USTRUCT(BlueprintType)
struct FG01SeqNotifyBattleDamage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01SeqBattleDamageType DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneObjectBindingID MAttacker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsSingleTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MTargetIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MTargetIndexList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneObjectBindingID EffectActorBindingID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQEXSEADBankSoundEntry SeBankEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01SeqNotifyCameraShake CameraShakeParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVFXExternalParam MExternalParam;
    
    RS2RE_API FG01SeqNotifyBattleDamage();
};

