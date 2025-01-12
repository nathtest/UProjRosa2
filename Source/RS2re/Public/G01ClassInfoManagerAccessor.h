#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
#include "EG01FriendClass.h"
#include "G01CharaClassID.h"
#include "G01ClassInfoTableRow.h"
#include "G01ClassInfoManagerAccessor.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01ClassInfoManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UG01ClassInfoManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsLastEmperorID(bool& OutIsLastEmperorID, FG01CharaClassID InClassId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetFriendClassID(const EG01FriendClass& InFriendClass, bool& OutIsExist, FName& OutFriendClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetFriendClass(const FName& InFriendClassID, bool& OutIsExist, EG01FriendClass& OutFriendClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void FindClassInfo(const FG01CharaClassID& InClassId, bool& OutIsExist, FG01ClassInfoTableRow& OutInfo) const;
    
};

