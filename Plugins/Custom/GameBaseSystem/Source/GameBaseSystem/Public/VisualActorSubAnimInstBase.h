#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "VisualActorSubAnimInstInf.h"
#include "VisualActorSubAnimInstParams.h"
#include "VisualActorSubAnimInstBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class GAMEBASESYSTEM_API UVisualActorSubAnimInstBase : public UAnimInstance, public IVisualActorSubAnimInstInf {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVisualActorSubAnimInstParams MSubAnimInstParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MPhysicsMasterAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MPhysicsAlpha;
    
public:
    UVisualActorSubAnimInstBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPreviewWorld() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVisualActorSubAnimInstParams GetSubAnimInstParams() const;
    

    // Fix for true pure virtual functions not being implemented
};

