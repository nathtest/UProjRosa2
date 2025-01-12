#pragma once
#include "CoreMinimal.h"
#include "G01NpcReactionAnimIDStruct.h"
#include "G01NpcSplineMoveWaitReactionStruct.generated.h"

USTRUCT(BlueprintType)
struct FG01NpcSplineMoveWaitReactionStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PathIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01NpcReactionAnimIDStruct AnimID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SectionName;
    
    RS2RE_API FG01NpcSplineMoveWaitReactionStruct();
};

