#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PlatformResource.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UPlatformResource : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* KeyIconTable;
    
public:
    UPlatformResource();

};

