#pragma once
#include "CoreMinimal.h"
#include "AppUserWidgetPointerHandleListInfo.generated.h"

USTRUCT(BlueprintType)
struct FAppUserWidgetPointerHandleListInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ObjectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NotifyName;
    
    WIDGETBASESYSTEM_API FAppUserWidgetPointerHandleListInfo();
};

