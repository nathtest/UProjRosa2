#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "AppUserWidgetDataAsset.generated.h"

UCLASS(Blueprintable)
class WIDGETBASESYSTEM_API UAppUserWidgetDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PointerEnterTriggerDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PointerEnterTriggerCursorDelta;
    
    UAppUserWidgetDataAsset();

};

