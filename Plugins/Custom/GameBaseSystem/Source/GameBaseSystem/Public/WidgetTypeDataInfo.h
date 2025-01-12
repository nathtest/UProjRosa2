#pragma once
#include "CoreMinimal.h"
#include "WidgetTypeDataInfo.generated.h"

class UGameViewWidget;

USTRUCT(BlueprintType)
struct FWidgetTypeDataInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGameViewWidget*> MWidgetList;
    
    GAMEBASESYSTEM_API FWidgetTypeDataInfo();
};

