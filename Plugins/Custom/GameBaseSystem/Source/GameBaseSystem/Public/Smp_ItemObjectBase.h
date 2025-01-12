#pragma once
#include "CoreMinimal.h"
#include "GimmickObjectBase.h"
#include "Smp_ItemObjectBase.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ASmp_ItemObjectBase : public AGimmickObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MDropItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MDropItemNum;
    
    ASmp_ItemObjectBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    FName GetItemId();
    
};

