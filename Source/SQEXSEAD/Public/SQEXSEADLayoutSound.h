#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ESQEXSEADLayoutType.h"
#include "SQEXSEADLayoutSound.generated.h"

class USQEXSEADLayoutSoundComponent;

UCLASS(Blueprintable, MinimalAPI)
class ASQEXSEADLayoutSound : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESQEXSEADLayoutType::Type> LayoutType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USQEXSEADLayoutSoundComponent* LayoutSoundComponent;
    
    ASQEXSEADLayoutSound(const FObjectInitializer& ObjectInitializer);

};

