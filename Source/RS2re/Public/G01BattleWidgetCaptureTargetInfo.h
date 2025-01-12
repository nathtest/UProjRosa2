#pragma once
#include "CoreMinimal.h"
#include "EWidgetType.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EWidgetType -FallbackName=EWidgetType
#include "EG01BattleWidgetCaptureSameWidgetExclusiveMode.h"
#include "G01BattleWidgetCaptureTargetInfo.generated.h"

class UWidget;

USTRUCT(BlueprintType)
struct FG01BattleWidgetCaptureTargetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWidgetType WidgetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01BattleWidgetCaptureSameWidgetExclusiveMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Team;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWidget*> Widgets;
    
    RS2RE_API FG01BattleWidgetCaptureTargetInfo();
};

