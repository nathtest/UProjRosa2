#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "LevelObjectFindResult.h"
#include "LevelObjectID.h"
#include "LevelObjectIdCore.h"
#include "LevelObjectFinderFuncLib.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ULevelObjectFinderFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULevelObjectFinderFuncLib();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString LevelObjectIdToString(const FLevelObjectIdCore& InLevelObjectID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName LevelObjectIdToName(const FLevelObjectIdCore& InLevelObjectID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidVisualActorClass(const FLevelObjectFindResult& InData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidGenerator(const FLevelObjectFindResult& InData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidGeneralString(const FLevelObjectFindResult& InData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidActor(const FLevelObjectFindResult& InData);
    
    UFUNCTION(BlueprintCallable)
    static void Func_MakeLevelObjectID(const FName& InLevelObjectType, const FName& InLevelObjectID, int32 InGenericNumber, FLevelObjectID& OutLevelObjectID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Func_LevelObjectID_NotEqual(const FLevelObjectIdCore& InA, const FLevelObjectIdCore& InB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Func_LevelObjectID_EqualEqual(const FLevelObjectIdCore& InA, const FLevelObjectIdCore& InB);
    
};

