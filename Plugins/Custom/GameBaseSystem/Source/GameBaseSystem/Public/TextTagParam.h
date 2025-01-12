#pragma once
#include "CoreMinimal.h"
#include "ETextTagType.h"
#include "TextTagParam.generated.h"

USTRUCT(BlueprintType)
struct FTextTagParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETextTagType::Type> MTagType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MTagID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MTagProperty;
    
    GAMEBASESYSTEM_API FTextTagParam();
};

