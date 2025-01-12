#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h" //CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "VFXID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=VFXID -FallbackName=VFXID
#include "EG01BattleArtsType.h"
#include "VFXID.h"
#include "G01BattleArtsCastVFXTableRow.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleArtsCastVFXTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01BattleArtsType MArtsType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVFXID MVFXID;
    
    FG01BattleArtsCastVFXTableRow();
};

