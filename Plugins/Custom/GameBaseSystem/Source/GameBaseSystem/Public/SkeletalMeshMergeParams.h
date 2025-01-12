#pragma once
#include "CoreMinimal.h"
#include "SkelMeshMergeSectionMappingBP.h"
#include "SkelMeshMergeUVTransformsBP.h"
#include "SkeletalMeshMergeParams.generated.h"

class USkeletalMesh;
class USkeleton;

USTRUCT(BlueprintType)
struct FSkeletalMeshMergeParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkelMeshMergeSectionMappingBP> MMeshSectionMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkelMeshMergeUVTransformsBP> MUVTransformsPerMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMesh*> MTargetSkelMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MNumRemoveStripTopLOD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsNeedsCpuAccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsSkeletonBefore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeleton* MSkeleton;
    
    GAMEBASESYSTEM_API FSkeletalMeshMergeParams();
};

