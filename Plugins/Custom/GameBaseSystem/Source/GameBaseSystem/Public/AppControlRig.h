#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ControlRig -ObjectName=ControlRig -FallbackName=ControlRig
#include "ControlRig.h"
#include "AppControlRig.generated.h"

UCLASS(Blueprintable, EditInlineNew)
//before UControlRig
class GAMEBASESYSTEM_API UAppControlRig : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MControlRigTag;
    
public:
    UAppControlRig();

};

