#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputActionKeyMapping -FallbackName=InputActionKeyMapping
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputAxisKeyMapping -FallbackName=InputAxisKeyMapping
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=RichImageRow -FallbackName=RichImageRow
#include "Engine\DataTable.h"
#include <Components/RichTextBlockImageDecorator.h>
#include <GameFramework/PlayerInput.h>
#include "PlatformKeyIconTableRow.generated.h"


USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FPlatformKeyIconTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichImageRow Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputActionKeyMapping> ActionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputAxisKeyMapping> AxisList;
    
    FPlatformKeyIconTableRow();
};

