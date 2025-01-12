#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SQEXSEADEventSettings.generated.h"

class UDataTable;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class SQEXSEADEVENT_API USQEXSEADEventSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> SEADEventDataTable;
    
    USQEXSEADEventSettings();

};

