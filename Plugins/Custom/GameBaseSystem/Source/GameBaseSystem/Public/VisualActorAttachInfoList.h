#pragma once
#include "CoreMinimal.h"
#include "VisualActorAttachInfoStruct.h"
#include "VisualActorAttachInfoList.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FVisualActorAttachInfoList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVisualActorAttachInfoStruct> MAttachObjectInfoList;
    
    FVisualActorAttachInfoList();
};

