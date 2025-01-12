#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ENextLevelTransitionType.h"
#include "EScreenTransitionType.h"
#include "LevelTransitionInfo.h"
#include "LevelTransitionInfoRow.h"
#include "LevelTransitionInfoView.h"
#include "SaveDataUserSubsystemBase.h"
#include "LevelMoveGameInstanceSubsystem.generated.h"

class AActor;
class ULevelMoveSubsystemHelper;

UCLASS(Abstract, Blueprintable)
class GAMEBASESYSTEM_API ULevelMoveGameInstanceSubsystem : public USaveDataUserSubsystemBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevelMoveSubsystemHelper* HelperObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EScreenTransitionType ScreenTransitionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ScreenTransitionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsDuringTransitionFadeIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsDuringLevelTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsEnableLevelTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsEnablePlayFromHere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLevelTransitionInfo CurrentInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLevelTransitionInfo PreviousInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLevelTransitionInfo NextInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName CurrentLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName PrevLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> LockActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsLoadingSequence;
    
public:
    ULevelMoveGameInstanceSubsystem();

    UFUNCTION(BlueprintCallable)
    void StartPersistentLevelInit();
    
    UFUNCTION(BlueprintCallable)
    void SetEnableLevelTransition(bool InIsEnable);
    
    UFUNCTION(BlueprintCallable)
    void RequestOpenPrevPersistentLevel(EScreenTransitionType InTransitionType, float InFadeTime);
    
    UFUNCTION(BlueprintCallable)
    void RequestOpenPersistentLevelInfo(const FLevelTransitionInfoView& InLevelTransitionInfoView, const FLevelTransitionInfoRow& InLevelTransitionInfoRow, EScreenTransitionType InTransitionType, float InFadeTime);
    
    UFUNCTION(BlueprintCallable)
    void RequestOpenPersistentLevelByName(FName InLevelName, EScreenTransitionType InTransitionType, float InFadeTime);
    
    UFUNCTION(BlueprintCallable)
    bool RequestOpenPersistentLevel(FLevelTransitionInfoView InLevelID, EScreenTransitionType InTransitionType, float InFadeTime);
    
    UFUNCTION(BlueprintCallable)
    void RemoveLockActor(AActor* InActor);
    
private:
    UFUNCTION(BlueprintCallable)
    void ReceiveDestroyActor(AActor* InActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSameCurrentLevelInfo(FLevelTransitionInfoView InLevelID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSameCurrentLevel(FLevelTransitionInfoView InLevelID) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayFromHere();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnablePlayFromHere();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableLevelTransition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDuringTransitionFadeIn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDuringLevelTransition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetPrevLevelName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLevelTransitionInfo GetPrevLevelInfo() const;
    
    UFUNCTION(BlueprintCallable)
    void GetPlayFromHereData(FTransform& RespawnData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ENextLevelTransitionType GetNextLevelTransitionType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLevelTransitionInfo GetNextLevelInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentLevelName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLevelTransitionInfo GetCurrentLevelInfo() const;
    
    UFUNCTION(BlueprintCallable)
    void EnablePlayFromHere();
    
    UFUNCTION(BlueprintCallable)
    void DisablePlayFromHere();
    
    UFUNCTION(BlueprintCallable)
    void ClearNextLevelInfo();
    
    UFUNCTION(BlueprintCallable)
    void ClearLockActor();
    
    UFUNCTION(BlueprintCallable)
    void AddLockActor(AActor* InActor);
    
};

