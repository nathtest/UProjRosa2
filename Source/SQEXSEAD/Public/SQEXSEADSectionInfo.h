#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADSectionInfo.generated.h"

USTRUCT(BlueprintType)
struct FSQEXSEADSectionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SectionIndex;
    
    SQEXSEAD_API FSQEXSEADSectionInfo();
};

