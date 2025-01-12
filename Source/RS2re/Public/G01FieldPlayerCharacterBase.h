#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EPlayerRigCorrectionType.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EPlayerRigCorrectionType -FallbackName=EPlayerRigCorrectionType
#include "InteractColliderTag.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=InteractColliderTag -FallbackName=InteractColliderTag
#include "EG01InteractActionType.h"
#include "EG01LadderType.h"
#include "EG01PlayerActionType.h"
#include "EG01PlayerDashType.h"
#include "G01FieldPlayerVoiceTypeStruct.h"
#include "G01PartyCharacterBase.h"
#include "G01VoiceLoadInfo.h"
#include "Templates/SubclassOf.h"
#include "G01FieldPlayerCharacterBase.generated.h"

class AActor;
class UAnimInstance;
class UAnimMontage;
class UDataTable;
class UG01VoiceManagerAccessor;

UCLASS(Blueprintable)
class RS2RE_API AG01FieldPlayerCharacterBase : public AG01PartyCharacterBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> MAnimBPClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MEnableReEncountTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01PlayerDashType MDashType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnableDitherStartLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnableDitherEndLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnableDither;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TurnTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MCurrentDitherRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* InteractAnimMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FieldAttackAnimMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01LadderType LadderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01PlayerActionType ActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WalkNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RunNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DashNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FG01FieldPlayerVoiceTypeStruct, FName> VoiceTextIDList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnableVoiceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* FieldVoiceInfoTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01VoiceManagerAccessor* VoiceManagerAccessor;
    
public:
    AG01FieldPlayerCharacterBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetRotationRate(FRotator InRotationRate);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetPlayerRigCorrectionType(EPlayerRigCorrectionType InType);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableDither(bool InIsEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetLoseBattleAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestLoseBattleAnimation();
    
    UFUNCTION(BlueprintCallable)
    void RequestInteraction();
    
    UFUNCTION(BlueprintCallable)
    void PlayVoice(const FG01FieldPlayerVoiceTypeStruct InVoiceType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetupVisualActor(AActor* InVisualActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInteractAction(EG01InteractActionType InActionType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnInitCharacter();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnCompleteReadyMove();
    
    UFUNCTION(BlueprintCallable)
    void OnCompleteLoadVoiceData(const FG01VoiceLoadInfo& InVoiceLoadInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnCompleteForceRotateCamera();
    
    UFUNCTION(BlueprintCallable)
    void OnCompleteForceMove();
    
    UFUNCTION(BlueprintCallable)
    bool IsInteractionAvailable();
    
    UFUNCTION(BlueprintCallable)
    bool IsFieldAttackAvailable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float GetVelocityZ() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float GetRunSpeed() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    FRotator GetRotationRate();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPlayerRigCorrectionType GetPlayerRigCorrectionType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetGimmickMove() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetForceMoveLocation(float InToleranceDistance, TArray<FVector> InPathList);
    
protected:
    UFUNCTION(BlueprintCallable)
    FRotator GetDefaultRotationRate();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float GetDashSpeed() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ExecuteFieldAttackEncount(AActor* InAttackTarget, const FInteractColliderTag& InAttackTargetTag);
    
public:
    UFUNCTION(BlueprintCallable)
    void EnableInteract();
    
    UFUNCTION(BlueprintCallable)
    void DisableInteract();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DebugLeaveParty();
    
    UFUNCTION(BlueprintCallable)
    void DebugJoinParty();
    
public:
    UFUNCTION(BlueprintCallable)
    void CreateNoise(float InAnimWalkSpeed, float InAnimRunSpeed, float InAnimDashSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckActiveTalkCamera(bool& OutIsActive, AActor*& OutTalkTargetActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeTalkCamera(const AActor* InTalkTargetActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CancelTalkCamera();
    
};

