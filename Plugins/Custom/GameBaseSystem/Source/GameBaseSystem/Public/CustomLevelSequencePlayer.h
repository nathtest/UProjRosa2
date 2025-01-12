#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=LevelSequence -ObjectName=LevelSequencePlayer -FallbackName=LevelSequencePlayer
#include "LevelSequencePlayer.h"
#include "CustomLevelSequencePlayer.generated.h"

class AActor;
class ASequenceController;
class UObject;

UCLASS(Blueprintable)
// before ULevelSequencePlayer
class GAMEBASESYSTEM_API UCustomLevelSequencePlayer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MaxDeltaSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASequenceController* MOwnerSequenceController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* MLastCameraObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* MActiveCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFrameNumber MNowFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MNowSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bForceJumpCut;
    
public:
    UCustomLevelSequencePlayer();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNowSeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFrameNumber GetNowFrame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLastSeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLastFrame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetActiveCameraActor() const;
    
};

