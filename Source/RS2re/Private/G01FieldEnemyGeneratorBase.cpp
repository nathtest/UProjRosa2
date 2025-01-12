#include "G01FieldEnemyGeneratorBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagSystemManagerAccessCompo -FallbackName=FlagSystemManagerAccessCompo

AG01FieldEnemyGeneratorBase::AG01FieldEnemyGeneratorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MCrowdEncountEdit = false;
    this->MAIParamEdit = false;
    this->MAIState = EAIState::AI_IDLE;
    this->MIsBeginAI = false;
    this->MAIBehaviorTree = NULL;
    this->MIsEnableEncountEvent = true;
    this->MRespawnEdit = false;
    this->MMaxMoveRadius = -1.00f;
    this->MSearchStartRadius = -1.00f;
    this->MSearchRadius = -1.00f;
    this->MSearchHight = -1.00f;
    this->MEnableRadius = 0.00f;
    this->MEnableHeight = -1.00f;
    this->MEnableInteractRadius = 800.00f;
    this->MUniqueRadiusEdit = false;
    this->MUniqueSearchHight = -1.00f;
    this->MUniqueSightRadius = -1.00f;
    this->MUniqueLoseSightRadius = -1.00f;
    this->MUniqueVisionAngleDegrees = -1.00f;
    this->MUniqueHearingHight = -1.00f;
    this->MUniqueHearingRange = -1.00f;
    this->MWaitSetnse = ESenseType::Normal;
    this->MMoveSense = ESenseType::Normal;
    this->MMinWaitTime = -1.00f;
    this->MMaxWaitTime = -1.00f;
    this->MLoseSightTime = -1.00f;
    this->MMoveProperty = EG01EnemyMoveProperty::None;
    this->MDitherDistRate = 0.90f;
    this->MSkipCalcInitDither = false;
    this->MFlagAIState = EAIState::AI_IDLE;
    this->IsKnockDown = false;
    this->MFlagManagerAccessor = CreateDefaultSubobject<UFlagSystemManagerAccessCompo>(TEXT("FlagManagerAccessor"));
}


