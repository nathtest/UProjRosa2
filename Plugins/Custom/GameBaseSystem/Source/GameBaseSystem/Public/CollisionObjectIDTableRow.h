#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "Engine/Datatable.h"
#include "CollisionObjectIDTableRow.generated.h"

USTRUCT(BlueprintType)
struct FCollisionObjectIDTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MComment;
    
    GAMEBASESYSTEM_API FCollisionObjectIDTableRow();
};

