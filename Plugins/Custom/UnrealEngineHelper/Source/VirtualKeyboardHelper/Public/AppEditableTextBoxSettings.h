#pragma once
#include "CoreMinimal.h"
#include "AppEditableTextBoxSettings.generated.h"

USTRUCT(BlueprintType)
struct VIRTUALKEYBOARDHELPER_API FAppEditableTextBoxSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUseExistingTextAsDefaultText;
    
    FAppEditableTextBoxSettings();
};

