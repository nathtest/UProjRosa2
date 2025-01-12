#include "G01TitlePrologueUiControllerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EUiControllerId -FallbackName=EUiControllerId

UG01TitlePrologueUiControllerAccessor::UG01TitlePrologueUiControllerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MUiControllerId = EUiControllerId::TITLE_PROLOGUE;
}

void UG01TitlePrologueUiControllerAccessor::OpenPlus(EG01TitlePrologueStaffReqestPlusTypeEnum RequestType, FText Position1, FText Name1, FText Position2, FText Name2, FText Position3, FText Name3, FText Position4, FText Name4, FText Position5, FText Name5, FText Position6, FText Name6, bool IsLongAnim) {
}

void UG01TitlePrologueUiControllerAccessor::Open(EG01TitlePrologueStaffReqestTypeEnum RequestType, FText Position1, FText Name1, FText Position2, FText Name2, FText Position3, FText Name3, bool IsLongAnim) {
}


