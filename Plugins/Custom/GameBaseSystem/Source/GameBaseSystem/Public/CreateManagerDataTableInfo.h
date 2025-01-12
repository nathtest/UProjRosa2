#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EManagerCreatePriority.h"
#include "EManagerCreateType.h"
#include "Engine/Datatable.h"
#include "CreateManagerDataTableInfo.generated.h"

class AManagerBase;

USTRUCT(BlueprintType)
struct FCreateManagerDataTableInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AManagerBase> ManagerClassPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EManagerCreatePriority::Type> MPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EManagerCreateType CreateType;
    
    GAMEBASESYSTEM_API FCreateManagerDataTableInfo();
};

