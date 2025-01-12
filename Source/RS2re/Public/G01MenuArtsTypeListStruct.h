#pragma once
#include "CoreMinimal.h"
#include "EG01BattleArtsType.h"
#include "G01MenuArtsTypeListStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01MenuArtsTypeListStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EG01BattleArtsType> ArtsTypeList;
    
    FG01MenuArtsTypeListStruct();
};

