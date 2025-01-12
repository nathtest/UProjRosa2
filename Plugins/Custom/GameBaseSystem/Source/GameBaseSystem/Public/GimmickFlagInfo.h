#pragma once
#include "CoreMinimal.h"
#include "FlagIDListViewStruct.h"
#include "GimmickFlagInfo.generated.h"

USTRUCT(BlueprintType)
struct FGimmickFlagInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlagIDListViewStruct MFlagID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MComment;
    
    GAMEBASESYSTEM_API FGimmickFlagInfo();
};

