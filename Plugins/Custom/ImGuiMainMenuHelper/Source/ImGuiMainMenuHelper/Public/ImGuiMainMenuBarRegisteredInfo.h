#pragma once
#include "CoreMinimal.h"
#include "ImGuiMainMenuBarRegisteredInfo.generated.h"

USTRUCT(BlueprintType)
struct IMGUIMAINMENUHELPER_API FImGuiMainMenuBarRegisteredInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> nestList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UserData;
    
    FImGuiMainMenuBarRegisteredInfo();
};

