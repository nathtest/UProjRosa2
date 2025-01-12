#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=WidgetBaseSystem -ObjectName=PointerHandleBox -FallbackName=PointerHandleBox
#include "PointerHandleBox.h"
#include "CustomPointerHandleBox.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UCustomPointerHandleBox : public UPointerHandleBox {
    GENERATED_BODY()
public:
    UCustomPointerHandleBox();

};

