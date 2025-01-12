#pragma once
#include "CoreMinimal.h"
#include "EDebugSystemLogType.h"
#include "ScopeLogger.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FScopeLogger {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDebugSystemLogType MLogType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MScopeFuncName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDebugSystemLogType, FString> MLogs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* MWorldContextObject;
    
public:
    FScopeLogger();
};

