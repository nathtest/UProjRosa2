#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "G01DreadQueenTransferDeviceIDStruct.h"
#include "G01HerosMemorySeqIDStruct.h"
#include "G01FieldGimmickSubsystem.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01FieldGimmickSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01HerosMemorySeqIDStruct MPlaybackDeviceSeqID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01DreadQueenTransferDeviceIDStruct MDreadQueenTransferDeviceID;
    
public:
    UG01FieldGimmickSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetMemoryPlaybackDeviceID(FG01HerosMemorySeqIDStruct InPlaybackDeviceSeqID);
    
    UFUNCTION(BlueprintCallable)
    void SetDreadQueenTransferDeviceID(FG01DreadQueenTransferDeviceIDStruct InDreadQueenTransferDeviceID);
    
    UFUNCTION(BlueprintCallable)
    void GetMemoryPlaybackDeviceID(FG01HerosMemorySeqIDStruct& OutPlaybackDeviceSeqID);
    
    UFUNCTION(BlueprintCallable)
    void GetDreadQueenTransferDeviceID(FG01DreadQueenTransferDeviceIDStruct& InDreadQueenTransferDeviceID);
    
};

