#include "G01MapAspectFuncLib.h"

UG01MapAspectFuncLib::UG01MapAspectFuncLib() {
}

void UG01MapAspectFuncLib::MakeMapAspectActionByArts(FName InArtsID, const FG01BattleArtsTableRow& InArts, FG01MapAspectAction& OutAction) {
}

void UG01MapAspectFuncLib::GetMapAspectNum(int32& OutNum) {
}

void UG01MapAspectFuncLib::GetArtsTypeToMapAspect(EG01BattleArtsType InArtsType, EG01MapAspectType& OutType) {
}

void UG01MapAspectFuncLib::GetArtsAttrToMapAspect(EG01BattleArtsAttribute InAttr, EG01MapAspectType& OutType) {
}

void UG01MapAspectFuncLib::ConvertArtsTypeToMapAspect(EG01BattleArtsType InArtsType, TArray<EG01MapAspectType>& OutTypeList) {
}

void UG01MapAspectFuncLib::ConvertArtsAttrToMapAspect(const FG01BattleArtsAttrFlags& InAttrFlags, TArray<EG01MapAspectType>& OutTypeList) {
}

void UG01MapAspectFuncLib::CheckMapAspectReactAction(const FG01MapAspectFlowTableRow& InFlow, const FG01MapAspectAction& InAction, bool& OutIsReact, bool& OutPositive, bool& OutNegative) {
}


