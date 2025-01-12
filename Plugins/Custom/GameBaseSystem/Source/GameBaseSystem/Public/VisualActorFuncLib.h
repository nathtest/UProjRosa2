#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EVisualActorPartialPhysicsType.h"
#include "VAAnimInstPathData.h"
#include "VisualActorID.h"
#include "VisualActorFuncLib.generated.h"

class AActor;
class UAnimInstance;
class UObject;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UVisualActorFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVisualActorFuncLib();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Func_VisualActorID_NotEqual(FVisualActorID InA, FVisualActorID InB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Func_VisualActorID_EqualEqual(FVisualActorID InA, FVisualActorID InB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Func_IsValidVisualActorID(const FVisualActorID& InVisualActorID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAnimInstance* Func_GetVisualActorAnimInstance(AActor* InVisualActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AActor* Func_GetVisualActor(UObject* InObject);
    
    UFUNCTION(BlueprintCallable)
    static FName Func_GetPartialPhysicsCurveName(EVisualActorPartialPhysicsType InType);
    
    UFUNCTION(BlueprintCallable)
    static FVAAnimInstPathData Func_ConvertVisualActorAnimationPath(FName InVisualId, FName InFigureID, FName InAssetName);
    
};

