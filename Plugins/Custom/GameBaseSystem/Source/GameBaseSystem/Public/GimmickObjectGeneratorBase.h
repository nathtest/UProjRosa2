#pragma once
#include "CoreMinimal.h"
#include "ObjectGeneratorBase.h"
#include "GimmickObjectGeneratorBase.generated.h"

class AGimmickObjectBase;
class UGimmickGenManagerAccessComponent;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AGimmickObjectGeneratorBase : public AObjectGeneratorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGimmickGenManagerAccessComponent* MGimmickGenManagerAccessor;
    
public:
    AGimmickObjectGeneratorBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    AGimmickObjectBase* GetCreatedGimmickObject();
    
};

