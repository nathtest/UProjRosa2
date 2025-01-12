#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "SkeletalMeshMergeParams.h"
#include "SkelMeshMergeComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API USkelMeshMergeComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkeletalMeshMergeParams MSkelMeshMergeParams;
    
public:
    USkelMeshMergeComponent(const FObjectInitializer& ObjectInitializer);

};

