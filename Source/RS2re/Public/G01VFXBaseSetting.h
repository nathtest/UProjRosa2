#pragma once
#include "CoreMinimal.h"
#include "EG01VFXAttachMethod.h"
#include "EG01VFXAttachType.h"
#include "EG01VFXAttachTypeSubInfo.h"
#include "EG01VFXBattleHitSetting.h"
#include "EG01VFXDestActor.h"
#include "EG01VFXDestActorSubCategory.h"
#include "EG01VFXScalingType.h"
#include "G01VFXBaseSetting.generated.h"

USTRUCT(BlueprintType)
struct FG01VFXBaseSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01VFXDestActor VFXDestActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01VFXDestActorSubCategory VFXDestActorSubCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01VFXAttachType VFXAttachType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01VFXAttachTypeSubInfo VFXAttachTypeSubInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VFXAttachNodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01VFXAttachMethod VFXAttachMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01VFXScalingType VFXScalingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VFXUserScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01VFXBattleHitSetting VFXBattleHitSync;
    
    RS2RE_API FG01VFXBaseSetting();
};

