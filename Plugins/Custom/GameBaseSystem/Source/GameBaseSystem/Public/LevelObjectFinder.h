#pragma once
#include "CoreMinimal.h"
#include "LevelObjectFindInterface.h"
#include "ManagerBase.h"
#include "LevelObjectFinder.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ALevelObjectFinder : public AManagerBase, public ILevelObjectFindInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MAccessInfoTable;
    
public:
    ALevelObjectFinder(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

