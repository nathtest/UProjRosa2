#pragma once
#include "CoreMinimal.h"
#include "G01DebugMenuSubWindow.h"
#include "DebugCreateSubWindowHighlight.generated.h"

class UDebugMenuSubWindowBase;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UDebugCreateSubWindowHighlight : public UG01DebugMenuSubWindow {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebugMenuSubWindowBase* TargetWindow;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HighlightTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HighlightCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HighlightSize;
    
public:
    UDebugCreateSubWindowHighlight();

};

