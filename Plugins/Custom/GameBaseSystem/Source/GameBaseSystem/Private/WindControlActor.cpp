#include "WindControlActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "WindManagerAccessor.h"

AWindControlActor::AWindControlActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultRootComponent"));
    this->WindManagerAccessor = CreateDefaultSubobject<UWindManagerAccessor>(TEXT("WindManagerAccessor"));
    this->CommonSettings = NULL;
    this->Strength = 0.10f;
    this->Speed = 0.10f;
    this->MinGustAmount = 0.10f;
    this->MaxGustAmount = 0.20f;
}

void AWindControlActor::UnregisterWindController() {
}

void AWindControlActor::RegisterWindController() {
}







bool AWindControlActor::IsOverlappng() const {
    return false;
}

float AWindControlActor::GetStrength() const {
    return 0.0f;
}

float AWindControlActor::GetSpeed_Implementation() const {
    return 0.0f;
}

float AWindControlActor::GetMinGustAmount_Implementation() const {
    return 0.0f;
}

float AWindControlActor::GetMaxGustAmount_Implementation() const {
    return 0.0f;
}

FVector AWindControlActor::GetDirection_Implementation() const {
    return FVector{};
}

void AWindControlActor::CallEndOverlap(UPrimitiveComponent* InOverlappedComponent, AActor* InOtherActor, UPrimitiveComponent* InOtherComp, int32 InOtherBodyIndex) {
}

void AWindControlActor::CallBeginOverlap(UPrimitiveComponent* InOverlappedComponent, AActor* InOtherActor, UPrimitiveComponent* InOtherComp, int32 InOtherBodyIndex, bool InIsFromSweep, const FHitResult& InSweepResult) {
}


