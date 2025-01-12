#include "G01SeqActorControllerBinder.h"
#include "G01CharacterManagerAccessor.h"

AG01SeqActorControllerBinder::AG01SeqActorControllerBinder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CharacterManagerAccessor = CreateDefaultSubobject<UG01CharacterManagerAccessor>(TEXT("CharacterManagerAccessor"));
    this->IsFirstEvaluation = false;
}

void AG01SeqActorControllerBinder::SetIsOverride(bool InValue) {
}

void AG01SeqActorControllerBinder::SetIsAddEmissiveBaseColor(bool InValue) {
}

void AG01SeqActorControllerBinder::SetInnerRange(float InValue) {
}

void AG01SeqActorControllerBinder::SetEmissiveRimReduce(float InValue) {
}

void AG01SeqActorControllerBinder::SetEmissiveRate_Eyes(float InValue) {
}

void AG01SeqActorControllerBinder::SetEmissiveInvalidateMaskRate(float InValue) {
}

void AG01SeqActorControllerBinder::SetEmissiveColor(const FLinearColor& InValue) {
}

void AG01SeqActorControllerBinder::SetDisintegrationRate(float InRate) {
}

void AG01SeqActorControllerBinder::SetCustomizeBaseColor(const FLinearColor& InValue) {
}

void AG01SeqActorControllerBinder::SetAudibleRange(float InValue) {
}

void AG01SeqActorControllerBinder::SetActorBasePositionType(const FVAPartsKey& InKey, bool InIsForcePoseUpdate) {
}

void AG01SeqActorControllerBinder::Cmd_SA_UpdateCharaBasePosition(FVAPartsKey InKey) {
}

void AG01SeqActorControllerBinder::Cmd_RP_UpdateCharaBasePosition(FVAPartsKey InKey) {
}


