#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ImGuiInputBinder.generated.h"

class UInputCheckerBase;

UCLASS(Blueprintable)
class AImGuiInputBinder : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UInputCheckerBase*> InputCheckerList;
    
public:
    AImGuiInputBinder(const FObjectInitializer& ObjectInitializer);

};

