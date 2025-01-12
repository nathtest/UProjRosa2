#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EG01FriendClass.h"
#include "G01CharaClassID.h"
#include "G01ClassInfoTableRow.h"
#include "G01ClassInfoManagerInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01ClassInfoManagerInterface : public UInterface {
    GENERATED_BODY()
};

class IG01ClassInfoManagerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ClassInfoMgr_IsLastEmperorID(bool& OutIsLastEmperorID, const FG01CharaClassID& InClassId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ClassInfoMgr_GetFriendClassID(const EG01FriendClass& InFriendClass, bool& OutIsExist, FName& OutFriendClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ClassInfoMgr_GetFriendClass(const FName& InFriendClassID, bool& OutIsExist, EG01FriendClass& OutFriendClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ClassInfoMgr_FindClassInfo(const FG01CharaClassID& InClassId, bool& OutIsExist, FG01ClassInfoTableRow& OutInfo) const;
    
};

