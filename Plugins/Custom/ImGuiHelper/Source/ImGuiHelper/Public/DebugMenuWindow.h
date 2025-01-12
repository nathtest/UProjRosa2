#pragma once
#include "CoreMinimal.h"
#include "DebugMenuPageBase.h"
#include "DebugMenuWindow.generated.h"

class UDebugMenuSubWindowManagePage;
class UDebugMenuTabBase;

UCLASS(Blueprintable)
class UDebugMenuWindow : public UDebugMenuPageBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDebugMenuTabBase*> TabList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebugMenuSubWindowManagePage* SubWindowManage;
    
public:
    UDebugMenuWindow();

    UFUNCTION(BlueprintCallable)
    void SetDebugMenuDraw(bool bInShow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugMenuDraw() const;
    
};

