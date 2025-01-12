#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EG01BattleArtsType.h"
#include "EG01HudInformationNoticeTypeEnum.h"
#include "G01ThroneMenuUiControllerDataStructID.h"
#include "G01HudInformationUiControllerInf.generated.h"

class UTexture2D;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01HudInformationUiControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01HudInformationUiControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01HudInformationUiController_SpellInstituteRequest(UTexture2D* InIconTexture, UTexture2D* InIconSubTexture, const FText& SpellName, EG01HudInformationNoticeTypeEnum NoticeType, EG01BattleArtsType TextureType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01HudInformationUiController_IsInformationDisp(bool& IsActive);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01HudInformationUiController_ImperialGuardRequest(UTexture2D* InIconTexture, const FText& ArmyName, EG01HudInformationNoticeTypeEnum NoticeType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01HudInformationUiController_FacilityExpansionRequest(UTexture2D* InIconTexture, const FText& FacilityName, FName TextID, EG01HudInformationNoticeTypeEnum NoticeType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01HudInformationUiController_FacilityBuildThroneIDRequest(FG01ThroneMenuUiControllerDataStructID ThroneID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01HudInformationUiController_FacilityBuildRequest(UTexture2D* InIconTexture, const FText& FacilityName, FName TextID, EG01HudInformationNoticeTypeEnum NoticeType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01HudInformationUiController_DevelopEquipmentRequest(UTexture2D* InIconTexture, const FText& ItemName, EG01HudInformationNoticeTypeEnum NoticeType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01HudInformationUiController_AreaOpen(UTexture2D* InIconTexture, const FText& AreaName, FName TextID, EG01HudInformationNoticeTypeEnum NoticeType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01HudInformationUiController_AreaChange();
    
};

