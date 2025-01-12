#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EditorUtilityFunction.generated.h"

class UObject;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class RS2RE_API UEditorUtilityFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEditorUtilityFunction();

private:
    UFUNCTION(BlueprintCallable)
    static void SortStringArray(const TArray<FString> InStringArray, TArray<FString>& OutStringArray);
    
    UFUNCTION(BlueprintCallable)
    static void SetUseDefaultCollision(UStaticMeshComponent* InStaticMeshComponent, bool InSetting);
    
    UFUNCTION(BlueprintCallable)
    static void OutputUELog(const FString& inString);
    
    UFUNCTION(BlueprintCallable)
    static UClass* GetParentBlueprintClass(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    static bool GetLevelViewportCameraParam(FVector& CameraLocation, FRotator& CameraRotation);
    
    UFUNCTION(BlueprintCallable)
    static float GetLevelPerspectiveViewportFOV(int32 InNo);
    
    UFUNCTION(BlueprintCallable)
    static float GetLevelPerspectiveAspectRatio(int32 InNo);
    
    UFUNCTION(BlueprintCallable)
    static UClass* GetBlueprintClass(UObject* Object, bool& success);
    
    UFUNCTION(BlueprintCallable)
    static UClass* FindClassByString(const FString& ClassName);
    
};

