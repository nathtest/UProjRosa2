#pragma once
#include "CoreMinimal.h"
#include "ImGuiSideMenuBarRegisteredInfo.generated.h"

USTRUCT(BlueprintType)
struct IMGUIMAINMENUHELPER_API FImGuiSideMenuBarRegisteredInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UserData;
    
    FImGuiSideMenuBarRegisteredInfo();
};

