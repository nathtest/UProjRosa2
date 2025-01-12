#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EManagerCreateType.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataTable.h"
#include "PreCreateManagerDataTableInfo.generated.h"

class AManagerBase;

USTRUCT(BlueprintType)
struct FPreCreateManagerDataTableInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AManagerBase> ManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EManagerCreateType CreateType;
    
    GAMEBASESYSTEM_API FPreCreateManagerDataTableInfo();
};

