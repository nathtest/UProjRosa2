#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "ESoundCategoryID.h"
#include "SoundSystemDataAsset.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API USoundSystemDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<ESoundCategoryID, UDataTable*> MSoundResourceTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<ESoundCategoryID, int32> MSoundSlotNum;
    
public:
    USoundSystemDataAsset();

};

