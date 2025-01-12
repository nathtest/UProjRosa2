#pragma once
#include "CoreMinimal.h"
#include "G01BattleExplicitCommandMementoStruct.generated.h"

USTRUCT(BlueprintType)
struct FG01BattleExplicitCommandMementoStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ArtsId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubIndex;
    
    RS2RE_API FG01BattleExplicitCommandMementoStruct();
};

