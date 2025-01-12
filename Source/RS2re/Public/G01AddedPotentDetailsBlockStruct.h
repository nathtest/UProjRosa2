#pragma once
#include "CoreMinimal.h"
#include "EG01AddedPotentBlockEnum.h"
#include "G01AddedPotentBaseKeyStruct.h"
#include "G01AddedPotentDetailsBlockStruct.generated.h"

USTRUCT(BlueprintType)
struct FG01AddedPotentDetailsBlockStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AddedPotentBaseKeyStruct Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01AddedPotentBlockEnum BlockType;
    
    RS2RE_API FG01AddedPotentDetailsBlockStruct();
};

