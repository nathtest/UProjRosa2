#include "GameForceFeedbackManagerAccessor.h"
#include "EManagerID.h"

UGameForceFeedbackManagerAccessor::UGameForceFeedbackManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_FORCEFEEDBACK;
}

void UGameForceFeedbackManagerAccessor::UpdateDynamic(const FForceFeedbackPlayDynamicParams& InParams) {
}

void UGameForceFeedbackManagerAccessor::StopDynamic(const FForceFeedbackCommonParams& InParams) {
}

void UGameForceFeedbackManagerAccessor::Stop(const FForceFeedbackCommonParams& InParams) {
}

void UGameForceFeedbackManagerAccessor::PlayDynamic(const FForceFeedbackPlayDynamicParams& InParams) {
}

void UGameForceFeedbackManagerAccessor::Play(const FForceFeedbackPlayParams& InParams) {
}

void UGameForceFeedbackManagerAccessor::AllStop() {
}


