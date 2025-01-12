#include "G01AbilityTableRow.h"

FG01AbilityTableRow::FG01AbilityTableRow() {
    this->OpenLevel = 0;
    this->HasMastery = false;
    this->DisplayOnArtsNameHud = false;
    this->DisplayOnCommandHud = false;
    this->DisplayOnStatusHud = false;
    this->DisplayOnResultHud = false;
    this->DisplayHudPriority = 0;
    this->AttackScore = 0;
    this->SpeedScore = 0;
    this->MagicScore = 0;
    this->DefenseScore = 0;
    this->SupportScore = 0;
    this->AchievementForGet = false;
    this->AchievementForInheritance = false;
}

