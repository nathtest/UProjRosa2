#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h" //CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "Templates/SubclassOf.h"
#include "G01ArtsBehaviourTableRow.generated.h"

class UG01ArtsBehaviourBase;

USTRUCT(BlueprintType)
struct FG01ArtsBehaviourTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UG01ArtsBehaviourBase> MBehaviourObjectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsProcessToFaintOrDeath;
    
    RS2RE_API FG01ArtsBehaviourTableRow();
};

