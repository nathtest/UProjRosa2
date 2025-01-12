#pragma once
#include "CoreMinimal.h"
#include "G01EventSimpleTalkDisplaySettingTableRow.h"
#include "G01TextFindArgs.h"
#include "G01MsgSimpleParam.generated.h"

USTRUCT(BlueprintType)
struct FG01MsgSimpleParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MMessageID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MMinDisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01EventSimpleTalkDisplaySettingTableRow DisplaySetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01TextFindArgs TextArgs;
    
    RS2RE_API FG01MsgSimpleParam();
};

