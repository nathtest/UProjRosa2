#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "G01TextLanguageResources.generated.h"

class UDataTable;
class UFont;

UCLASS(Blueprintable)
class RS2RE_API UG01TextLanguageResources : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TextTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFont* FontFamily;
    
    UG01TextLanguageResources();

    UFUNCTION(BlueprintCallable)
    void Reimport();
    
};

