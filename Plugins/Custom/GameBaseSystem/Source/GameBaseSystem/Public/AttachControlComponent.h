#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "EVisualActorAttachCategoryEnum.h"
#include "VisualActorAttachInfoList.h"
#include "AttachControlComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API UAttachControlComponent : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MOwnerSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FVisualActorAttachInfoList> MAttachInfoList;
    
public:
    UAttachControlComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVisibilityByDetailName(FName InDetaleName, bool InIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibilityByCategory(EVisualActorAttachCategoryEnum InCategory, bool InIsVisible);
    
    UFUNCTION(BlueprintCallable)
    TArray<USceneComponent*> GetControlSceneCompByDetail(FName InDetailName, bool InIsAttached);
    
    UFUNCTION(BlueprintCallable)
    TArray<USceneComponent*> GetControlSceneCompByCategory(EVisualActorAttachCategoryEnum InCategory, bool InIsAttached);
    
    UFUNCTION(BlueprintCallable)
    bool DetachByDetailName(FName InDetailName, bool InIsVisible);
    
    UFUNCTION(BlueprintCallable)
    bool DetachByCategory(EVisualActorAttachCategoryEnum InAttachCategory, bool InIsVisible);
    
    UFUNCTION(BlueprintCallable)
    bool AttachByDetailName(FName InDetailName, bool InIsVisible);
    
    UFUNCTION(BlueprintCallable)
    bool AttachByCategory(EVisualActorAttachCategoryEnum InAttachCategory, bool InIsVisible);
    
    UFUNCTION(BlueprintCallable)
    bool Attach(USceneComponent* InAttachObject, FName InSocket, EVisualActorAttachCategoryEnum InAttachCategory, FName InDetailName, bool InIsVisible);
    
};

