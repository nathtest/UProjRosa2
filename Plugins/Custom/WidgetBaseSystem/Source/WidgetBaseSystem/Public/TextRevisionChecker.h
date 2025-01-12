#pragma once
#include "CoreMinimal.h"
#include "TextRevisionChecker.generated.h"

USTRUCT(BlueprintType)
struct WIDGETBASESYSTEM_API FTextRevisionChecker {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText OriginalText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText PreRevisionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 TimeOutCounter;
    
public:
    FTextRevisionChecker();
};

