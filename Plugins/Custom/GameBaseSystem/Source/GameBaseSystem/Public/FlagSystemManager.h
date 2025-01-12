#pragma once
#include "CoreMinimal.h"
#include "FlagSystemManagerInf.h"
#include "ManagerBase.h"
#include "FlagSystemManager.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AFlagSystemManager : public AManagerBase, public IFlagSystemManagerInf {
    GENERATED_BODY()
public:
    AFlagSystemManager(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

