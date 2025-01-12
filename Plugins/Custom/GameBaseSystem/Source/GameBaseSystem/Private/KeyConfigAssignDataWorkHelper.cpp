#include "KeyConfigAssignDataWorkHelper.h"

UKeyConfigAssignDataWorkHelper::UKeyConfigAssignDataWorkHelper() {
}

void UKeyConfigAssignDataWorkHelper::Func_UpdateMapping(bool& OutIsChanged, FKeyConfigAssignDataWork& InWork, FName InAssignID, int32 InSlotIndex, const FKey& InKey, const FKeyConfigOperationCategory& InCategory, int32 InUpdateOptions) {
}

bool UKeyConfigAssignDataWorkHelper::Func_IsValidWorkData(const FKeyConfigAssignDataWork& InWork) {
    return false;
}

TArray<FKey> UKeyConfigAssignDataWorkHelper::Func_GetKeys(const FKeyInputMappingData& InMappingData, bool InIsIncludeAction, bool InIsIncludeAxis) {
    return TArray<FKey>();
}

void UKeyConfigAssignDataWorkHelper::Func_FindMappingKey(const FKeyConfigAssignDataWork& InWork, int32 InGroup, const FKeyConfigOperationCategory& InCategory, int32 InIndexInCategory, int32 InSlotIndex, bool& OutIsFound, FKey& OutKey) {
}

void UKeyConfigAssignDataWorkHelper::Func_FindMappingData(const FKeyConfigAssignDataWork& InWork, int32 InAssignIndex, bool& OutIsFound, int32& OutGroup, FKeyConfigOperationCategory& OutCategory, int32& OutIndexInCategory, FKeyInputMappingData& OutData) {
}

void UKeyConfigAssignDataWorkHelper::Func_FindDependenceKeys(const FKeyConfigAssignDataWork& InWork, const FKeyConfigOperationCategory& InCategory, TArray<FKey>& OutKeys) {
}

void UKeyConfigAssignDataWorkHelper::Func_ErrorCheckByGroup(const FKeyConfigAssignDataWork& InWork, int32 InGroup, int32 InCheckErrors, bool& OutIsError, TArray<FKeyConfigErrorCheckResult>& OutResult) {
}

void UKeyConfigAssignDataWorkHelper::Func_ErrorCheck(const FKeyConfigAssignDataWork& InWork, int32 InCheckErrors, bool& OutIsError, TArray<FKeyConfigErrorCheckResult>& OutResult) {
}

void UKeyConfigAssignDataWorkHelper::Func_ClearMapping(FKeyConfigAssignDataWork& InWork, FName InAssignID, int32 InSlotIndex, bool& OutIsChanged, TArray<FKeyInputMappingData>& OutMappingData) {
}


