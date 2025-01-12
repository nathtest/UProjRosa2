#pragma once
#include "CoreMinimal.h"
#include "SystemSaveGameDataBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SystemSaveGameDataBase -FallbackName=SystemSaveGameDataBase
#include "G01BgmLogExtractionStruct.h"
#include "G01BgmSubsystemExtractionStruct.h"
#include "G01OptionSettingParamStruct.h"
#include "G01SystemSaveGameData.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01SystemSaveGameData : public USystemSaveGameDataBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01BgmLogExtractionStruct bgmLogInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01OptionSettingParamStruct OptionSettingInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsClearFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlayStaffRoll;
    
public:
    UG01SystemSaveGameData();

    UFUNCTION(BlueprintCallable)
    void SetOptionSettingInfo(const FG01OptionSettingParamStruct& InParams);
    
    UFUNCTION(BlueprintCallable)
    void SetIsPlayStaffRoll(bool InIsPlayStaffRoll);
    
    UFUNCTION(BlueprintCallable)
    void SetIsClear(bool InIsClear);
    
    UFUNCTION(BlueprintCallable)
    void SetBgmExtractionInfo(const FG01BgmSubsystemExtractionStruct& InData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01OptionSettingParamStruct GetOptionSettingParams() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetIsPlayStaffRoll(bool& OutIsPlayStaffRoll) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetIsClear(bool& OutIsClear) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01BgmSubsystemExtractionStruct GetBgmExtractionInfo() const;
    
};

