#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "Engine/DataTable.h"
#include "EG01CharacterVisualType.h"
#include "G01CharaVisualInfoStruct.h"
#include "G01CharaVisualInfoRowStruct.generated.h"

USTRUCT(BlueprintType)
struct FG01CharaVisualInfoRowStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EG01CharacterVisualType, FG01CharaVisualInfoStruct> CharaVisualInfoListByUseType;
    
    RS2RE_API FG01CharaVisualInfoRowStruct();
};

