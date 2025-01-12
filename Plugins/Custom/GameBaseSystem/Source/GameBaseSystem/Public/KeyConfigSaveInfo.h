#pragma once
#include "CoreMinimal.h"
#include "EKeyConfigType.h"
#include "KeyConfigAssignData.h"
#include "KeyConfigSaveInfo.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FKeyConfigSaveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKeyConfigType, FKeyConfigAssignData> KeyAssignByType;
    
    FKeyConfigSaveInfo();
};

