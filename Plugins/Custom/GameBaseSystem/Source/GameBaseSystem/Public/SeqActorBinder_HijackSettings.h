#pragma once
#include "CoreMinimal.h"
#include "EVisualActorAnimQuality.h"
#include "SeqActorBinder_HijackSettings.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSeqActorBinder_HijackSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsPlayAnimationBySequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVisualActorAnimQuality AnimQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MTargetTakeOverAnimBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsUseInGamePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MHijackPriority;
    
    FSeqActorBinder_HijackSettings();
};

