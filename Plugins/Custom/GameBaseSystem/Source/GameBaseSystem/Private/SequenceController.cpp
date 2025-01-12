#include "SequenceController.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneBindingOverrides -FallbackName=MovieSceneBindingOverrides
#include "CustomLevelSequenceInstanceData.h"
#include "MovieSceneBindingOverrides.h"
#include "Templates/SubclassOf.h"


ASequenceController::ASequenceController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BoostFactor = 1.00f;
    this->OverrideLocation = false;
    this->MSequenceResourceLoaderClass = NULL;
    this->MSequenceResourceLoader = NULL;
    this->MRequiredControllerCreateInfoTable = NULL;
    this->MCustomLevelSequencePlayer = NULL;
    this->MPlayLevelSequence = NULL;
    this->MBindingOverrides = CreateDefaultSubobject<UMovieSceneBindingOverrides>(TEXT("BindingOverrides"));
    this->MCustomInstanceData = CreateDefaultSubobject<UCustomLevelSequenceInstanceData>(TEXT("InstanceData"));
    this->bIsReserveSkipEnd = false;
    this->ActiveTrackRowIndex = 0;
    this->PlaybackOvertimeCounter = 0.00f;
    this->TickState = ESeqControllerTickState::None;
    this->EndDelayTime = 0.00f;
    this->EndDelayElapsedTime = 0.00f;
    this->FrameJumpAnimBlendTime = 0.00f;
    this->IsForceEnd = false;
    this->IsEnd = false;
    this->SequenceResources = NULL;
    this->IsFirstUpdate = true;
    this->EndReason = ESequenceEndReason::Unknown;
}

UObject* ASequenceController::UnregisterCacheObject(FName InKey) {
    return NULL;
}

void ASequenceController::SetPlaybackSettings(const FMovieSceneSequencePlaybackSettings& InPlaybackSettings) {
}

void ASequenceController::ResetSequenceController() {
}

bool ASequenceController::RegisterCacheObject(FName InKey, UObject* InObject) {
    return false;
}

void ASequenceController::OnUnregisterTickManager_Implementation() {
}

void ASequenceController::OnSequenceResourceLoadComplete(ULevelSequence* InLoadedSequence) {
}

void ASequenceController::OnRegisterTickManager_Implementation() {
}

void ASequenceController::OnPrePlaySequencer_Implementation() {
}

void ASequenceController::OnPostPlaySequencer_Implementation() {
}

void ASequenceController::OnPlaySequencer() {
}

void ASequenceController::OnPauseSequencer() {
}

void ASequenceController::OnInvokeGeneralTriggerEvent_Implementation(const FSeqGeneralEventParam& InParam) {
}

void ASequenceController::OnInvokeGeneralTickRepeaterEvent_Implementation(const FSeqGeneralEventParam& InParam) {
}

void ASequenceController::OnInvokeGeneralEndRepeaterEvent_Implementation(const FSeqGeneralEventParam& InParam) {
}

void ASequenceController::OnInvokeGeneralBeginRepeaterEvent_Implementation(const FSeqGeneralEventParam& InParam) {
}

void ASequenceController::OnFinishedSequencer() {
}

void ASequenceController::OnDestroyedSpawnActor(AActor* InActor) {
}

void ASequenceController::OnAvailableSequenceController_Implementation() {
}

bool ASequenceController::IsSequenceFrameUpdate() const {
    return false;
}

bool ASequenceController::IsEndDelay() const {
    return false;
}

bool ASequenceController::IsDisableCameraCut() const {
    return false;
}

bool ASequenceController::HasAnyTrackGeneralTriggerEvent(FName InEventKey) const {
    return false;
}

bool ASequenceController::HasAnyTrackGeneralRepeaterEvent(FName InEventKey) const {
    return false;
}

FSeqTypeView ASequenceController::GetSequencerType() const {
    return FSeqTypeView{};
}

FSeqCategoryView ASequenceController::GetSequencerCategory() const {
    return FSeqCategoryView{};
}

FName ASequenceController::GetSequenceID() const {
    return NAME_None;
}

ESequenceEndReason ASequenceController::GetSequenceEndReason() const {
    return ESequenceEndReason::Unknown;
}

float ASequenceController::GetSequenceDuration() const {
    return 0.0f;
}

FMovieSceneSequencePlaybackSettings ASequenceController::GetPlaybackSettings() const {
    return FMovieSceneSequencePlaybackSettings{};
}

TSoftObjectPtr<ULevelSequence> ASequenceController::GetLevelSequencePath() const {
    return NULL;
}

