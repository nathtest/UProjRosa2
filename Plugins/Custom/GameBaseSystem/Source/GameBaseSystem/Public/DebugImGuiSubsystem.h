#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "G01DebugSubWindowKeyStruct.h"
#include "G01DebugSubWindowTableRowStruct.h"
#include "G01DebugTabPageKeyStruct.h"
#include "G01DebugTabPageTableRowStruct.h"
#include "Templates/SubclassOf.h"
#include "DebugImGuiSubsystem.generated.h"

class UG01DebugBPImGui;
class UG01DebugMenuSubWindow;
class UObject;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UDebugImGuiSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UG01DebugBPImGui* DebugImGuiBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FG01DebugSubWindowKeyStruct, FG01DebugSubWindowTableRowStruct> MapSubWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FG01DebugTabPageKeyStruct, FG01DebugTabPageTableRowStruct> MapTabPage;
    
public:
    UDebugImGuiSubsystem();

    UFUNCTION(BlueprintCallable)
    bool SetupTabPage();
    
    UFUNCTION(BlueprintCallable)
    void Setup(bool& OutIsSuccess);
    
    UFUNCTION(BlueprintCallable)
    FName GetTabPageName(UClass* InClass);
    
    UFUNCTION(BlueprintCallable)
    UObject* GetTabPage(FG01DebugTabPageKeyStruct InTabPageKey);
    
    UFUNCTION(BlueprintCallable)
    TArray<UObject*> GetSubWindowList(FG01DebugSubWindowKeyStruct InSubWindowKey);
    
    UFUNCTION(BlueprintCallable)
    FName GetSubWindoweName(UClass* InClass);
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<UG01DebugMenuSubWindow> GetSubWindowClass(FG01DebugSubWindowKeyStruct InSubWindowKey);
    
    UFUNCTION(BlueprintCallable)
    UObject* GetSubWindow(FG01DebugSubWindowKeyStruct InSubWindowKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UG01DebugBPImGui* GetDebugBPImGui();
    
};

