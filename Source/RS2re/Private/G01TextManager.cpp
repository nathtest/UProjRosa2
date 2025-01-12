#include "G01TextManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ObserverSubjectComponent -FallbackName=ObserverSubjectComponent
#include "G01CharacterManagerAccessor.h"
#include "G01ClassInfoManagerAccessor.h"
#include "G01GamePlayDataManagerAccessor.h"
#include "G01GameSystemDataManagerAccessor.h"
#include "G01HistoryManagerAccessor.h"
#include "G01ItemManagerAccessor.h"
#include "G01PartyManagerAccessor.h"
#include "G01ThroneMenuManagerAccessor.h"

AG01TextManager::AG01TextManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_TEXTSYSTEM;
    this->ObserverSubject = CreateDefaultSubobject<UObserverSubjectComponent>(TEXT("ObserverSubject"));
    this->GamePlayDataManagerAccessor = CreateDefaultSubobject<UG01GamePlayDataManagerAccessor>(TEXT("GamePlayDataManagerAccessor"));
    this->GameSystemDataManagerAccessor = CreateDefaultSubobject<UG01GameSystemDataManagerAccessor>(TEXT("GameSystemDataManagerAccessor"));
    this->PartyManagerAccessor = CreateDefaultSubobject<UG01PartyManagerAccessor>(TEXT("PartyManagerAccessor"));
    this->CharacterManagerAccessor = CreateDefaultSubobject<UG01CharacterManagerAccessor>(TEXT("CharacterManagerAccessor"));
    this->ClassInfoManagerAccessor = CreateDefaultSubobject<UG01ClassInfoManagerAccessor>(TEXT("ClassInfoManagerAccessor"));
    this->ItemManagerAccessor = CreateDefaultSubobject<UG01ItemManagerAccessor>(TEXT("ItemManagerAccessor"));
    this->ThroneManagerAccessor = CreateDefaultSubobject<UG01ThroneMenuManagerAccessor>(TEXT("ThroneManagerAccessor"));
    this->HistoryManagerAccessor = CreateDefaultSubobject<UG01HistoryManagerAccessor>(TEXT("HistoryManagerAccessor"));
    this->OverridePlayerGender = EG01TextPlayerGenderOverride::None;
}

bool AG01TextManager::ReplaceTagImpl_ID_Normal_PlayerGender(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const {
    return false;
}

bool AG01TextManager::ReplaceTagImpl_ID_Normal_PlayerClass(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const {
    return false;
}

bool AG01TextManager::ReplaceTagImpl_ID_Normal_PartyGender(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const {
    return false;
}

bool AG01TextManager::ReplaceTagImpl_ID_Normal_PartyClass(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const {
    return false;
}

bool AG01TextManager::ReplaceTagImpl_Dummy(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const {
    return false;
}

bool AG01TextManager::ReplaceTagImpl_Content_Normal_S_Prepos(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const {
    return false;
}

bool AG01TextManager::ReplaceTagImpl_Content_Normal_S_Link(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const {
    return false;
}

bool AG01TextManager::ReplaceTagImpl_Content_Normal_S_HasPatchum(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const {
    return false;
}

bool AG01TextManager::ReplaceTagImpl_Content_Normal_S_Emd(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const {
    return false;
}

bool AG01TextManager::ReplaceTagImpl_Content_Normal_S_Break(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const {
    return false;
}

bool AG01TextManager::ReplaceTagImpl_Content_Normal_M_String(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const {
    return false;
}

bool AG01TextManager::ReplaceTagImpl_Content_Normal_M_SPItemName(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const {
    return false;
}

bool AG01TextManager::ReplaceTagImpl_Content_Normal_M_SItemName(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const {
    return false;
}

bool AG01TextManager::ReplaceTagImpl_Content_Normal_M_PItemName(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const {
    return false;
}

bool AG01TextManager::ReplaceTagImpl_Content_Normal_M_NumComma(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const {
    return false;
}

bool AG01TextManager::ReplaceTagImpl_Content_Normal_M_Num(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const {
    return false;
}

bool AG01TextManager::ReplaceTagImpl_Content_Normal_A_UserInputName(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const {
    return false;
}

bool AG01TextManager::ReplaceTagImpl_Content_Normal_A_TomaGen(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const {
    return false;
}

bool AG01TextManager::ReplaceTagImpl_Content_Normal_A_SingularPlural(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const {
    return false;
}

bool AG01TextManager::ReplaceTagImpl_Content_Normal_A_PlayerName(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const {
    return false;
}

bool AG01TextManager::ReplaceTagImpl_Content_Normal_A_PlayerGender(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const {
    return false;
}

bool AG01TextManager::ReplaceTagImpl_Content_Normal_A_PlayerClass(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const {
    return false;
}

bool AG01TextManager::ReplaceTagImpl_Content_Normal_A_PartyName(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const {
    return false;
}

bool AG01TextManager::ReplaceTagImpl_Content_Normal_A_PartyClass(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const {
    return false;
}

bool AG01TextManager::ReplaceTagImpl_Content_Normal_A_Noun(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const {
    return false;
}

bool AG01TextManager::ReplaceTagImpl_Content_Normal_A_MaleFemaleNormal(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const {
    return false;
}

bool AG01TextManager::ReplaceTagImpl_Content_Normal_A_Listener(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const {
    return false;
}

bool AG01TextManager::ReplaceTagImpl_Content_Normal_A_InstitutionCrown(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const {
    return false;
}

bool AG01TextManager::ReplaceTagImpl_Content_Normal_A_HiragaGen(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const {
    return false;
}

bool AG01TextManager::ReplaceTagImpl_Content_Normal_A_ClassName(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const {
    return false;
}

bool AG01TextManager::ReplaceTagImpl_Content_Normal_A_ClassCurrentName(FG01TextReplaceTagParams& InOutParams, FString& OutValue) const {
    return false;
}

void AG01TextManager::OnResourceLoadComplete() {
}


