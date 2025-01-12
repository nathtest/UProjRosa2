#pragma once
#include "CoreMinimal.h"
#include "EPlayerRigCorrectionType.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EPlayerRigCorrectionType -FallbackName=EPlayerRigCorrectionType
#include "VisualActorSubAnimInstBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=VisualActorSubAnimInstBase -FallbackName=VisualActorSubAnimInstBase
#include "KawaiiPhysicsAnimInstanceInterface.h" //CROSS-MODULE INCLUDE V2: -ModuleName=KawaiiPhysics -ObjectName=KawaiiPhysicsAnimInstanceInterface -FallbackName=KawaiiPhysicsAnimInstanceInterface
#include "G01VisualActorSubAnimInstInterface.h"
#include "G01VisualActorSubAnimInstBase.generated.h"

class AG01FieldPlayerCharacterBase;

UCLASS(Blueprintable, NonTransient)
class RS2RE_API UG01VisualActorSubAnimInstBase : public UVisualActorSubAnimInstBase, public IG01VisualActorSubAnimInstInterface, public IKawaiiPhysicsAnimInstanceInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bNeedWarmUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 WarmUpFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DistanceThresholdScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RotationThresholdScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AG01FieldPlayerCharacterBase* FieldPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPlayerRigCorrectionType PlayerRigType;
    
public:
    UG01VisualActorSubAnimInstBase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPlayerRigCorrectionType GetPlayerRigType() const;
    

    // Fix for true pure virtual functions not being implemented
};

