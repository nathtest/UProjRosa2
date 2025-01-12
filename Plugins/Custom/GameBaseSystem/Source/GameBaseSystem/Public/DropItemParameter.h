#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "DropItem.h"
#include "Engine/Datatable.h"
#include "DropItemParameter.generated.h"

USTRUCT(BlueprintType)
struct FDropItemParameter : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MDropName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDropItem> MDropItemInfos;
    
    GAMEBASESYSTEM_API FDropItemParameter();
};

