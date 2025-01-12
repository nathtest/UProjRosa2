#include "G01HudManagerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

UG01HudManagerAccessor::UG01HudManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_HUD;
}

void UG01HudManagerAccessor::SetPurchaseCheckResult(int32 OutSelectIndex, EG01BuyableTypeEnum OutBuyableType) {
}

void UG01HudManagerAccessor::GetPurchaseCheckResult(int32& OutSelectIndex, EG01BuyableTypeEnum& OutBuyableType) {
}


