#pragma once
#include "CoreMinimal.h"
#include "EG01BattleCameraPhaseType.h"
#include "G01BattleCameraPhaseDebugInfoUnit.h"
#include "G01BattleCameraPhaseDebugInfo.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleCameraPhaseDebugInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentPhaseId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01BattleCameraPhaseType CurrentPhaseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PhaseIdList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FG01BattleCameraPhaseDebugInfoUnit> PhaseInfoMap;
    
    FG01BattleCameraPhaseDebugInfo();
};

