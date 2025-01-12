#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "SQEXSEADAutoSeComponentInitParams.h"
#include "SQEXSEADAutoSeComponentSetting.generated.h"

UCLASS(Blueprintable)
class SQEXSEAD_API USQEXSEADAutoSeComponentSetting : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQEXSEADAutoSeComponentInitParams InitParams;
    
    USQEXSEADAutoSeComponentSetting();

};

