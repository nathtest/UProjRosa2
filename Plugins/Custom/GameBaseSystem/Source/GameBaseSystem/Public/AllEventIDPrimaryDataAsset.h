#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "EventIDTableRowData.h"
#include "AllEventIDPrimaryDataAsset.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UAllEventIDPrimaryDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MFlowEventIDTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MUnitEventIDTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FEventIDTableRowData> MEventIDList;
    
public:
    UAllEventIDPrimaryDataAsset();

    UFUNCTION(BlueprintCallable)
    void Build();
    
};

