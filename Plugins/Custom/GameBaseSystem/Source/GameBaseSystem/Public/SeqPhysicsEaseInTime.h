#pragma once
#include "CoreMinimal.h"
#include "SeqCategoryView.h"
#include "SeqPhysicsEaseInTime.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSeqPhysicsEaseInTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSeqCategoryView> Categories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    FSeqPhysicsEaseInTime();
};

