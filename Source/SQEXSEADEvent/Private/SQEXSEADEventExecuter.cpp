#include "SQEXSEADEventExecuter.h"

USQEXSEADEventExecuter::USQEXSEADEventExecuter() {
    this->bIsRunning = false;
    this->BeginEventCallback = NULL;
    this->EndEventCallback = NULL;
}


