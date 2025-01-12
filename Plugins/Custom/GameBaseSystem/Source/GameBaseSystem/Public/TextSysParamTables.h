#pragma once
#include "CoreMinimal.h"
#include "TextSysParamTables.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FTextSysParamTables {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MTextParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MSpeakerParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MReplaceParamSpTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MTagSpReplaceLogicTable;
    
    GAMEBASESYSTEM_API FTextSysParamTables();
};

