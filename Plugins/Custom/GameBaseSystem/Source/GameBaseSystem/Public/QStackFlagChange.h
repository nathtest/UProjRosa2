#pragma once
#include "CoreMinimal.h"
#include "FlagAccessParam.h"
#include "QStackFlagChangeParam.h"
#include "QuestStackObjectBase.h"
#include "QStackFlagChange.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UQStackFlagChange : public UQuestStackObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FQStackFlagChangeParam Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagAccessParam AccessParam;
    
public:
    UQStackFlagChange();

};

