#include "G01BattleSubsystem.h"

UG01BattleSubsystem::UG01BattleSubsystem() {
    this->MyHelperObject = NULL;
}

void UG01BattleSubsystem::SetSaveInfo(const FG01BattleSaveInfo& InSaveInfo) {
}

void UG01BattleSubsystem::SetEnemyAffinityAllOpen(FName InEnemyID, bool InIfNotExistToAdd) {
}

void UG01BattleSubsystem::GetSaveInfo(FG01BattleSaveInfo& OutSaveInfo) {
}

void UG01BattleSubsystem::GetHelperObject(UG01BattleSubsystemHelper*& OutHelper) {
}

void UG01BattleSubsystem::GetCacheSettingAsset(UG01BattleCacheSettingDataAsset*& OutSetting) {
}

void UG01BattleSubsystem::ForgetAllAffinity(FName InEnemyID) {
}


