#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADAutoSeComponentCallback.h"
#include "SQEXSEADAutoSeComponentCallbackDefault.generated.h"

class USQEXSEADAutoSeComponentAssetTable;

UCLASS(Blueprintable, NonTransient)
class SQEXSEAD_API USQEXSEADAutoSeComponentCallbackDefault : public USQEXSEADAutoSeComponentCallback {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USQEXSEADAutoSeComponentAssetTable* AssetTableImpl;
    
public:
    USQEXSEADAutoSeComponentCallbackDefault();

};

