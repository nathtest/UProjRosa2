#pragma once
#include "CoreMinimal.h"
#include "ManagerData.generated.h"

class AManagerBase;

USTRUCT(BlueprintType)
struct FManagerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ManagerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AManagerBase* Manager;
    
    GAMEBASESYSTEM_API FManagerData();
};

