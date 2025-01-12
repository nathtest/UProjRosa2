#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "KeyConfigAssignDataWork.h"
#include "KeyConfigErrorCheckResult.h"
#include "KeyConfigOperationCategory.h"
#include "KeyInputMappingData.h"
#include "KeyConfigAssignDataWorkHelper.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UKeyConfigAssignDataWorkHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UKeyConfigAssignDataWorkHelper();

    UFUNCTION(BlueprintCallable)
    static void Func_UpdateMapping(bool& OutIsChanged, UPARAM(Ref) FKeyConfigAssignDataWork& InWork, FName InAssignID, int32 InSlotIndex, const FKey& InKey, const FKeyConfigOperationCategory& InCategory, int32 InUpdateOptions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Func_IsValidWorkData(const FKeyConfigAssignDataWork& InWork);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FKey> Func_GetKeys(const FKeyInputMappingData& InMappingData, bool InIsIncludeAction, bool InIsIncludeAxis);
    
    UFUNCTION(BlueprintCallable)
    static void Func_FindMappingKey(const FKeyConfigAssignDataWork& InWork, int32 InGroup, const FKeyConfigOperationCategory& InCategory, int32 InIndexInCategory, int32 InSlotIndex, bool& OutIsFound, FKey& OutKey);
    
    UFUNCTION(BlueprintCallable)
    static void Func_FindMappingData(const FKeyConfigAssignDataWork& InWork, int32 InAssignIndex, bool& OutIsFound, int32& OutGroup, FKeyConfigOperationCategory& OutCategory, int32& OutIndexInCategory, FKeyInputMappingData& OutData);
    
    UFUNCTION(BlueprintCallable)
    static void Func_FindDependenceKeys(const FKeyConfigAssignDataWork& InWork, const FKeyConfigOperationCategory& InCategory, TArray<FKey>& OutKeys);
    
    UFUNCTION(BlueprintCallable)
    static void Func_ErrorCheckByGroup(const FKeyConfigAssignDataWork& InWork, int32 InGroup, int32 InCheckErrors, bool& OutIsError, TArray<FKeyConfigErrorCheckResult>& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static void Func_ErrorCheck(const FKeyConfigAssignDataWork& InWork, int32 InCheckErrors, bool& OutIsError, TArray<FKeyConfigErrorCheckResult>& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static void Func_ClearMapping(UPARAM(Ref) FKeyConfigAssignDataWork& InWork, FName InAssignID, int32 InSlotIndex, bool& OutIsChanged, TArray<FKeyInputMappingData>& OutMappingData);
    
};

