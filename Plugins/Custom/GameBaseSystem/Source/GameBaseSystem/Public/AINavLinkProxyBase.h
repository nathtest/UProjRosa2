#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=NavLinkProxy -FallbackName=NavLinkProxy
#include "Navigation/NavLinkProxy.h"
#include "AINavLinkProxyBase.generated.h"

UCLASS(Blueprintable)
class AAINavLinkProxyBase : public ANavLinkProxy {
    GENERATED_BODY()
public:
    AAINavLinkProxyBase(const FObjectInitializer& ObjectInitializer);

};

