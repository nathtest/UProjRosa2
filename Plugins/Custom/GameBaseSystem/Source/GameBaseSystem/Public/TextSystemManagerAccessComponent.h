#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h"
#include "TextFindResult.h"
#include "TextSystemManagerAccessComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API UTextSystemManagerAccessComponent : public UManagerAccessor {
    GENERATED_BODY()
public:
    UTextSystemManagerAccessComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FindText(FName InTextID, bool& ReIsFound, FTextFindResult& ReFindResult) const;
    
};

