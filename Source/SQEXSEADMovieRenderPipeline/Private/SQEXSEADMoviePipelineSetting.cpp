#include "SQEXSEADMoviePipelineSetting.h"

USQEXSEADMoviePipelineSetting::USQEXSEADMoviePipelineSetting() {
    this->CaptureChannels = ESQEXSEADCaptureChannels::Stereo;
    this->CaptureSampleRate = ESQEXSEADMoviePipelineCaptureSampleRate::SMPL_44100;
}


