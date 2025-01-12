#include "G01LipSyncManagerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

UG01LipSyncManagerAccessor::UG01LipSyncManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_LIPSYNC;
}

bool UG01LipSyncManagerAccessor::ReleaseLipGeneral(const TArray<FG01GeneralLipPresetID>& InPresetIDs) {
    return false;
}

bool UG01LipSyncManagerAccessor::ReleaseLip(const TArray<FName>& InVoiceID) {
    return false;
}

bool UG01LipSyncManagerAccessor::LoadLipGeneral(const FG01LipSyncGeneralLoadRequestParam& InParam, const FG01OnLipSyncLoadCompleted& InDelegate) {
    return false;
}

bool UG01LipSyncManagerAccessor::LoadLip(const FG01LipSyncLoadRequestParam& InParam, const FG01OnLipSyncLoadCompleted& InDelegate) {
    return false;
}

bool UG01LipSyncManagerAccessor::FindLipResourceGeneral(FG01LipSyncResource& OutResource, FG01GeneralLipPresetID InPresetID) {
    return false;
}

bool UG01LipSyncManagerAccessor::FindLipResource(FG01LipSyncResource& OutResource, FName InVoiceID) {
    return false;
}

bool UG01LipSyncManagerAccessor::FindDataGeneral(FG01GeneralLipAnimTableRow& OutData, FG01GeneralLipPresetID InPresetID) {
    return false;
}


