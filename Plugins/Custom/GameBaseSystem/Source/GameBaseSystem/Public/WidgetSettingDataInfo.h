#pragma once
#include "CoreMinimal.h"
#include "EWidgetType.h"
#include "WidgetDrawDataInfo.h"
#include "WidgetSettingDataInfo.generated.h"

USTRUCT(BlueprintType)
struct FWidgetSettingDataInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsAutoLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWidgetType MWidgetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MWidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MWidgetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWidgetDrawDataInfo MDrawData;
    
    GAMEBASESYSTEM_API FWidgetSettingDataInfo();
};

