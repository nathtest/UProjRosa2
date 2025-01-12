#pragma once
#include "CoreMinimal.h"
#include "EnvironmentInfoView.generated.h"

USTRUCT(BlueprintType)
struct FEnvironmentInfoView {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FName MEnvSettingID;
    
    GAMEBASESYSTEM_API FEnvironmentInfoView();
};

