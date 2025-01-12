#pragma once
#include "CoreMinimal.h"
#include "LoadScreenCustomTaskCompleteCheckDelegate.h"
#include "LoadScreenCustomTaskData.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FLoadScreenCustomTaskData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FLoadScreenCustomTaskCompleteCheck> Tasks;
    
    FLoadScreenCustomTaskData();
};

