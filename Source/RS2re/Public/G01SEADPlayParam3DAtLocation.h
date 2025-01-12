#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "G01SEADPlayParam3DCommon.h"
#include "G01SEADPlayParam3DAtLocation.generated.h"

USTRUCT(BlueprintType)
struct FG01SEADPlayParam3DAtLocation : public FG01SEADPlayParam3DCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    RS2RE_API FG01SEADPlayParam3DAtLocation();
};

