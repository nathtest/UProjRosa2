#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameModeBase -FallbackName=GameModeBase
#include "BeginGameStartBpDelegate.h"
#include "BeginGameStartScriptDelegate.h"
#include "EGameModeType.h"
#include "EManagerCreatePriority.h"
#include "GamePauseDelegateDelegate.h"
#include "GameFramework/GameModeBase.h"
#include "AppGameModeBase.generated.h"

class AActor;
class AGeneratorBase;
class UDataTable;
class UObject;

UCLASS(Blueprintable, NonTransient)
class GAMEBASESYSTEM_API AAppGameModeBase : public AGameModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBeginGameStartBp MPreGameStartEventBp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBeginGameStartBp MGameStartEventBp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBeginGameStartBp MPostGameStartEventBp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGamePauseDelegate OnGamePauseEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MManagerDataAllNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MCompletedLoadManagerNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MCompletedInitializeManagerNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MNowLoadFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EManagerCreatePriority::Type>, bool> MFnishLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EManagerCreatePriority::Type>, int32> MLoadManagerMaxNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EManagerCreatePriority::Type>, int32> MLoadManagerCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MCompleteLoadManagerNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MAllFinishLoadFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MCalledGameStartEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameModeType GameModeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MPreCreateManagerDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MCreateManagerListDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MInitSpawningGeneratorNum;
    
    AAppGameModeBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCleateManagers();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCreatedGeneratorTarget(AGeneratorBase* InGenerator, AActor* InTargetActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void ManagerLoadByPriority(TEnumAsByte<EManagerCreatePriority::Type> InPriorityType);
    
    UFUNCTION(BlueprintCallable)
    void ManagerInitializeComplete();
    
    UFUNCTION(BlueprintCallable)
    void LoadManagers();
    
    UFUNCTION(BlueprintCallable)
    float GetLoadPercent();
    
    UFUNCTION(BlueprintCallable)
    EGameModeType GetGameModeType();
    
    UFUNCTION(BlueprintCallable)
    void CreatePreManagers();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static void CallEventByPreGameStart(const UObject* InWorldContext, const FBeginGameStartScript& InEvent);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static void CallEventByPostGameStart(const UObject* InWorldContext, const FBeginGameStartScript& InEvent);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static void CallEventByGameStart(const UObject* InWorldContext, const FBeginGameStartScript& InEvent);
    
};

