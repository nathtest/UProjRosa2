#pragma once
#include "CoreMinimal.h"
#include "GameBootSubsystem.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=GameBootSubsystem -FallbackName=GameBootSubsystem
#include "RoomID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=RoomID -FallbackName=RoomID
#include "G01GameBootSubsystem.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01GameBootSubsystem : public UGameBootSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLevelStrimingEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRoomID PlayFromHereRoomId;
    
public:
    UG01GameBootSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetPlayFromHereRoomId(FRoomID InRoomId);
    
    UFUNCTION(BlueprintCallable)
    void SetIsLevelStrimingEnable(bool InFlag);
    
    UFUNCTION(BlueprintCallable)
    FRoomID GetPlayFromHereRoomId();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsLevelStrimingEnable();
    
};

