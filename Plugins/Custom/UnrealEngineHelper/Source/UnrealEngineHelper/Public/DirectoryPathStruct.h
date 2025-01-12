#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DirectoryPath -FallbackName=DirectoryPath
#include "DirectoryPathStruct.generated.h"

USTRUCT(BlueprintType)
struct FDirectoryPathStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirectoryPath Path;
    
    UNREALENGINEHELPER_API FDirectoryPathStruct();
};

