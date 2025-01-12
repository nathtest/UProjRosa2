#pragma once
#include "CoreMinimal.h"
#include "FlagIDListViewStruct.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagIDListViewStruct -FallbackName=FlagIDListViewStruct
#include "G01MsgWindowParamArray.h"
#include "G01MsgWindowParamByFlag.generated.h"

USTRUCT(BlueprintType)
struct FG01MsgWindowParamByFlag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlagIDListViewStruct MConditionFlagID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01MsgWindowParamArray MTrueTextParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01MsgWindowParamArray MFalseTextParams;
    
    RS2RE_API FG01MsgWindowParamByFlag();
};

