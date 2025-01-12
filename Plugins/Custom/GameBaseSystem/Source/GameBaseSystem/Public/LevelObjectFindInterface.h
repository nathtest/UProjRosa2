#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "LevelObjectFindResult.h"
#include "LevelObjectID.h"
#include "LevelObjectFindInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class ULevelObjectFindInterface : public UInterface {
    GENERATED_BODY()
};

class ILevelObjectFindInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_LevelObjFind_FindLevelActor(const FLevelObjectID& InLevelObjectID, FLevelObjectFindResult& OutResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_LevelObjectFind_FindLevelActors(const FLevelObjectID& InLevelObjectID, TArray<FLevelObjectFindResult>& OutResults);
    
};

