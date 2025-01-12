#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ReceiveInteractEventInfo.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ReceiveInteractEventInfo -FallbackName=ReceiveInteractEventInfo
#include "EG01InteractObjectIconType.h"
#include "G01HudMapObjectIconInf.h"
#include "G01NpcReactionAnimIDStruct.h"
#include "G01NpcSplineMoveWaitReactionStruct.h"
#include "G01PartyCharacterBase.h"
#include "G01UniqueFieldAnimIDStruct.h"
#include "G01FieldNpcBase.generated.h"

class UAnimMontage;
class UG01FieldNpcUROComponent;

UCLASS(Blueprintable)
class RS2RE_API AG01FieldNpcBase : public AG01PartyCharacterBase, public IG01HudMapObjectIconInf {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnableDitherStartLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnableDitherEndLength;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01InteractObjectIconType MObjectIconType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsVisibleObjectIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MObjectIconName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01FieldNpcUROComponent* MUROComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReceiveInteractEventInfo> MInteractParams;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01UniqueFieldAnimIDStruct NpcUniqueAnimID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NpcUniqueAnimStartPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetOffsetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01NpcReactionAnimIDStruct TalkReactionAnimID;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01NpcSplineMoveWaitReactionStruct> SplineMoveWaitReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> CacheEventClassList;
    
public:
    AG01FieldNpcBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVisibleObjectIcon(bool Invisible);
    
    UFUNCTION(BlueprintCallable)
    void SetObjectIconType(EG01InteractObjectIconType InIconType);
    
    UFUNCTION(BlueprintCallable)
    void SetNpcUniqueAnimStartPosition(float InStartPosition);
    
    UFUNCTION(BlueprintCallable)
    void SetNpcUniqueAnimID(FG01UniqueFieldAnimIDStruct InNpcUniqueAnimID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayMontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
public:
    UFUNCTION(BlueprintCallable)
    bool GetVisibleObjectIcon();
    
    UFUNCTION(BlueprintCallable)
    EG01InteractObjectIconType GetObjectIconType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetObjectIconName() const;
    
    UFUNCTION(BlueprintCallable)
    float GetNpcUniqueAnimStartPosition();
    
    UFUNCTION(BlueprintCallable)
    FG01UniqueFieldAnimIDStruct GetNpcUniqueAnimID();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DeactivateObjectIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CreateEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActivateObjectIcon();
    

    // Fix for true pure virtual functions not being implemented
};

