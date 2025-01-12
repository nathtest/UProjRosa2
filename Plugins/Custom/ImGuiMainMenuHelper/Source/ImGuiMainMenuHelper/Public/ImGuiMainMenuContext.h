#pragma once
#include "CoreMinimal.h"
#include "ImGuiMainMenuContext.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct FImGuiMainMenuContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* World;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UserData;
    
    IMGUIMAINMENUHELPER_API FImGuiMainMenuContext();
};

