#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SQEXSEADEventLabelData.h"
#include "SQEXSEADEventController.generated.h"

UCLASS(Blueprintable)
class SQEXSEADEVENT_API USQEXSEADEventController : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSQEXSEADEventLabelData> LabelMap;
    
public:
    USQEXSEADEventController();

};

