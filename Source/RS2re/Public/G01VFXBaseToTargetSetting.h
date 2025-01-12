#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EG01VFXAttachMethod.h"
#include "EG01VFXAttachType.h"
#include "EG01VFXAttachTypeSubInfo.h"
#include "EG01VFXDestActor.h"
#include "EG01VFXDestActorSubCategory.h"
#include "G01VFXBaseToTargetSetting.generated.h"

USTRUCT(BlueprintType)
struct FG01VFXBaseToTargetSetting {
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
    FVector VFXImpactTargetOffset;
    
    RS2RE_API FG01VFXBaseToTargetSetting();
};

