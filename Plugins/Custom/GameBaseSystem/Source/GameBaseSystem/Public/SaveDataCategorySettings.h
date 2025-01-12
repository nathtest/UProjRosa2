#pragma once
#include "CoreMinimal.h"
#include "SaveDataCategorySettings.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSaveDataCategorySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FileNameFormat;
    
    FSaveDataCategorySettings();
};

