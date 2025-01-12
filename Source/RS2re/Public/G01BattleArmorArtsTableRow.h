#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h" //CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "G01AddedPotentBaseKeyStruct.h"
#include "G01BattleArmorArtsTableRow.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleArmorArtsTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ArmorItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01AddedPotentBaseKeyStruct> AddedPotentList;
    
    FG01BattleArmorArtsTableRow();
};

