#pragma once
#include "CoreMinimal.h"
#include "VisualActorID.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FVisualActorID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MVisualActorID;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> MCachedParseString;
    
public:
    FVisualActorID();
};

