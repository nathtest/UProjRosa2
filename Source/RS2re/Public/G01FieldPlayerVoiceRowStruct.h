#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "Engine/DataTable.h"
#include "G01FieldPlayerVoiceRowStruct.generated.h"

USTRUCT(BlueprintType)
struct FG01FieldPlayerVoiceRowStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Comment;
    
    RS2RE_API FG01FieldPlayerVoiceRowStruct();
};

