#pragma once
#include "CoreMinimal.h"
#include "ManagerBase.h"
#include "StaffRollManagerInf.h"
#include "StaffRollManagerUserInf.h"
#include "StaffRollManager.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AStaffRollManager : public AManagerBase, public IStaffRollManagerInf, public IStaffRollManagerUserInf {
    GENERATED_BODY()
public:
    AStaffRollManager(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

