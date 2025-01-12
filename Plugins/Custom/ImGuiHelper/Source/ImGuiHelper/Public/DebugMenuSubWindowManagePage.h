#pragma once
#include "CoreMinimal.h"
#include "DebugMenuSubWindowBase.h"
#include "DebugMenuSubWindowManagePage.generated.h"

UCLASS(Blueprintable)
class UDebugMenuSubWindowManagePage : public UDebugMenuSubWindowBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDebugMenuSubWindowBase*> SubWindowList;
    
public:
    UDebugMenuSubWindowManagePage();

};

