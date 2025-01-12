#include "ObjectCharacter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ChildActorComponent -FallbackName=ChildActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESpawnActorCollisionHandlingMethod -FallbackName=ESpawnActorCollisionHandlingMethod
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "AttachPositionComponent.h"
#include "IconPositionComponent.h"
#include "InteractIconPositionComponent.h"
#include "Components/ChildActorComponent.h"
#include "InteractReceiverHelperComponent.h"

AObjectCharacter::AObjectCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
    this->MVisualActorCompo = CreateDefaultSubobject<UChildActorComponent>(TEXT("VisualActorCompo"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->MAttachPositionRoot = CreateDefaultSubobject<UAttachPositionComponent>(TEXT("AttachPositionRoot"));
    this->MReceiverHelper = CreateDefaultSubobject<UInteractReceiverHelperComponent>(TEXT("ReceiveInteractManager"));
    this->MInteractIconPositionComponent = CreateDefaultSubobject<UInteractIconPositionComponent>(TEXT("InteractIconPositionComponent"));
    this->MIconPositionComponent = CreateDefaultSubobject<UIconPositionComponent>(TEXT("IconPositionComponent"));
    this->MIsShowCollisionWhenActiveOnly = true;
    this->IsPositionCorrection = true;
    //this->MVisualActorCompo->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->MVisualActorCompo->SetupAttachment(RootComponent);
    this->MAttachPositionRoot->SetupAttachment(RootComponent);
    this->MInteractIconPositionComponent->SetupAttachment(MAttachPositionRoot);
    this->MIconPositionComponent->SetupAttachment(MAttachPositionRoot);

}

void AObjectCharacter::SetupVisualMeshTransform_Implementation() {
}

void AObjectCharacter::SetLookTargetActor(AActor* InTargetActor) {
}

void AObjectCharacter::OnEventEnd(const FEventResult& InEndResult) {
}

bool AObjectCharacter::IsEditor() const {
    return false;
}

void AObjectCharacter::HitInteractMovement_Implementation() {
}

FString AObjectCharacter::GetActorName() const {
    return TEXT("");
}

FName AObjectCharacter::GetActorFName() const {
    return NAME_None;
}

void AObjectCharacter::EnableTick_Implementation(bool InEnable) {
}

void AObjectCharacter::EnableGravityMode() {
}

void AObjectCharacter::DisableGravityMode() {
}

void AObjectCharacter::AddLogBP(EDebugSystemLogType InLogType, const FString& InMessage, const FString& InHeader, float InDuration, bool InIsPrintToGame) {
}


