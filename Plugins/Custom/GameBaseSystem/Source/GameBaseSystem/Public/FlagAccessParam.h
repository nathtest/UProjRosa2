#pragma once
#include "CoreMinimal.h"
#include "EFlagSystemGroup.h"
#include "FlagAccessParam.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FFlagAccessParam {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AdminID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFlagSystemGroup::Type> Group;
    
public:
    FFlagAccessParam();
};

