#pragma once
#include "CoreMinimal.h"
#include "G01ConfigMenuButtonNavi.h"
#include "G01ConfigMenuDisplayParam.generated.h"

USTRUCT(BlueprintType)
struct FG01ConfigMenuDisplayParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InfoText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01ConfigMenuButtonNavi> ButtonNaviList;
    
    RS2RE_API FG01ConfigMenuDisplayParam();
};

