#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "EPositionComponentType.h"
#include "PositionComponents.h"
#include "AttachPositionComponent.generated.h"

class UChildAttachPositionComponentBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API UAttachPositionComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPositionComponentType, FPositionComponents> MPositionMap;
    
public:
    UAttachPositionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UChildAttachPositionComponentBase* GetPositionComponent(EPositionComponentType InType, int32 InIndex) const;
    
};

