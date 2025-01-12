#pragma once
#include "CoreMinimal.h"
#include "VisualActorAnimInstanceBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=VisualActorAnimInstanceBase -FallbackName=VisualActorAnimInstanceBase
#include "EG01VAPoseType.h"
#include "G01VAAnimInstBasePoseLayerSettings.h"
#include "G01VAAnimInstBasePoseLyaerInfo.h"
#include "G01VAAnimInstPoseBlendSettings.h"
#include "G01VAAnimInstPoseType.h"
#include "G01VisualActorAnimInstInterface.h"
#include "G01VisualActorAnimInstanceBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class RS2RE_API UG01VisualActorAnimInstanceBase : public UVisualActorAnimInstanceBase, public IG01VisualActorAnimInstInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01VAAnimInstPoseType CurrentPoseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01VAAnimInstPoseBlendSettings PoseBlendSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01VAAnimInstBasePoseLayerSettings BasePoseLayerSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01VAAnimInstBasePoseLyaerInfo BasePoseLayerInfo;
    
public:
    UG01VisualActorAnimInstanceBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangePoseTypeBP(EG01VAPoseType InOldPoseType, EG01VAPoseType InNewPoseType);
    

    // Fix for true pure virtual functions not being implemented
};

