#pragma once
#include "CoreMinimal.h"
#include "ManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerBase -FallbackName=ManagerBase
#include "G01BattleWidgetCaptureCollisionInfo.h"
#include "G01BattleWidgetCaptureDrawBoxInfo.h"
#include "G01BattleWidgetCaptureTargetInfo.h"
#include "UiManagerAccessor.h"
#include "WidgetManagerAccessor.h"
#include "G01BattleWidgetCapture.generated.h"

class UUiManagerAccessor;
class UWidgetManagerAccessor;

UCLASS(Blueprintable)
class RS2RE_API AG01BattleWidgetCapture : public AManagerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FG01BattleWidgetCaptureTargetInfo> CaptureTargetInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FG01BattleWidgetCaptureCollisionInfo> CollisionTestInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FG01BattleWidgetCaptureDrawBoxInfo> DrawBoxInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ThresholdFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ThresholdFrameCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float overlapPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUiManagerAccessor* UiManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetManagerAccessor* WidgetManagerAccessor;
    
public:
    AG01BattleWidgetCapture(const FObjectInitializer& ObjectInitializer);

};

