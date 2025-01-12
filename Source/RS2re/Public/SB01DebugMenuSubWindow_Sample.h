#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ImGuiHelper -ObjectName=DebugMenuSubWindowBase -FallbackName=DebugMenuSubWindowBase
#include "SB01DebugMenuSubWindow_Sample.generated.h"

class AActor;

UCLASS(Blueprintable)
class USB01DebugMenuSubWindow_Sample : public UDebugMenuSubWindowBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
public:
    USB01DebugMenuSubWindow_Sample();

};

