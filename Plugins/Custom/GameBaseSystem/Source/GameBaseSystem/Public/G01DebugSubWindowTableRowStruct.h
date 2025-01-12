#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "Templates/SubclassOf.h"
#include "Engine/Datatable.h"
#include "G01DebugSubWindowTableRowStruct.generated.h"

class UG01DebugMenuSubWindow;

USTRUCT(BlueprintType)
struct FG01DebugSubWindowTableRowStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UG01DebugMenuSubWindow> SubWindow;
    
    GAMEBASESYSTEM_API FG01DebugSubWindowTableRowStruct();
};

