#include "WidgetSubsystem.h"

UWidgetSubsystem::UWidgetSubsystem() {
    this->HelperObject = NULL;
    this->MasterWidget = NULL;
}

void UWidgetSubsystem::RemoveMasterView(UGameViewWidget* InWidget) {
}

void UWidgetSubsystem::ReleaseWidget(EWidgetType InWidgetType) {
}

void UWidgetSubsystem::RegisterWidget(EWidgetType InWidgetType, FWidgetTypeDataInfo InWidgetTypeData) {
}

bool UWidgetSubsystem::IsCreateWidget(EWidgetType InWidgetType) {
    return false;
}

bool UWidgetSubsystem::IsCreatePreWidget(EWidgetType InWidgetType) {
    return false;
}

TArray<UGameViewWidget*> UWidgetSubsystem::GetWidget(EWidgetType InWidgetType) {
    return TArray<UGameViewWidget*>();
}

TArray<UGameViewWidget*> UWidgetSubsystem::GetPreWidget(EWidgetType InWidgetType) {
    return TArray<UGameViewWidget*>();
}

UMasterViewWidget* UWidgetSubsystem::GetMasterViewWidget() const {
    return NULL;
}

UDataTable* UWidgetSubsystem::GetCreateDataTable() const {
    return NULL;
}

void UWidgetSubsystem::ChangeAddToViewPort(int32 InZOrder) {
}

void UWidgetSubsystem::ChangeAddToPlayerScreen(bool SetLocalPlayer, int32 InZOrder) {
}

void UWidgetSubsystem::AllWidgetClear() {
}

void UWidgetSubsystem::AllPreWidgetClear() {
}

void UWidgetSubsystem::AddMasterView(UGameViewWidget* InWidget, FWidgetDrawDataInfo InDrawData) {
}


