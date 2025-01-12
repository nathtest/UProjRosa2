#pragma once
#include "CoreMinimal.h"
#include "SeqCategoryView.generated.h"

USTRUCT(BlueprintType)
struct FSeqCategoryView {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MCategoryID;
    
    GAMEBASESYSTEM_API FSeqCategoryView();
};

