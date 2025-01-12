#pragma once
#include "CoreMinimal.h"
#include "EG01VAIkPartType.h"
#include "G01VAIkTargetSocketID.h"
#include "G01VAIkTargetSocketTableRow.h"
#include "G01VAIkTargetAnimNotifyParam.generated.h"

USTRUCT(BlueprintType)
struct FG01VAIkTargetAnimNotifyParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01VAIkPartType PartType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsReferenceSocketID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01VAIkTargetSocketID SocketID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01VAIkTargetSocketTableRow SocketInfo;
    
    RS2RE_API FG01VAIkTargetAnimNotifyParam();
};

