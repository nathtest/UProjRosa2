#pragma once
#include "CoreMinimal.h"
#include "SequencerParamCommonTableRow.h"
#include "SequencerParametersTableRow.generated.h"

class ULevelSequence;
class UMaterialInterface;
class UWorld;

USTRUCT(BlueprintType)
struct FSequencerParametersTableRow : public FSequencerParamCommonTableRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UWorld>> PlayableLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMaterialInterface>> NeverStreamMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableRecalculateOcclusionCulling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsViewerAvailable;
    
    GAMEBASESYSTEM_API FSequencerParametersTableRow();
};

