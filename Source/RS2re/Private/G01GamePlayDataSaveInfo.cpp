#include "G01GamePlayDataSaveInfo.h"

FG01GamePlayDataSaveInfo::FG01GamePlayDataSaveInfo() {
    this->StoryClearFlags = 0;
    this->GameClearCount = 0;
    this->ClearAreaCount = 0;
    this->QuestClearAreaCount = 0;
    this->PeriodBattleCount = 0;
    this->TotalBattleCount = 0;
    this->TotalBattleWinCount = 0;
    this->TotalBattleLoseCount = 0;
    this->TotalBattleEscapeCount = 0;
    this->IsTrialClear = false;
    this->Crown = 0;
    this->ImperialCrown = 0;
    this->Income = 0;
    this->ImperialIncome = 0;
    this->IncomeCoefficient = 0.00f;
    this->GameDifficultyType = EG01GameDifficultyType::CASUAL;
    this->GamePlayMode = EG01GamePlayModeType::CLASSIC;
    this->ImperialPoint = 0;
    this->ImperialLevel = 0;
    this->EnemyForcePoint = 0;
    this->EnemyForceLevel = 0;
    this->IsBossBreak = false;
    this->IsUnderBossBreak = false;
    this->LowestGameDifficultyType = EG01GameDifficultyType::CASUAL;
}

