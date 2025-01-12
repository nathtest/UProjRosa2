#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EG01EnemyFieldSize.h"
#include "Engine/DataTable.h"
#include "G01EnemyPathTolerance.generated.h"

USTRUCT(BlueprintType)
struct FG01EnemyPathTolerance : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01EnemyFieldSize FieldSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ToleranceDistance;
    
    RS2RE_API FG01EnemyPathTolerance();
};

