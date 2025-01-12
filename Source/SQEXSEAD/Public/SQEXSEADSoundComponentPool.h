#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SQEXSEADSoundComponentPool.generated.h"

class USQEXSEADSoundComponent;

UCLASS(Blueprintable, Transient)
class USQEXSEADSoundComponentPool : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USQEXSEADSoundComponent*> Components;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USQEXSEADSoundComponent*> FreeComponents;
    
public:
    USQEXSEADSoundComponentPool();

};

