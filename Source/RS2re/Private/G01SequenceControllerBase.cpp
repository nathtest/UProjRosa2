#include "G01SequenceControllerBase.h"
#include "G01EnvironmentManagerAccessor.h"
#include "G01RoomManagerAccessor.h"
#include "Templates/SubclassOf.h"

AG01SequenceControllerBase::AG01SequenceControllerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RoomManagerAccessor = CreateDefaultSubobject<UG01RoomManagerAccessor>(TEXT("RoomManagerAccessor"));
    this->EnvironmentManagerAccessor = CreateDefaultSubobject<UG01EnvironmentManagerAccessor>(TEXT("EnvironmentManagerAccessor"));
    this->MActorOverlapPriority.AddDefaulted(2);
    this->StandardVisualActor_Human = NULL;
    this->CachedBgmVolume = 0.00f;
    this->FadeInTime = 0.00f;
    this->PlayType = EG01SeqControllerPlayType::Default;
    this->MCamActiveInfoIndex = 0;
    this->MActiveCameraObject = NULL;
    this->MMaxSizeTargetSlotIndex = -1;
}

void AG01SequenceControllerBase::OnDestroyVolumeOwner(AActor* InOwner) {
}

bool AG01SequenceControllerBase::IsUseBinderArtsNameCommand() const {
    return false;
}

bool AG01SequenceControllerBase::IsCacheEnvironmentPresetID_Implementation() const {
    return false;
}

AActor* AG01SequenceControllerBase::GetStandardVisualActor_Human() const {
    return NULL;
}

EG01SeqControllerPlayType AG01SequenceControllerBase::GetPlayType() const {
    return EG01SeqControllerPlayType::Default;
}

FG01SeqPlayArguments AG01SequenceControllerBase::GetG01PlayArguments() const {
    return FG01SeqPlayArguments{};
}

void AG01SequenceControllerBase::Cmd_SA_SetPlayType(EG01SeqControllerPlayType InType) {
}

void AG01SequenceControllerBase::Cmd_SA_SetBgmVolume(AActor* InOwner, float InVolume, float InFadeInTime) {
}

void AG01SequenceControllerBase::Cmd_SA_SetBattleLoadArtsInfo(FG01SeqPlayArg_BattleLoadArtsInfo InLoadArtsData) {
}

void AG01SequenceControllerBase::Cmd_SA_SetBattleFormationInfo(FG01SeqPlayArg_BattleFormation InFormationInfo) {
}

void AG01SequenceControllerBase::Cmd_SA_SetBattleEncountInfo(FG01SeqPlayArg_BattleEncount InEncountInfo) {
}

void AG01SequenceControllerBase::Cmd_SA_SetBattleAttackMissHitInfo(TMap<int32, bool>& InMissHitArray) {
}

void AG01SequenceControllerBase::Cmd_SA_SetBattleAttackInfo(FG01SeqPlayArg_BattleAttackInfo InAttackInfo) {
}

void AG01SequenceControllerBase::Cmd_SA_SetBattleArtsInfo(FG01SeqPlayArg_BattleArts InArtsData) {
}

void AG01SequenceControllerBase::Cmd_SA_GetOverlappingActorsByRenderType(TSubclassOf<AActor> InClassFilter, FG01SeqActorCollectResult& OutResult) {
}

float AG01SequenceControllerBase::Cmd_SA_GetBgmVolume() const {
    return 0.0f;
}

float AG01SequenceControllerBase::Cmd_SA_GetBgmFadeInTime() const {
    return 0.0f;
}

FG01SeqPlayArg_BattleFormation AG01SequenceControllerBase::Cmd_SA_GetBattleFormationInfo() const {
    return FG01SeqPlayArg_BattleFormation{};
}

FG01SeqPlayArg_BattleEncount AG01SequenceControllerBase::Cmd_SA_GetBattleEncountInfo() const {
    return FG01SeqPlayArg_BattleEncount{};
}

FG01SeqPlayArg_BattleArts AG01SequenceControllerBase::Cmd_SA_GetBattleArtsInfo() const {
    return FG01SeqPlayArg_BattleArts{};
}


