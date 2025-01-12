#pragma once
#include "CoreMinimal.h"
#include "ManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerBase -FallbackName=ManagerBase
#include "SaveDataSubsystemObserverInf.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SaveDataSubsystemObserverInf -FallbackName=SaveDataSubsystemObserverInf
#include "EG01TextPlayerGenderOverride.h"
#include "G01OptionMenuUiControllerObserverInf.h"
#include "G01TextManagerInterface.h"
#include "G01TextReplaceTagParams.h"
#include "ObserverSubjectComponent.h"
#include "G01TextManager.generated.h"

class UG01CharacterManagerAccessor;
class UG01ClassInfoManagerAccessor;
class UG01GamePlayDataManagerAccessor;
class UG01GameSystemDataManagerAccessor;
class UG01HistoryManagerAccessor;
class UG01ItemManagerAccessor;
class UG01PartyManagerAccessor;
class UG01TextManagerSettings;
class UG01ThroneMenuManagerAccessor;
class UObserverSubjectComponent;

UCLASS(Blueprintable)
class RS2RE_API AG01TextManager : public AManagerBase, public ISaveDataSubsystemObserverInf, public IG01TextManagerInterface, public IG01OptionMenuUiControllerObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UObserverSubjectComponent* ObserverSubject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01GamePlayDataManagerAccessor* GamePlayDataManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01GameSystemDataManagerAccessor* GameSystemDataManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01PartyManagerAccessor* PartyManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01CharacterManagerAccessor* CharacterManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01ClassInfoManagerAccessor* ClassInfoManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01ItemManagerAccessor* ItemManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01ThroneMenuManagerAccessor* ThroneManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01HistoryManagerAccessor* HistoryManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UG01TextManagerSettings* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EG01TextPlayerGenderOverride OverridePlayerGender;
    
public:
    AG01TextManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    bool ReplaceTagImpl_ID_Normal_PlayerGender(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const;
    
    UFUNCTION(BlueprintCallable)
    bool ReplaceTagImpl_ID_Normal_PlayerClass(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const;
    
    UFUNCTION(BlueprintCallable)
    bool ReplaceTagImpl_ID_Normal_PartyGender(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const;
    
    UFUNCTION(BlueprintCallable)
    bool ReplaceTagImpl_ID_Normal_PartyClass(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const;
    
    UFUNCTION(BlueprintCallable)
    bool ReplaceTagImpl_Dummy(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const;
    
    UFUNCTION(BlueprintCallable)
    bool ReplaceTagImpl_Content_Normal_S_Prepos(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const;
    
    UFUNCTION(BlueprintCallable)
    bool ReplaceTagImpl_Content_Normal_S_Link(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const;
    
    UFUNCTION(BlueprintCallable)
    bool ReplaceTagImpl_Content_Normal_S_HasPatchum(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const;
    
    UFUNCTION(BlueprintCallable)
    bool ReplaceTagImpl_Content_Normal_S_Emd(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const;
    
    UFUNCTION(BlueprintCallable)
    bool ReplaceTagImpl_Content_Normal_S_Break(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const;
    
    UFUNCTION(BlueprintCallable)
    bool ReplaceTagImpl_Content_Normal_M_String(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const;
    
    UFUNCTION(BlueprintCallable)
    bool ReplaceTagImpl_Content_Normal_M_SPItemName(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const;
    
    UFUNCTION(BlueprintCallable)
    bool ReplaceTagImpl_Content_Normal_M_SItemName(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const;
    
    UFUNCTION(BlueprintCallable)
    bool ReplaceTagImpl_Content_Normal_M_PItemName(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const;
    
    UFUNCTION(BlueprintCallable)
    bool ReplaceTagImpl_Content_Normal_M_NumComma(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const;
    
    UFUNCTION(BlueprintCallable)
    bool ReplaceTagImpl_Content_Normal_M_Num(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const;
    
    UFUNCTION(BlueprintCallable)
    bool ReplaceTagImpl_Content_Normal_A_UserInputName(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const;
    
    UFUNCTION(BlueprintCallable)
    bool ReplaceTagImpl_Content_Normal_A_TomaGen(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const;
    
    UFUNCTION(BlueprintCallable)
    bool ReplaceTagImpl_Content_Normal_A_SingularPlural(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const;
    
    UFUNCTION(BlueprintCallable)
    bool ReplaceTagImpl_Content_Normal_A_PlayerName(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const;
    
    UFUNCTION(BlueprintCallable)
    bool ReplaceTagImpl_Content_Normal_A_PlayerGender(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const;
    
    UFUNCTION(BlueprintCallable)
    bool ReplaceTagImpl_Content_Normal_A_PlayerClass(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const;
    
    UFUNCTION(BlueprintCallable)
    bool ReplaceTagImpl_Content_Normal_A_PartyName(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const;
    
    UFUNCTION(BlueprintCallable)
    bool ReplaceTagImpl_Content_Normal_A_PartyClass(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const;
    
    UFUNCTION(BlueprintCallable)
    bool ReplaceTagImpl_Content_Normal_A_Noun(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const;
    
    UFUNCTION(BlueprintCallable)
    bool ReplaceTagImpl_Content_Normal_A_MaleFemaleNormal(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const;
    
    UFUNCTION(BlueprintCallable)
    bool ReplaceTagImpl_Content_Normal_A_Listener(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const;
    
    UFUNCTION(BlueprintCallable)
    bool ReplaceTagImpl_Content_Normal_A_InstitutionCrown(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const;
    
    UFUNCTION(BlueprintCallable)
    bool ReplaceTagImpl_Content_Normal_A_HiragaGen(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const;
    
    UFUNCTION(BlueprintCallable)
    bool ReplaceTagImpl_Content_Normal_A_ClassName(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const;
    
    UFUNCTION(BlueprintCallable)
    bool ReplaceTagImpl_Content_Normal_A_ClassCurrentName(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const;
    
    UFUNCTION(BlueprintCallable)
    void OnResourceLoadComplete();
    

    // Fix for true pure virtual functions not being implemented
};

