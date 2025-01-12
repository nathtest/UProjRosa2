#include "G01GimmickObjectBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
#include "G01RoomManagerAccessor.h"

AG01GimmickObjectBase::AG01GimmickObjectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MListenBattleEvent = false;
    this->IsFollowMoveIcon = false;
    this->MInteractDetectiveCollision = CreateDefaultSubobject<USphereComponent>(TEXT("InteractDetectiveCollision"));
    this->MRoomManagerAccessor = CreateDefaultSubobject<UG01RoomManagerAccessor>(TEXT("RoomManagerAccessor"));
    this->MInteractDetectiveCollision->SetupAttachment(RootComponent);
}

void AG01GimmickObjectBase::SetIconTrakingEnabled(bool InIsTracking) {
}

void AG01GimmickObjectBase::PlayerInteractDeactivate(bool InIsSwitch) {
}

void AG01GimmickObjectBase::PlayerInteractActivate(EPlayerReactionType InReactionType) {
}

void AG01GimmickObjectBase::OnStartBattleEvent_Implementation() {
}

void AG01GimmickObjectBase::OnEndBattleEvent_Implementation(const FG01BattleEndNotifyData& InBattleEndNotifyData) {
}

void AG01GimmickObjectBase::NotifyOnEndInteractEvent() {
}

void AG01GimmickObjectBase::NotifyOnBeginInteractEvent() {
}

void AG01GimmickObjectBase::IsReceiveInteractEnable_Implementation(bool& OutEnableInteract) {
}

bool AG01GimmickObjectBase::IsListenBattleEvent() {
    return false;
}

bool AG01GimmickObjectBase::IsEnableUpdateGimmickEnable_Implementation() {
    return false;
}


void AG01GimmickObjectBase::GetIconTrackingPosition(const FVector& InPlayerPos, float InInteractObjectWidth, FVector& OutPosition) {
}

EG01GimmickIconTypeEnum AG01GimmickObjectBase::GetGimmickIconType_Implementation() {
    return EG01GimmickIconTypeEnum::NONE;
}

void AG01GimmickObjectBase::EndPause_Implementation() {
}

void AG01GimmickObjectBase::CallEndOverlap(UPrimitiveComponent* InOverlappedComponent, AActor* InOtherActor, UPrimitiveComponent* InOtherComponent, int32 InOtherBodyIndex) {
}

void AG01GimmickObjectBase::CallBeginOverlap(UPrimitiveComponent* InOverlappedComponent, AActor* InOtherActor, UPrimitiveComponent* InOtherComponent, int32 InOtherBodyIndex, bool InIsFromSweep, const FHitResult& InSweepResult) {
}

void AG01GimmickObjectBase::BeginPause_Implementation() {
}


