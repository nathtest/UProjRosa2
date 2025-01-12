#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "Templates/SubclassOf.h"
#include "Engine/Datatable.h"
#include "G01DebugTabPageTableRowStruct.generated.h"

class UDebugMenuTabBase;

USTRUCT(BlueprintType)
struct FG01DebugTabPageTableRowStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDebugMenuTabBase> Tab;
    
    GAMEBASESYSTEM_API FG01DebugTabPageTableRowStruct();
};

