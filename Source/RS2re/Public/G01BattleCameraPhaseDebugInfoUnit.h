#pragma once
#include "CoreMinimal.h"
#include "EG01BattleCameraPhaseType.h"
#include "G01BattleCameraPhaseDebugInfoUnit.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleCameraPhaseDebugInfoUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01BattleCameraPhaseType PhaseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsExcluded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TransitionStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UseCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ExclusiveIdList;
    
    FG01BattleCameraPhaseDebugInfoUnit();
};

