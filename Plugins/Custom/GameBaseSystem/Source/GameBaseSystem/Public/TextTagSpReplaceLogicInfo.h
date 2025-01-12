#pragma once
#include "CoreMinimal.h"
#include "ETextTagSpRepCompOp.h"
#include "TextTagSpReplaceLogicInfo.generated.h"

USTRUCT(BlueprintType)
struct FTextTagSpReplaceLogicInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MPropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MCompareTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MCompareOperator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> MReplaceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MPropertyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETextTagSpRepCompOp MCompOperatorType;
    
    GAMEBASESYSTEM_API FTextTagSpReplaceLogicInfo();
};

