#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "G01FriendNpcParamTableRow.generated.h"

class AG01FieldNpcBase;

USTRUCT(BlueprintType)
struct FG01FriendNpcParamTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AG01FieldNpcBase> MObjectSoftPtr;
    
    RS2RE_API FG01FriendNpcParamTableRow();
};

