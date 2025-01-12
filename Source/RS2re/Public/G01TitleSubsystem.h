#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "G01TitleSubsystem.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01TitleSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsFirstBoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MDifficultyNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsNewGamePlus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MHandoverSlotNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugCanTransfer;
    
public:
    UG01TitleSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetIsNewGamePlus(bool InIsNewGamePlus);
    
    UFUNCTION(BlueprintCallable)
    void SetIsFirstBoot(bool InIsFirstBoot);
    
    UFUNCTION(BlueprintCallable)
    void SetHandoverSlotNum(int32 InHandoverSlotNum);
    
    UFUNCTION(BlueprintCallable)
    void SetDifficultyNum(int32 InDifficultyNum);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugTrial(bool InTrial);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugTransferSaveDataError(bool InDebugTransferSaveDataError);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugCanTransfer(bool InCanTransfer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsNewGamePlus(bool& OutIsNewGamePlus) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsFirstBoot(bool& OutIsFirstBoot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetHandoverSlotNum(int32& OutHandoverSlotNum) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDifficultyNum(int32& OutDifficultyNum) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDebugTrial(bool& OutTrial) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDebugTransferSaveDataError(bool& OutDebugTransferSaveDataError) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDebugCanTransfer(bool& OutCanTransfer) const;
    
};

