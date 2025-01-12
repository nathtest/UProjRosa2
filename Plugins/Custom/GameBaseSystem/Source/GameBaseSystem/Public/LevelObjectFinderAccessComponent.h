#pragma once
#include "CoreMinimal.h"
#include "EditableLevelObjectID.h"
#include "LevelObjectFindResult.h"
#include "LevelObjectID.h"
#include "ManagerAccessor.h"
#include "LevelObjectFinderAccessComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API ULevelObjectFinderAccessComponent : public UManagerAccessor {
    GENERATED_BODY()
public:
    ULevelObjectFinderAccessComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool FindLevelObjects(const FLevelObjectID& InLevelObjectID, TArray<FLevelObjectFindResult>& OutFindResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FindLevelObject(FEditableLevelObjectID InLevelObjectID, bool& IsFound, FLevelObjectFindResult& OutFindResult, bool InIsErrorCheck) const;
    
};

