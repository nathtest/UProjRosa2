#pragma once
#include "CoreMinimal.h"
#include "SaveDataRequestInfo.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SaveDataRequestInfo -FallbackName=SaveDataRequestInfo
#include "G01SaveDataLoadOptions.h"
#include "G01SaveDataExecuteReserve_Load.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01SaveDataExecuteReserve_Load {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSaveDataRequestInfo Request;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01SaveDataLoadOptions LoadOptions;
    
    FG01SaveDataExecuteReserve_Load();
};

