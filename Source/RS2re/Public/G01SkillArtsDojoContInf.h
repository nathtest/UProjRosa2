#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01SkillArtsDojoContInf.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01SkillArtsDojoContInf : public UInterface {
    GENERATED_BODY()
};

class IG01SkillArtsDojoContInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01SkillArtsDojoCont_RequestOpen(AActor* InRequestActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01SkillArtsDojoCont_RequestForceClose();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01SkillArtsDojoCont_Back();
    
};

