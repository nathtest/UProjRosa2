#include "G01DebugBattleLoadArtsResourceActorSubWindow.h"

AG01DebugBattleLoadArtsResourceActorSubWindow::AG01DebugBattleLoadArtsResourceActorSubWindow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool AG01DebugBattleLoadArtsResourceActorSubWindow::GetHighPrioritySetting(bool InEnemy, int32 InIndex, int32 InVariationIndex) {
    return false;
}

void AG01DebugBattleLoadArtsResourceActorSubWindow::GetArtsVariationSequenceController(bool InEnemy, int32 InIndex, int32 InVariationIndex, FName& OutSource, FName& OutTarget, AG01SequenceControllerBase*& OutSequence) {
}

int32 AG01DebugBattleLoadArtsResourceActorSubWindow::GetArtsVariationCount(bool InEnemy, int32 InIndex) {
    return 0;
}

FName AG01DebugBattleLoadArtsResourceActorSubWindow::GetArtsName(bool InEnemy, int32 InIndex) {
    return NAME_None;
}

int32 AG01DebugBattleLoadArtsResourceActorSubWindow::GetArtsCount(bool InEnemy) {
    return 0;
}