float ASequenceController::GetFrameJumpAnimBlendTime() const {
    return 0.0f;
}

int32 ASequenceController::GetCameraPatternIndex_Implementation(int32 InPatternMaxNum) {
    return 0;
}

TArray<FSeqActionControllerArray> ASequenceController::FindDerivedControllerArray(UClass* InBaseClass) const {
    return TArray<FSeqActionControllerArray>();
}

UObject* ASequenceController::FindCacheObject(FName InKey) {
    return NULL;
}

void ASequenceController::Cmd_SA_UnregisterPlayRateByMarkedFrame(const FSeqMarkedFrameRange& InRange) {
}

void ASequenceController::Cmd_SA_UnregisterGeneralTriggerEventByEventKey(FName InEventKey) {
}

void ASequenceController::Cmd_SA_UnregisterGeneralTriggerEvent(int32 InFrameNumber, const FSeqGeneralEventParam& InParam) {
}

void ASequenceController::Cmd_SA_UnregisterGeneralRepeaterEventByEventKey(FName InEventKey) {
}

void ASequenceController::Cmd_SA_UnregisterGeneralRepeaterEvent(int32 InBeginFrame, int32 InEndFrame, const FSeqGeneralEventParam& InParam) {
}

void ASequenceController::Cmd_SA_SetTransformOriginActor(AActor* InActor) {
}

void ASequenceController::Cmd_SA_SetTransformOrigin(const FTransform& InTransform) {
}

void ASequenceController::Cmd_SA_SetRestorePosition(FFrameNumber InRestorePosition) {
}

void ASequenceController::Cmd_SA_SetPlaybackRangeOffset(int32 InLowerFrameOffset, int32 InUpperFrameOffset) {
}

void ASequenceController::Cmd_SA_SetPlaybackRange(const FInt32Range& InFrameRange) {
}

void ASequenceController::Cmd_SA_SetOverrideTransformForSlotActor(int32 InSlotIndex, const FTransform& InTransform) {
}

void ASequenceController::Cmd_SA_SetEnableOverrideTransformForSlotActor(int32 InSlotIndex, ESeqTransformControlType InLocationType, ESeqTransformControlType InRotationType, ESeqTransformControlType InScaleType) {
}

void ASequenceController::Cmd_SA_SetEnableCameraCut(bool InIsEnable) {
}

void ASequenceController::Cmd_SA_SetDisableSequenceActorOffset(bool InIsDisable) {
}

void ASequenceController::Cmd_SA_SetCustomWorkFlag(FName InCustomFlagName, bool InValue) {
}

void ASequenceController::Cmd_SA_SetCameraBinder(FSeqCameraBinderArgument InBindArg) {
}

void ASequenceController::Cmd_SA_SetActorSlotAll(const TArray<FSeqActorSlotArg>& InSlotArgs) {
}

void ASequenceController::Cmd_SA_SetActorSlot(FSeqActorSlotArg InSlotArg) {
}

void ASequenceController::Cmd_SA_SequencerJumpToSeconds(float InSeconds, EUpdatePositionMethod InUpdateMethod, float InJumpAnimBlendTime) {
}

void ASequenceController::Cmd_SA_SequencerJumpToFrame(const FFrameTime& InFrame, EUpdatePositionMethod InUpdateMethod, float InJumpAnimBlendTime) {
}

void ASequenceController::Cmd_SA_RestoreSequence() {
}

void ASequenceController::Cmd_SA_ResetRestorePosition() {
}

void ASequenceController::Cmd_SA_ResetPlaybackRange() {
}

void ASequenceController::Cmd_SA_RequestEndSequencer() {
}

void ASequenceController::Cmd_SA_RemoveUserObject(UObject* InUser) {
}

void ASequenceController::Cmd_SA_RegisterPlayRateByMarkedFrame(const FSeqMarkedFramePlayRate& InParam) {
}

void ASequenceController::Cmd_SA_RegisterGeneralTriggerEvent(int32 InFrameNumber, const FSeqGeneralEventParam& InParam, bool InIsUniqueKey) {
}

void ASequenceController::Cmd_SA_RegisterGeneralRepeaterEvent(int32 InBeginFrame, int32 InEndFrame, const FSeqGeneralEventParam& InParam, bool InIsUniqueKey) {
}

void ASequenceController::Cmd_SA_PlaySequencer(int32 InPlayCount) {
}

void ASequenceController::Cmd_SA_PauseSequencer(bool InIsPauseCharaAnimation) {
}

bool ASequenceController::Cmd_SA_IsWorkingAnyActionController() const {
    return false;
}

bool ASequenceController::Cmd_SA_IsUsePlaybackOvertime() const {
    return false;
}

