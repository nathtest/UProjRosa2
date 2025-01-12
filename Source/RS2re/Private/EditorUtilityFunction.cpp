#include "EditorUtilityFunction.h"

UEditorUtilityFunction::UEditorUtilityFunction() {
}

void UEditorUtilityFunction::SortStringArray(const TArray<FString> InStringArray, TArray<FString>& OutStringArray) {
}

void UEditorUtilityFunction::SetUseDefaultCollision(UStaticMeshComponent* InStaticMeshComponent, bool InSetting) {
}

void UEditorUtilityFunction::OutputUELog(const FString& inString) {
}

UClass* UEditorUtilityFunction::GetParentBlueprintClass(UObject* Object) {
    return NULL;
}

bool UEditorUtilityFunction::GetLevelViewportCameraParam(FVector& CameraLocation, FRotator& CameraRotation) {
    return false;
}

float UEditorUtilityFunction::GetLevelPerspectiveViewportFOV(int32 InNo) {
    return 0.0f;
}

float UEditorUtilityFunction::GetLevelPerspectiveAspectRatio(int32 InNo) {
    return 0.0f;
}

UClass* UEditorUtilityFunction::GetBlueprintClass(UObject* Object, bool& success) {
    return NULL;
}

UClass* UEditorUtilityFunction::FindClassByString(const FString& ClassName) {
    return NULL;
}


