#pragma once
#include "CoreMinimal.h"
#include "EG01InitialArtsType.h"
#include "G01InitialArtsInfo.generated.h"

USTRUCT(BlueprintType)
struct FG01InitialArtsInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ArtsName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01InitialArtsType ArtsType;
    
    RS2RE_API FG01InitialArtsInfo();
};

