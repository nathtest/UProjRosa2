#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "SQEXSEADSurfaceAssetReferenceTableData.h" //CROSS-MODULE INCLUDE V2: -ModuleName=SQEXSEADUtils -ObjectName=SQEXSEADSurfaceAssetReferenceTableData -FallbackName=SQEXSEADSurfaceAssetReferenceTableData
#include "SQEXSEADAutoSeComponentAssetTableNonSurface.h"
#include "SQEXSEADAutoSeComponentAssetTablePerSurface.h"
#include "SQEXSEADAutoSeComponentAssetTable.generated.h"

UCLASS(Blueprintable)
class SQEXSEAD_API USQEXSEADAutoSeComponentAssetTable : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQEXSEADAutoSeComponentAssetTablePerSurface PerSurfaceInfos[63];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQEXSEADAutoSeComponentAssetTableNonSurface NonSurfaceInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQEXSEADSurfaceAssetReferenceTableData AuxSurfaceAssetTable;
    
    USQEXSEADAutoSeComponentAssetTable();

};

