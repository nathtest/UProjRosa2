#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01SkillArtsDojoContObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01SkillArtsDojoContObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01SkillArtsDojoContObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01SkillArtsDojoCont_Open();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01SkillArtsDojoCont_FinishedOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01SkillArtsDojoCont_Close();
    
};

