#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "G01PartyPresetDataAsset.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class RS2RE_API UG01PartyPresetDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UDataTable*> PresetMap;
    
    UG01PartyPresetDataAsset();

};

