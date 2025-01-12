#include "G01SaveLoadDataStruct.h"

FG01SaveLoadDataStruct::FG01SaveLoadDataStruct() {
    this->Difficultylevel = EG01GameDifficultyType::CASUAL;
    this->PeriodCount = 0;
    this->CrearAreaNum = 0;
    this->IsBossBreak = false;
    this->IsUnderBossBreak = false;
}

