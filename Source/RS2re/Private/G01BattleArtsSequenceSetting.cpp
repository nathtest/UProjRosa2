#include "G01BattleArtsSequenceSetting.h"

FG01BattleArtsSequenceSetting::FG01BattleArtsSequenceSetting() {
    this->MSequenceOrigin = EG01BattleArtsOrigin::MainTarget;
    this->MDisableSequenceActorOffset = false;
    this->BaseStartFrame = 0;
    this->BaseEndFrame = 0;
    this->StartSectionSpeed = 0.00f;
    this->AttackSectionSpeed = 0.00f;
    this->EndSectionSpeed = 0.00f;
    this->UseUniqueSpace = false;
    this->BattleFieldMoveToFreeArea = false;
    this->DisplayNameStartOffset = 0;
    this->DisplayNameEndOffset = 0;
    this->FathomStartFrame = 0;
    this->FathomEndFrame = 0;
    this->RecalculateOcclusionCulling = false;
}

