#pragma once
#include "CoreMinimal.h"
#include "G01MenuSortSaveDataStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01MenuSortSaveDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeaponSortIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShieldSortIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ArmorSortIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemSortIndex;
    
    FG01MenuSortSaveDataStruct();
};

