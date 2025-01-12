#include "DebugSettingFileSubsystem.h"
#include "Templates/SubclassOf.h"

UDebugSettingFileSubsystem::UDebugSettingFileSubsystem() {
}

void UDebugSettingFileSubsystem::Setup(const FString& InMyDefaultSettingFileName, const FString& InSettingPath) {
}

void UDebugSettingFileSubsystem::SetSettingValue(FG01DebugSettingCSVKeyStruct InKey, const FString& InValue) {
}

void UDebugSettingFileSubsystem::SaveSettingFile(const FString& InFilename) {
}

void UDebugSettingFileSubsystem::RestoreLoadSettingFilePath() {
}

void UDebugSettingFileSubsystem::LoadSettingFile(const FString& InFilename) {
}

int32 UDebugSettingFileSubsystem::GetSettingValueInt(FG01DebugSettingCSVKeyStruct InKey, bool& OutExist) {
    return 0;
}

float UDebugSettingFileSubsystem::GetSettingValueFloat(FG01DebugSettingCSVKeyStruct InKey, bool& OutExist) {
    return 0.0f;
}

bool UDebugSettingFileSubsystem::GetSettingValueBool(FG01DebugSettingCSVKeyStruct InKey, bool& OutExist) {
    return false;
}

FString UDebugSettingFileSubsystem::GetSettingValue(FG01DebugSettingCSVKeyStruct InKey, bool& OutExist) {
    return TEXT("");
}

FString UDebugSettingFileSubsystem::GetCurrentSettingFileName() {
    return TEXT("");
}

TMap<FG01DebugSettingCSVKeyStruct, FString> UDebugSettingFileSubsystem::GetAllSettingValue() {
    return TMap<FG01DebugSettingCSVKeyStruct, FString>();
}

void UDebugSettingFileSubsystem::GetAllSettingFileName(TArray<FString>& OutAllName) {
}

UG01DebugVariableBase* UDebugSettingFileSubsystem::CreateVariable(TSubclassOf<UG01DebugVariableBase> InClassType, FG01DebugSettingCSVKeyStruct InKey) {
    return NULL;
}

void UDebugSettingFileSubsystem::CreateSettingFile(const FString& InFilename) {
}


