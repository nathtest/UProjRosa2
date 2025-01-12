#pragma once
#include "CoreMinimal.h"
#include "SeqTypeView.generated.h"

USTRUCT(BlueprintType)
struct FSeqTypeView {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MSequencerType;
    
    GAMEBASESYSTEM_API FSeqTypeView();
};

