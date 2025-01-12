#pragma once
#include "CoreMinimal.h"
#include "EBattleCommandActionType.h"
#include "G01BtCommandUiLinkArtsData.h"
#include "G01BtCommandUiStandardArtsData.h"
#include "G01BtCommandUiArtsData.generated.h"

class AAppActor;

USTRUCT(BlueprintType)
struct RS2RE_API FG01BtCommandUiArtsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsResetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCanUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 tabIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleCommandActionType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01BtCommandUiStandardArtsData StandardData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01BtCommandUiLinkArtsData LinkData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAppActor* SourceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAppActor* TargetActor;
    
    FG01BtCommandUiArtsData();
};

