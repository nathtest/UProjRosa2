#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "SQEXSEADSurfaceAssetReferenceTableData.h"
#include "SQEXSEADSurfaceAssetReferenceTable.generated.h"

UCLASS(Blueprintable)
class SQEXSEADUTILS_API USQEXSEADSurfaceAssetReferenceTable : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQEXSEADSurfaceAssetReferenceTableData TableData;
    
    USQEXSEADSurfaceAssetReferenceTable();

};

