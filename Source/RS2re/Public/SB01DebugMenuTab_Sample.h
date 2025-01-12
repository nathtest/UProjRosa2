#pragma once
#include "CoreMinimal.h"
#include "DebugMenuTabBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=ImGuiHelper -ObjectName=DebugMenuTabBase -FallbackName=DebugMenuTabBase
#include "SB01DebugMenuTab_Sample.generated.h"

class USB01DebugMenuSubWindow_Sample;

UCLASS(Blueprintable)
class USB01DebugMenuTab_Sample : public UDebugMenuTabBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USB01DebugMenuSubWindow_Sample* SubWindow;
    
public:
    USB01DebugMenuTab_Sample();

};

