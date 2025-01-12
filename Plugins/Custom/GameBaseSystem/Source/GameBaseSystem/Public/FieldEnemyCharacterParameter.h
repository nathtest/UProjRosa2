#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "Engine/DataTable.h"
#include "FieldEnemyCharacterParameter.generated.h"

class ACharacterBase;

USTRUCT(BlueprintType)
struct FFieldEnemyCharacterParameter : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ACharacterBase> MCreateObjectClassPtr;
    
    GAMEBASESYSTEM_API FFieldEnemyCharacterParameter();
};

