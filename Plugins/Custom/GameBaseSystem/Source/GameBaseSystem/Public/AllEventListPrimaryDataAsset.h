#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "Templates/SubclassOf.h"
#include "AllEventListPrimaryDataAsset.generated.h"

class AEventObjectBase;
class AEventObjectFlowBase;
class AEventObjectUnitBase;
class UDataTable;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UAllEventListPrimaryDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MEventFlowParameterTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MEventUnitParameterTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftClassPtr<AEventObjectBase>> MAllEventID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AEventObjectFlowBase> MEventFlowTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AEventObjectUnitBase> MEventUnitTemplate;
    
public:
    UAllEventListPrimaryDataAsset();

};

