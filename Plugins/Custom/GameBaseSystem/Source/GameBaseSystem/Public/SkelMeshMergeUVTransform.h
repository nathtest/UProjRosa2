#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "SkelMeshMergeUVTransform.generated.h"

USTRUCT(BlueprintType)
struct FSkelMeshMergeUVTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> MUVTransforms;
    
    GAMEBASESYSTEM_API FSkelMeshMergeUVTransform();
};

