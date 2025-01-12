#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=WidgetComponent -FallbackName=WidgetComponent
#include "Templates/SubclassOf.h"
#include "Components/WidgetComponent.h"
#include "AppWidgetComponent.generated.h"

class UAppUserWidget;
class UAppWidgetComponent;
class UMaterialInstance;
class UUserWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API UAppWidgetComponent : public UWidgetComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPreInitWidget, UAppWidgetComponent*, InWidgetComponent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPostInitWidget, UAppWidgetComponent*, InWidgetComponent, UUserWidget*, InWidget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCreateMaterialInst, UAppWidgetComponent*, InWidgetComponent);
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPreInitWidget OnPreInitWidget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPostInitWidget OnPostInitWidget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreateMaterialInst OnCreateMaterialInst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAppUserWidget> AppWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MaterialInstanceUniqueID;
    
public:
    UAppWidgetComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreateMaterialInstance(UMaterialInstance* InMatInst);
    
public:
    UFUNCTION(BlueprintCallable)
    UWidgetAnimation* FindAnimation(FName InAnimName);
    
};

