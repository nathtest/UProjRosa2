#pragma once
#include "CoreMinimal.h"
#include "SkelMeshMergeSectionMappingBP.generated.h"

USTRUCT(BlueprintType)
struct FSkelMeshMergeSectionMappingBP {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MSectionIDs;
    
    GAMEBASESYSTEM_API FSkelMeshMergeSectionMappingBP();
};

