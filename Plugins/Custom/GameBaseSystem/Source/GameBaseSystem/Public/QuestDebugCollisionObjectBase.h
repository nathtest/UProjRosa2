#pragma once
#include "CoreMinimal.h"
#include "CollisionObjectBase.h"
#include "EventArguments.h"
#include "QuestDebugCollisionInfo.h"
#include "QuestSectionNameView.h"
#include "QuestDebugCollisionObjectBase.generated.h"

class AQuestObjectBase;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AQuestDebugCollisionObjectBase : public ACollisionObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestDebugCollisionInfo MQuestDebugCollisionInfo;
    
public:
    AQuestDebugCollisionObjectBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetEventArg_TargetSection();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetEventArg_TargetQuestClass();
    
    UFUNCTION(BlueprintCallable)
    static void GetEventArg_QuestDestSectionInfo(const FEventArguments& InEventArgs, bool& OutIsValid, TSoftClassPtr<AQuestObjectBase>& OutTargetQuestClass, FQuestSectionNameView& OutTargetSection, bool& OutIsLevelTransition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetEventArg_IsLevelTransition();
    
};

