#include "G01ChangeDitherRateBTTask.h"

UG01ChangeDitherRateBTTask::UG01ChangeDitherRateBTTask() {
    this->NodeName = TEXT("Change DitherRate");
    this->StartRate = 0.00f;
    this->EndRate = 1.00f;
    this->EndTime = 1.00f;
}


