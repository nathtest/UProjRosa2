#pragma once
#include "CoreMinimal.h"
#include "AppGameInstanceSubsystem.h"
#include "EWidgetType.h"
#include "WidgetDrawDataInfo.h"
#include "WidgetTypeDataInfo.h"
#include "WidgetSubsystem.generated.h"

class UDataTable;
class UGameViewWidget;
class UMasterViewWidget;
class UWidgetSubsystemHelper;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UWidgetSubsystem : public UAppGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetSubsystemHelper* HelperObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMasterViewWidget* MasterWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWidgetType, FWidgetTypeDataInfo> WidgetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWidgetType, FWidgetTypeDataInfo> PreWidgetList;
    
public:
    UWidgetSubsystem();

    UFUNCTION(BlueprintCallable)
    void RemoveMasterView(UGameViewWidget* InWidget);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseWidget(EWidgetType InWidgetType);
    
    UFUNCTION(BlueprintCallable)
    void RegisterWidget(EWidgetType InWidgetType, FWidgetTypeDataInfo InWidgetTypeData);
    
    UFUNCTION(BlueprintCallable)
    bool IsCreateWidget(EWidgetType InWidgetType);
    
    UFUNCTION(BlueprintCallable)
    bool IsCreatePreWidget(EWidgetType InWidgetType);
    
    UFUNCTION(BlueprintCallable)
    TArray<UGameViewWidget*> GetWidget(EWidgetType InWidgetType);
    
    UFUNCTION(BlueprintCallable)
    TArray<UGameViewWidget*> GetPreWidget(EWidgetType InWidgetType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMasterViewWidget* GetMasterViewWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetCreateDataTable() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeAddToViewPort(int32 InZOrder);
    
    UFUNCTION(BlueprintCallable)
    void ChangeAddToPlayerScreen(bool SetLocalPlayer, int32 InZOrder);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AllWidgetClear();
    
    UFUNCTION(BlueprintCallable)
    void AllPreWidgetClear();
    
public:
    UFUNCTION(BlueprintCallable)
    void AddMasterView(UGameViewWidget* InWidget, FWidgetDrawDataInfo InDrawData);
    
};

