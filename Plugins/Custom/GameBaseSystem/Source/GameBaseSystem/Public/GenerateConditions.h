#pragma once
#include "CoreMinimal.h"
#include "EGenInitVisibility.h"
#include "GenerateConditionAND.h"
#include "GenerateConditionFlagAND.h"
#include "GenerateConditions.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FGenerateConditions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGenInitVisibility MInitVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsAndCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGenerateConditionAND> MConditionsOR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGenerateConditionFlagAND> MFlagConditionsOR;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool MIsCached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool MIsHasAnyConditionQuestProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool MIsHasAnyConditionFlag;
    
public:
    FGenerateConditions();
};

