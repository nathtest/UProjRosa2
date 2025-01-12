#pragma once
#include "CoreMinimal.h"
#include "Rigs/RigHierarchyDefines.h" //CROSS-MODULE INCLUDE V2: -ModuleName=ControlRig -ObjectName=RigElementKey -FallbackName=RigElementKey
#include "CustomCachedRigElement.generated.h"

USTRUCT(BlueprintType)
struct FCustomCachedRigElement {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey Key;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ContainerVersion;
    
public:
    RS2RE_API FCustomCachedRigElement();
};

