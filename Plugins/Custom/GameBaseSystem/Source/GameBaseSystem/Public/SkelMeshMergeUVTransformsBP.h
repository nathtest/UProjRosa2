#pragma once
#include "CoreMinimal.h"
#include "SkelMeshMergeUVTransform.h"
#include "SkelMeshMergeUVTransformsBP.generated.h"

USTRUCT(BlueprintType)
struct FSkelMeshMergeUVTransformsBP {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkelMeshMergeUVTransform> MUVTransformsPerMesh;
    
    GAMEBASESYSTEM_API FSkelMeshMergeUVTransformsBP();
};

