#pragma once
#include "CoreMinimal.h"
#include "TextTagParam.h"
#include "TextReplaceTagCache.generated.h"

USTRUCT(BlueprintType)
struct FTextReplaceTagCache : public FTextTagParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MNextPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MLogicReplaceDataIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MReplaceString;
    
    GAMEBASESYSTEM_API FTextReplaceTagCache();
};

