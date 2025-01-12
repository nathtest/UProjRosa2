#pragma once
#include "CoreMinimal.h"
#include "CharacterBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=CharacterBase -FallbackName=CharacterBase
#include "EAISpeed.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EAISpeed -FallbackName=EAISpeed
#include "EAIState.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EAIState -FallbackName=EAIState
#include "G01CharacterID.h"
#include "G01InteractUiContUserInf.h"
#include "G01MsgSingleUiControllerUserInf.h"
#include "G01CharacterBase.generated.h"

class UG01FieldVisualDataAsset;
class UG01MsgRootComponent;
class UG01MsgWindowComponent;
class URelativePositionComponent;
class URoomInfoComponent;
class USphereComponent;
class UVisualActorParamDataAssetBase;

UCLASS(Blueprintable)
class RS2RE_API AG01CharacterBase : public ACharacterBase, public IG01MsgSingleUiControllerUserInf, public IG01InteractUiContUserInf {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URoomInfoComponent* MRoomInfoComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIState MDefaultAIState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnableGaze;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01MsgRootComponent* MMessageRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URelativePositionComponent* MSimpleTalkPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01MsgWindowComponent* MMsgWindowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* MRoomCollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01CharacterID MCharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01CharacterID MDebugCharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MRotationInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnableUniqueAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVisualActorParamDataAssetBase* FieldVisualDataAsset;
    
public:
    AG01CharacterBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetNameJA(FName InName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHiddenInGame(bool InNewHidden);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableGaze(bool InEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UG01FieldVisualDataAsset> GetVisualAssetData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UClass* GetVisualActorClass() const;
    
    UFUNCTION(BlueprintCallable)
    float GetRotationInterpSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USphereComponent* GetRoomCollisionComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetNameText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetNameJP() const;
    
    UFUNCTION(BlueprintCallable)
    FName GetNameJA();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetName() const;
    
    UFUNCTION(BlueprintCallable)
    float GetMoveSpeedByCharacter(EAISpeed InSpeedID);
    
    UFUNCTION(BlueprintCallable)
    bool GetEnableGaze();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01CharacterID GetCharacterID() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableInteractCollision();
    

    // Fix for true pure virtual functions not being implemented
};

