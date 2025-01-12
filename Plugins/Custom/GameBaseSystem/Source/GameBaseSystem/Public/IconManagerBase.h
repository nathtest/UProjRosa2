#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EIcnoEnum.h"
#include "ManagerBase.h"
#include "IconManagerBase.generated.h"

class AActor;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AIconManagerBase : public AManagerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIcnoEnum, TSoftClassPtr<AActor>> MIconList;
    
public:
    AIconManagerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestDrawIcon(FTransform InTransform, EIcnoEnum InIconEnum);
    
    UFUNCTION(BlueprintCallable)
    void ReMoveDrawIcon(EIcnoEnum InIconEnum);
    
};

