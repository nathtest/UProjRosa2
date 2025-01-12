#include "VisualActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "AttachmentControlComponent.h"

AVisualActor::AVisualActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultRootCompo"));
    this->MForwardArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("ForwardArrow"));
    this->MSkeletalMeshCompo = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshCompo"));
    this->AttachmentControlComponent = CreateDefaultSubobject<UAttachmentControlComponent>(TEXT("AttachmentControl"));
    this->MVisualActorParamAsset = NULL;
    this->VisualActorPartsTable = NULL;
    this->IsUseReceivesDecal = false;
    //this->MForwardArrow->SetupAttachment(RootComponent);
    this->MSkeletalMeshCompo->SetupAttachment(RootComponent);
    this->AttachmentControlComponent->SetupAttachment(RootComponent);
}

void AVisualActor::UpdateTemplateProperty() {
}

void AVisualActor::SetVisualActorParamAsset(UVisualActorParamDataAsset* InAsset) {
}

void AVisualActor::SetUseTypeDataAssetSoftObject(FVisualActorUseTypeStruct InUseType, TSoftObjectPtr<UVisualActorParamDataAssetBase> InSoftObject) {
}

void AVisualActor::SetPhysicsMasterAlpha(float InAlpha) {
}

void AVisualActor::SetNameJA(FName InName) {
}

void AVisualActor::SetFigureID(FName InFigureID) {
}

void AVisualActor::SetEnableTick_Implementation(bool InIsEnable) {
}

void AVisualActor::SetDefaultVisualActorID(const FVisualActorID& InVisualActorID) {
}

UVisualActorParamDataAsset* AVisualActor::GetVisualActorParamAsset() const {
    return NULL;
}

FVisualActorID AVisualActor::GetVisualActorID() const {
    return FVisualActorID{};
}

TSoftObjectPtr<UVisualActorParamDataAssetBase> AVisualActor::GetUseTypeDataAssetSoftObject(FVisualActorUseTypeStruct InUseType) {
    return NULL;
}

USkeletalMeshComponent* AVisualActor::GetRootSkeletalMeshComponent() const {
    return NULL;
}

float AVisualActor::GetPhysicsMasterAlpha() const {
    return 0.0f;
}

void AVisualActor::GetPartsTransform(FVAPartsKey InKey, TEnumAsByte<ERelativeTransformSpace> InSpace, bool& ReIsValid, FTransform& ReTransform) {
}

void AVisualActor::GetPartsInfo(FVAPartsKey InKey, bool& ReIsValid, FVASkeletalPartsInfo& RePartsInfo) {
}

FName AVisualActor::GetNameJA() {
    return NAME_None;
}

USkeletalMeshComponent* AVisualActor::GetModularRoot() const {
    return NULL;
}

FName AVisualActor::GetFigureID() const {
    return NAME_None;
}

UAnimInstance* AVisualActor::GetAnimInstance() const {
    return NULL;
}





