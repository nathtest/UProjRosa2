#pragma once
#include "CoreMinimal.h"
#include "ELevelObjectFindResultValidMask.h"
#include "LevelObjectID.h"
#include "LevelObjectFindResult.generated.h"

class AActor;
class AVisualActor;

USTRUCT(BlueprintType)
struct FLevelObjectFindResult {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELevelObjectFindResultValidMask ValidMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelObjectID LevelObjectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Generator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AVisualActor> VisualActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GeneralString;
    
public:
    GAMEBASESYSTEM_API FLevelObjectFindResult();
};

