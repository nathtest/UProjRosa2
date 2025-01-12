#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EWidgetType.h"
#include "Engine/Datatable.h"
#include "CreateUiControllerDataTableInfo.generated.h"

class AUiController;

USTRUCT(BlueprintType)
struct FCreateUiControllerDataTableInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AUiController> UiControllerSoftClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EWidgetType> CreateTriggerWidgetTypeList;
    
    GAMEBASESYSTEM_API FCreateUiControllerDataTableInfo();
};

