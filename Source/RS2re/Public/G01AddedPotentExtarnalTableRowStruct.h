#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h" //CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "G01AddedPotentBaseKeyStruct.h"
#include "Templates/SubclassOf.h"
#include "G01AddedPotentExtarnalTableRowStruct.generated.h"

class AG01AddedPotentExtarnalObjectBase;

USTRUCT(BlueprintType)
struct FG01AddedPotentExtarnalTableRowStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AddedPotentBaseKeyStruct Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AG01AddedPotentExtarnalObjectBase> Object;
    
    RS2RE_API FG01AddedPotentExtarnalTableRowStruct();
};

