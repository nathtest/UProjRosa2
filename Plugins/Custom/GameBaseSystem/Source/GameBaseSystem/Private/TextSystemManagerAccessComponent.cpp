#include "TextSystemManagerAccessComponent.h"
#include "EManagerID.h"

UTextSystemManagerAccessComponent::UTextSystemManagerAccessComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_TEXTSYSTEM;
}

void UTextSystemManagerAccessComponent::FindText(FName InTextID, bool& ReIsFound, FTextFindResult& ReFindResult) const {
}