bool ASequenceController::Cmd_SA_IsPlaying() const {
    return false;
}

bool ASequenceController::Cmd_SA_IsPaused() const {
    return false;
}

bool ASequenceController::Cmd_SA_IsFrameJumping() const {
    return false;
}

bool ASequenceController::Cmd_SA_IsEnd() const {
    return false;
}

bool ASequenceController::Cmd_SA_IsEnableCameraCut() const {
    return false;
}

bool ASequenceController::Cmd_SA_IsDuringPlaybackOvertime() const {
    return false;
}

bool ASequenceController::Cmd_SA_IsAvailable() const {
    return false;
}

bool ASequenceController::Cmd_SA_IsAnyCustomFlagWorking() const {
    return false;
}

void ASequenceController::Cmd_SA_GetSlotActorTransform(int32 InSlotIndex, ESeqTrackSampleType InType, ASeqActorSlotControllerBinder*& OutSlotBinderTemplate, FTransform& OutTransform, bool InIsAddOrigin) {
}

FFrameTime ASequenceController::Cmd_SA_GetPreUpdateTime() const {
    return FFrameTime{};
}

int32 ASequenceController::Cmd_SA_GetPlayCount() const {
    return 0;
}

void ASequenceController::Cmd_SA_GetOverlappingActors(TArray<AActor*>& OutActors, TSubclassOf<AActor> InClassFilter) {
}

FTransform ASequenceController::Cmd_SA_GetOriginTransform() const {
    return FTransform{};
}

AActor* ASequenceController::Cmd_SA_GetOriginActor() const {
    return NULL;
}

FFrameTime ASequenceController::Cmd_SA_GetLastUpdateTime() const {
    return FFrameTime{};
}

void ASequenceController::Cmd_SA_GetFullPlaybackRange(FInt32Range& OutFrameRange) const {
}

bool ASequenceController::Cmd_SA_GetDisableSequenceActorOffset() const {
    return false;
}

bool ASequenceController::Cmd_SA_GetCustomWorkFlag(FName InCustomFlagName) const {
    return false;
}

void ASequenceController::Cmd_SA_GetBinderTransform(FName InBinderID, ESeqTrackSampleType InType, TArray<FTransform>& OutTransforms, bool InIsAddOrigin) {
}

void ASequenceController::Cmd_SA_GetActualPlaybackRange(FInt32Range& OutFrameRange) const {
}

void ASequenceController::Cmd_SA_GetActiveCameraTransform(ESeqTrackSampleType InType, ASequenceCameraControllerBinder*& OutCameraBinderTemplate, FTransform& OutTransform, bool InIsAddOrigin) {
}

AActor* ASequenceController::Cmd_SA_GetActiveCameraActor() const {
    return NULL;
}

void ASequenceController::Cmd_SA_FindSlotActorOverrideTransform(int32 InSlotIndex, bool OutIsFound, FSeqBinderTransformOverrideParam& OutTransformOverrideParam) {
}

TArray<FSeqGeneralTriggerRegisterParam> ASequenceController::Cmd_SA_FindGeneralTriggerParams(const FSeqGeneralEventParam& InParam) const {
    return TArray<FSeqGeneralTriggerRegisterParam>();
}

TArray<FSeqGeneralRepeaterRegisterParam> ASequenceController::Cmd_SA_FindGeneralRepeaterParams(const FSeqGeneralEventParam& InParam) const {
    return TArray<FSeqGeneralRepeaterRegisterParam>();
}

void ASequenceController::Cmd_SA_ExecuteSkip(ESeqSkipType InSkipType) {
}

void ASequenceController::Cmd_SA_EndSequencer(float InDelaySeconds) {
}

void ASequenceController::Cmd_SA_AddUserObject(UObject* InUser) {
}

void ASequenceController::Cmd_SA_AddPlaybackRangeOffset(int32 InLowerFrameOffset, int32 InUpperFrameOffset) {
}

bool ASequenceController::CheckTickState(ESeqControllerTickState InState) const {
    return false;
}

void ASequenceController::TickFromSequenceTickManager(float DeltaTime)
{
    // Provide functionality here (or leave empty if not required)
}

bool ASequenceController::RetrieveBindingOverrides(const FGuid& ObjectBinding, FMovieSceneSequenceID SequenceID, TArray<UObject*, TInlineAllocator<1, FDefaultAllocator>>& OutObjects) const
{
    // Provide functionality here (or return a default value)
    return false;
}

UObject* ASequenceController::GetInstanceData() const
{
    // Provide functionality here (or return nullptr if not required)
    return nullptr;
}
