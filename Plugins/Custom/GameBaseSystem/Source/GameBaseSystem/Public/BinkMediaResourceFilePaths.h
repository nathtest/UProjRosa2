#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FilePath -FallbackName=FilePath
#include "BinkMediaResourceFilePaths.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FBinkMediaResourceFilePaths {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilePath Path1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilePath Path2;
    
    FBinkMediaResourceFilePaths();
};

