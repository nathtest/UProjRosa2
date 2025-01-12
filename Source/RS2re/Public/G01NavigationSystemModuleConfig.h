#pragma once
#include "CoreMinimal.h"
#include "NavigationSystem.h" //CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavigationSystemModuleConfig -FallbackName=NavigationSystemModuleConfig
#include "G01NavigationSystemModuleConfig.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class RS2RE_API UG01NavigationSystemModuleConfig : public UNavigationSystemModuleConfig {
    GENERATED_BODY()
public:
    UG01NavigationSystemModuleConfig();

};

