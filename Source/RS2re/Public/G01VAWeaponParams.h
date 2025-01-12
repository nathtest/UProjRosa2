#pragma once
#include "CoreMinimal.h"
#include "G01VAWeaponParams.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01VAWeaponParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SkillID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CategoryID;
    
    FG01VAWeaponParams();
};

