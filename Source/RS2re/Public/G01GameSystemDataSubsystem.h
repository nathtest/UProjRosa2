#pragma once
#include "CoreMinimal.h"
#include "GameSystemDataSubsystem.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=GameSystemDataSubsystem -FallbackName=GameSystemDataSubsystem
#include "EG01MessageSpeedTypeEnum.h"
#include "G01OptionConstParamStruct.h"
#include "G01OptionSettingParamStruct.h"
#include "G01GameSystemDataSubsystem.generated.h"

class UG01GameSystemDataSubsystemHelper;

UCLASS(Blueprintable)
class RS2RE_API UG01GameSystemDataSubsystem : public UGameSystemDataSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UG01GameSystemDataSubsystemHelper* MyHelperObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01OptionSettingParamStruct OptionSettingParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsClearFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsStaffRollFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> EnableDLCList;
    
public:
    UG01GameSystemDataSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetOptionSetting(FG01OptionSettingParamStruct InParams);
    
    UFUNCTION(BlueprintCallable)
    void SetIsPlayStaffRoll(bool InIsPlay);
    
    UFUNCTION(BlueprintCallable)
    void SetIsClear(bool InIsClear);
    
    UFUNCTION(BlueprintCallable)
    void SetDLCEnable(const FString& InDLCName);
    
    UFUNCTION(BlueprintCallable)
    bool IsDLCEnable(const FString& InDLCName);
    
    UFUNCTION(BlueprintCallable)
    void GetOptionSetting(FG01OptionSettingParamStruct& OutParams);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01OptionSettingParamStruct GetOptionInitParam() const;
    
    UFUNCTION(BlueprintCallable)
    void GetOptionConst(FG01OptionConstParamStruct& OutParams);
    
    UFUNCTION(BlueprintCallable)
    EG01MessageSpeedTypeEnum GetMessageSpeedType() const;
    
    UFUNCTION(BlueprintCallable)
    void GetIsPlayStaffRoll(bool& OutIsPlay);
    
    UFUNCTION(BlueprintCallable)
    void GetIsClear(bool& OutIsClear);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetHelperObject(UG01GameSystemDataSubsystemHelper*& OutHelper);
    
};

