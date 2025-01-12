#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SQEXSEADEventLabelData.h"
#include "SQEXSEADEventExecuter.generated.h"

class USQEXSEADEventCallbackObject;

UCLASS(Blueprintable)
class SQEXSEADEVENT_API USQEXSEADEventExecuter : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQEXSEADEventLabelData Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRunning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEXSEADEventCallbackObject* BeginEventCallback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEXSEADEventCallbackObject* EndEventCallback;
    
public:
    USQEXSEADEventExecuter();

};

