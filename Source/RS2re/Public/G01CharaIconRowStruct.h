#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "Engine/DataTable.h"
#include "G01CharaIconRowStruct.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FG01CharaIconRowStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> MIconTexture;
    
    RS2RE_API FG01CharaIconRowStruct();
};

