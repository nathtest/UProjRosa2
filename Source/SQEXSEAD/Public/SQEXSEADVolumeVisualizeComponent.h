#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "SQEXSEADVolumeVisualizeComponent.generated.h"

class UBrushComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SQEXSEAD_API USQEXSEADVolumeVisualizeComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrushComponent* BrushComponent;
    
    USQEXSEADVolumeVisualizeComponent(const FObjectInitializer& ObjectInitializer);

};

