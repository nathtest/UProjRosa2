#pragma once
#include "CoreMinimal.h"
#include "AppUserWidgetDevelopmentMemoInfo.generated.h"

USTRUCT(BlueprintType)
struct FAppUserWidgetDevelopmentMemoInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Content;
    
    WIDGETBASESYSTEM_API FAppUserWidgetDevelopmentMemoInfo();
};

