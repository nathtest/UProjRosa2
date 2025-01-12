#pragma once
#include "CoreMinimal.h"
#include "ControlRigIncludeBoneConditions.generated.h"

USTRUCT(BlueprintType)
struct FControlRigIncludeBoneConditions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> NameWildcards;
    
    GAMEBASESYSTEM_API FControlRigIncludeBoneConditions();
};

