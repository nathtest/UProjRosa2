#pragma once
#include "CoreMinimal.h"
#include "CollisionObjectViewStruct.h"
#include "EventResult.h"
#include "FlagChangedEventParam.h"
#include "GenerateConditions.h"
#include "GeneratorConditionCache.h"
#include "GimmickObjectBase.h"
#include "InteractHitCreateEventInfo.h"
#include "QuestReceiveParamQuestSectionChanged.h"
#include "Components/TextRenderComponent.h"
#include "CollisionObjectBase.generated.h"

class UCollisionObjManagerAccessCompo;
class UFlagEventReceiveComponent;
class UQuestEventReceiveComponent;
class UQuestManagerAccessComponent;
class UTextRenderComponent;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ACollisionObjectBase : public AGimmickObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCollisionObjManagerAccessCompo* MCollisionObjectManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuestManagerAccessComponent* MQuestManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuestEventReceiveComponent* MQuestEventReceiver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFlagEventReceiveComponent* MFlagEventReceiver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsCreatedByGenerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionObjectViewStruct MCollisionObjectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenerateConditions MGenerateConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextRenderComponent* MCollisionNameRender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGeneratorConditionCache MConditionCache;
    
public:
    ACollisionObjectBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetupCollisionName(const FString& InPrefix, const FString& InDisplayName);
    
    UFUNCTION(BlueprintCallable)
    void OnQuestSectionChangeEnd(FQuestReceiveParamQuestSectionChanged InSectionChangedParam);
    
    UFUNCTION(BlueprintCallable)
    void OnQuestSectionChangeBegin(FQuestReceiveParamQuestSectionChanged InSectionChangedParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPreEventCreate(const FInteractHitCreateEventInfo& InHitCreateEventInfo, FInteractHitCreateEventInfo& OutHitCreateEventInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnFlagChanged(const FFlagChangedEventParam& InParam);
    
    UFUNCTION(BlueprintCallable)
    void OnEventEnd(const FEventResult& InEndResult);
    
};

