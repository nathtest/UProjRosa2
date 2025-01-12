#pragma once
#include "CoreMinimal.h"
#include "ManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerBase -FallbackName=ManagerBase
#include "G01SkillArtsDojoContInf.h"
#include "G01SkillArtsDojoManager.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01SkillArtsDojoManager : public AManagerBase, public IG01SkillArtsDojoContInf {
    GENERATED_BODY()
public:
    AG01SkillArtsDojoManager(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

