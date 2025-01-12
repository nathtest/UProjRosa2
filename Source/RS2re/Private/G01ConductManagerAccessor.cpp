#include "G01ConductManagerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

UG01ConductManagerAccessor::UG01ConductManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_CONDUCT;
}

void UG01ConductManagerAccessor::RequestBy(const FG01ConductIDHelper& InConductID, const FName& InDebugRequestClass, FG01ConductRequestHandler& OutHandler) {
}

void UG01ConductManagerAccessor::Request(const FG01ConductIDHelper& InConductID) {
}

void UG01ConductManagerAccessor::GetAllRequest(TArray<FG01ConductRequestInfoStruct>& OutRequestList) {
}

void UG01ConductManagerAccessor::GetAll(TArray<FG01ConductCacheStruct>& OutConductList) {
}

void UG01ConductManagerAccessor::Get(FG01ConductCacheStruct& OutConduct) {
}

void UG01ConductManagerAccessor::Destroy(const FG01ConductRequestHandler& InHandler) {
}

void UG01ConductManagerAccessor::Check(const FG01ConductItemIDHelper& InItemID, bool& OutIsEnable) {
}


