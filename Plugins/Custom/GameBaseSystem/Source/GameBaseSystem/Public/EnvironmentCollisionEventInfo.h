#pragma once
#include "CoreMinimal.h"
#include "CollisionEventInfoBase.h"
#include "EnvironmentInfoView.h"
#include "EnvironmentCollisionEventInfo.generated.h"

USTRUCT(BlueprintType)
struct FEnvironmentCollisionEventInfo : public FCollisionEventInfoBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnvironmentInfoView MEnvironmentSettingID;
    
    GAMEBASESYSTEM_API FEnvironmentCollisionEventInfo();
};

