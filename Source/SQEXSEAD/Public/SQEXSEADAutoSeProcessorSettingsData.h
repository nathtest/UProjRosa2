#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SQEXSEADAutoSeProcessorSettingsData.generated.h"

class UAssetImportData;

UCLASS(Blueprintable, MinimalAPI)
class USQEXSEADAutoSeProcessorSettingsData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAssetImportData* AssetImportData;
    
    USQEXSEADAutoSeProcessorSettingsData();

};

