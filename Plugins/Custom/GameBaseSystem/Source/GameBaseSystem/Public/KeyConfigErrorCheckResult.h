#pragma once
#include "CoreMinimal.h"
#include "KeyConfigOperationCategory.h"
#include "KeyConfigErrorCheckResult.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FKeyConfigErrorCheckResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Group;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKeyConfigOperationCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 IndexInCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName AssignID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    FKeyConfigErrorCheckResult();
};

