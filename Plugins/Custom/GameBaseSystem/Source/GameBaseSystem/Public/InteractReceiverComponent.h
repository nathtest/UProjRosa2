#pragma once
#include "CoreMinimal.h"
#include "InteractBaseComponent.h"
#include "InteractCategoryID.h"
#include "OnInteractActivatedDelegate.h"
#include "OnInteractDeactivatedDelegate.h"
#include "InteractReceiverComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API UInteractReceiverComponent : public UInteractBaseComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractActivated MOnInteractActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractDeactivated MOnInteractDeactivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* MOwnerActor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractCategoryID InteractCategoryID;
    
public:
    UInteractReceiverComponent(const FObjectInitializer& ObjectInitializer);

};

