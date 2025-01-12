#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EUiControllerId.h"
#include "EUiNotify.h"
#include "Engine/DataTable.h"
#include "UiNotifyParameter.generated.h"

USTRUCT(BlueprintType)
struct FUiNotifyParameter : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUiNotify NotifyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EUiControllerId> ControllerIdList;
    
    GAMEBASESYSTEM_API FUiNotifyParameter();
};

