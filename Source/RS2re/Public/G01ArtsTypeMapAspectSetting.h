#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h" //CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EG01BattleArtsType.h"
#include "EG01MapAspectType.h"
#include "G01ArtsTypeMapAspectSetting.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01ArtsTypeMapAspectSetting : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01BattleArtsType MArtsType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01MapAspectType MPrimaryMapAspectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01MapAspectType MSecondaryMapAspectType;
    
    FG01ArtsTypeMapAspectSetting();
};

