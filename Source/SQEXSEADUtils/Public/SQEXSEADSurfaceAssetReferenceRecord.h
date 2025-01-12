#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "SQEXSEADSurfaceAssetReferenceRecord.generated.h"

USTRUCT(BlueprintType)
struct SQEXSEADUTILS_API FSQEXSEADSurfaceAssetReferenceRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath AssetRefs[63];
    
    FSQEXSEADSurfaceAssetReferenceRecord();
};

