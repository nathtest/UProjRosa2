#pragma once
#include "CoreMinimal.h"
#include "VAAnimInstPathData.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FVAAnimInstPathData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CommonPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FigurePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VariationPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UnitPath;
    
    FVAAnimInstPathData();
};

