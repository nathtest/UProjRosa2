#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ERelativeTransformSpace -FallbackName=ERelativeTransformSpace
#include "AppActor.h"
#include "VAPartsKey.h"
#include "VAPhysicsParams.h"
#include "VASkeletalPartsInfo.h"
#include "VisualActorID.h"
#include "VisualActorInterface.h"
#include "VisualActorUseTypeStruct.h"
#include "VisualActor.generated.h"

class UAnimInstance;
class UArrowComponent;
class UAttachmentControlComponent;
class UDataTable;
class USkeletalMeshComponent;
class UVisualActorParamDataAsset;
class UVisualActorParamDataAssetBase;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AVisualActor : public AAppActor, public IVisualActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* MForwardArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MSkeletalMeshCompo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAttachmentControlComponent* AttachmentControlComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVisualActorID MVisualActorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FigureID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FVAPartsKey, FVASkeletalPartsInfo> SkeletalPartsInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVAPhysicsParams MPhysicsParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVisualActorParamDataAsset* MVisualActorParamAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FVisualActorUseTypeStruct, TSoftObjectPtr<UVisualActorParamDataAssetBase>> UseTypeDataAssetSoftObjectList;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* VisualActorPartsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUseReceivesDecal;
    
public:
    AVisualActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateTemplateProperty();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetVisualActorParamAsset(UVisualActorParamDataAsset* InAsset);
    
    UFUNCTION(BlueprintCallable)
    void SetUseTypeDataAssetSoftObject(FVisualActorUseTypeStruct InUseType, TSoftObjectPtr<UVisualActorParamDataAssetBase> InSoftObject);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetPhysicsMasterAlpha(float InAlpha);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetNameJA(FName InName);
    
    UFUNCTION(BlueprintCallable)
    void SetFigureID(FName InFigureID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEnableTick(bool InIsEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultVisualActorID(const FVisualActorID& InVisualActorID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVisualActorParamDataAsset* GetVisualActorParamAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVisualActorID GetVisualActorID() const;
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UVisualActorParamDataAssetBase> GetUseTypeDataAssetSoftObject(FVisualActorUseTypeStruct InUseType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetRootSkeletalMeshComponent() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPhysicsMasterAlpha() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void GetPartsTransform(FVAPartsKey InKey, TEnumAsByte<ERelativeTransformSpace> InSpace, bool& ReIsValid, FTransform& ReTransform);
    
    UFUNCTION(BlueprintCallable)
    void GetPartsInfo(FVAPartsKey InKey, bool& ReIsValid, FVASkeletalPartsInfo& RePartsInfo);
    
    UFUNCTION(BlueprintCallable)
    FName GetNameJA();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetModularRoot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetFigureID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimInstance* GetAnimInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ConstructionPreEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ConstructionEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ConstructionBegin();
    

    // Fix for true pure virtual functions not being implemented
};

