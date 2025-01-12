#include "QuestSubsystemHelper.h"
#include "QuestCoreData.h"

UQuestSubsystemHelper::UQuestSubsystemHelper() {
    this->CoreDataClass = UQuestCoreData::StaticClass();
    this->AllQuestTable = NULL;
}


