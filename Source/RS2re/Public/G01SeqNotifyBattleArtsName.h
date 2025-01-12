#pragma once
#include "CoreMinimal.h"
#include "Slate/WidgetTransform.h" //CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=WidgetTransform -FallbackName=WidgetTransform
#include "EBattleActionNameMode.h"
#include "EBattleActionNameType.h"
#include "G01SeqNotifyBattleArtsName.generated.h"

USTRUCT(BlueprintType)
struct FG01SeqNotifyBattleArtsName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsCustom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MArtsId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleActionNameMode MMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleActionNameType MType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWidgetTransform MTransform;
    
    RS2RE_API FG01SeqNotifyBattleArtsName();
};

