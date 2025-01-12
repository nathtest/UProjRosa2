#include "G01ClassInfoManagerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

UG01ClassInfoManagerAccessor::UG01ClassInfoManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_CLASSINFO;
}

void UG01ClassInfoManagerAccessor::IsLastEmperorID(bool& OutIsLastEmperorID, FG01CharaClassID InClassId) const {
}

void UG01ClassInfoManagerAccessor::GetFriendClassID(const EG01FriendClass& InFriendClass, bool& OutIsExist, FName& OutFriendClass) const {
}

void UG01ClassInfoManagerAccessor::GetFriendClass(const FName& InFriendClassID, bool& OutIsExist, EG01FriendClass& OutFriendClass) const {
}

void UG01ClassInfoManagerAccessor::FindClassInfo(const FG01CharaClassID& InClassId, bool& OutIsExist, FG01ClassInfoTableRow& OutInfo) const {
}


