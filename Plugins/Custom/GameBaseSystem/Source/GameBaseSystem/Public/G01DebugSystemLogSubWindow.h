#pragma once
#include "CoreMinimal.h"
#include "G01DebugMenuSubWindow.h"
#include "G01DebugSystemLogSubWindowInf.h"
#include "G01DebugSystemLogSubWindow.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UG01DebugSystemLogSubWindow : public UG01DebugMenuSubWindow, public IG01DebugSystemLogSubWindowInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float backGroundAlpha;
    
public:
    UG01DebugSystemLogSubWindow();


    // Fix for true pure virtual functions not being implemented
};

