#include "G01BgmManagerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

UG01BgmManagerAccessor::UG01BgmManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_BGM;
}

void UG01BgmManagerAccessor::UpdateFirstPriorityBgm_Implementation() {
}

void UG01BgmManagerAccessor::UnregisterBySystem_Implementation(EG01BgmUnregisterBySystemType InType) {
}

void UG01BgmManagerAccessor::UnregisterByLayer_Implementation(G01BgmLayer InLayer) {
}

void UG01BgmManagerAccessor::UnregisterAll_Implementation() {
}

void UG01BgmManagerAccessor::Unregister_Implementation(const FG01BgmRequest& InRequest) {
}

void UG01BgmManagerAccessor::SuspensionBgmTransition_Implementation() {
}

void UG01BgmManagerAccessor::SetVolumeMultiplier_Implementation(FG01BgmRequest InRequest, float InVolumeMultipier, float InFadeTime) {
}

void UG01BgmManagerAccessor::SetUseRemakeBgm_Implementation(bool isFlag) {
}

void UG01BgmManagerAccessor::SetMasterVolume_Implementation(float InVolume, float InFadeTime) {
}

void UG01BgmManagerAccessor::SetMainBgmByLayer_Implementation(G01BgmLayer InLayer) {
}

void UG01BgmManagerAccessor::SetMainBgm_Implementation(const FG01BgmRequest& InRequest) {
}

void UG01BgmManagerAccessor::SetFadeOutTime_Implementation(const FG01BgmRequest& InRequest, float InTime) {
}

void UG01BgmManagerAccessor::SetFadeInTime_Implementation(const FG01BgmRequest& InRequest, float InTime) {
}

void UG01BgmManagerAccessor::SetCategoryVolume_Implementation(FName InCategory, float InVolume, float InFadeTime) {
}

void UG01BgmManagerAccessor::Resume_Implementation() {
}

void UG01BgmManagerAccessor::ResetMainBgm_Implementation(const FG01BgmRequest& InRequest) {
}

void UG01BgmManagerAccessor::Reregister_Implementation() {
}

void UG01BgmManagerAccessor::Register_Implementation(const FG01BgmRequest& InRequest, bool& OutIsSuccess) {
}

void UG01BgmManagerAccessor::Pause_Implementation() {
}

void UG01BgmManagerAccessor::NeedForceFadeOutModeByLayer_Implementation(G01BgmLayer InLayer) {
}

void UG01BgmManagerAccessor::NeedForceFadeOutMode_Implementation(FG01BgmRequest InRequest) {
}

bool UG01BgmManagerAccessor::GetUseRemakeBgm_Implementation() {
    return false;
}

void UG01BgmManagerAccessor::GetTableRow_Implementation(const FG01BgmRequest& InRequest, bool& OutIsExist, FG01BgmTableRow& OutTableRow) {
}

void UG01BgmManagerAccessor::GetRegisterAll_Implementation(TArray<FG01BgmRegister>& OutRegisterInfoList) {
}

void UG01BgmManagerAccessor::GetRegister_Implementation(G01BgmLayer InLayer, bool& OutIsRegister, FG01BgmRegister& OutRegisterInfo) {
}

void UG01BgmManagerAccessor::GetMasterVolume_Implementation(float& OutVolume) {
}

void UG01BgmManagerAccessor::GetMainBgm_Implementation(bool& OutIsRegister, FG01BgmRequest& OutRequest, G01BgmLayer& OutLayer) {
}

void UG01BgmManagerAccessor::GetLayerHandleOwner_Implementation(G01BgmLayer InLayer, UObject*& OutOwnerObject) {
}

void UG01BgmManagerAccessor::GetLayerHandle_Implementation(UObject* InOwnerObject, G01BgmLayer InLayer, bool InNotWarning, UG01BgmLayerHandleObject*& OutHandle) {
}

void UG01BgmManagerAccessor::GetForcedLayerHandle_Implementation(G01BgmLayer InLayer, UG01BgmLayerHandleObject*& OutHandle) {
}

void UG01BgmManagerAccessor::GetCurrentPlay_Implementation(bool& OutIsRegister, FG01BgmRegister& OutRegisterInfo) {
}

void UG01BgmManagerAccessor::GetCategoryVolume_Implementation(FName InCategory, float& OutVolume) {
}

void UG01BgmManagerAccessor::DeSuspensionBgmTransition_Implementation() {
}

bool UG01BgmManagerAccessor::CheckSuspensionBgmTransition_Implementation() {
    return false;
}

void UG01BgmManagerAccessor::CheckRegisterByLayer_Implementation(G01BgmLayer InLayer, bool& OutIsRegister) {
}

void UG01BgmManagerAccessor::CheckRegister_Implementation(const FG01BgmRequest& InRequest, bool& OutIsRegister) {
}

bool UG01BgmManagerAccessor::CheckListenedEvenOnce_Implementation(FG01BgmRequest InRequest) {
    return false;
}


