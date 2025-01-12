#pragma once
#include "CoreMinimal.h"
#include "CollisionEventInfoBase.h"
#include "FlagIDListViewStruct.h"
#include "SeqPlayArguments.h"
#include "SequenceLoadSettings.h"
#include "Templates/SubclassOf.h"
#include "SeqPlayCollisionEventInfo.generated.h"

class ASequenceController;
class ULevelSequence;

USTRUCT(BlueprintType)
struct FSeqPlayCollisionEventInfo : public FCollisionEventInfoBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> MPlaySequenceAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlagValueAtCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlagIDListViewStruct FlagID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSeqPlayArguments PlayArgs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASequenceController> UseControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSequenceLoadSettings LoadSettings;
    
    GAMEBASESYSTEM_API FSeqPlayCollisionEventInfo();
};

