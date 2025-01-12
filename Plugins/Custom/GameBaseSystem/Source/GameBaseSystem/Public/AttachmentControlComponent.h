#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "VisualActorAttachmentComponentStruct.h"
#include "VisualActorAttachmentStruct.h"
#include "VisualActorDefaultAttachmentStruct.h"
#include "AttachmentControlComponent.generated.h"

class AVisualActor;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API UAttachmentControlComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MainComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FVisualActorAttachmentComponentStruct> AttachmentComponentList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FVisualActorAttachmentStruct> AttachmentVisualActorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FVisualActorDefaultAttachmentStruct> DefaultAttachmentList;
    
public:
    UAttachmentControlComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Setup(USkeletalMeshComponent* InSkeletalMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetAttachmentVisible(FName InKeyName, bool InIsVisible);
    
    UFUNCTION(BlueprintCallable)
    AVisualActor* GetAttachmentVisualActor(FName InKeyName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AVisualActor*> GetAllAttachmentVisualActor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void FindAttachmentVisualActorData(bool& OutIsFound, FVisualActorAttachmentStruct& OutData, FName InKeyName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void FindAttachmentDefaultData(bool& OutIsFound, FVisualActorDefaultAttachmentStruct& OutData, FName InKeyName) const;
    
    UFUNCTION(BlueprintCallable)
    AVisualActor* DetachAttachment(FName InKeyName);
    
    UFUNCTION(BlueprintCallable)
    void AttachAttachment(FName InKeyName, AVisualActor* InVisualActor, FName InSocketName, FName InTagName, bool InIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void AddDefaultAttachment(FName InKeyName, FVisualActorDefaultAttachmentStruct InData);
    
};

