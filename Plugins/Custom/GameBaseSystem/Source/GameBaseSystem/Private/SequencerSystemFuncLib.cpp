#include "SequencerSystemFuncLib.h"

USequencerSystemFuncLib::USequencerSystemFuncLib() {
}

FEventArguments USequencerSystemFuncLib::Func_SeqQueueInfoToSeqPlayArgs(const FSeqPlayCollisionEventInfo& InInfo) {
    return FEventArguments{};
}

FSeqPlayCollisionEventInfo USequencerSystemFuncLib::Func_SeqPlayArgsToSeqQueueInfo(const FEventArguments& InArgs) {
    return FSeqPlayCollisionEventInfo{};
}

bool USequencerSystemFuncLib::Func_NotEqual_SeqType(FSeqTypeView InA, FSeqTypeView InB) {
    return false;
}

bool USequencerSystemFuncLib::Func_NotEqual_SeqCategory(FSeqCategoryView InA, FSeqCategoryView InB) {
    return false;
}

bool USequencerSystemFuncLib::Func_EqualEqual_SeqType(FSeqTypeView InA, FSeqTypeView InB) {
    return false;
}

bool USequencerSystemFuncLib::Func_EqualEqual_SeqCategory(FSeqCategoryView InA, FSeqCategoryView InB) {
    return false;
}


