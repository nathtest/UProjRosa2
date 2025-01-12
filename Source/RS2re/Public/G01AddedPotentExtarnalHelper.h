#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "G01AddedPotentExtarnalHelper.generated.h"

class AG01AddedPotentExtarnalObjectBase;

UCLASS(Blueprintable)
class RS2RE_API UG01AddedPotentExtarnalHelper : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AG01AddedPotentExtarnalObjectBase*> ExtarnalList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AG01AddedPotentExtarnalObjectBase*> AttachedExtarnalList;
    
public:
    UG01AddedPotentExtarnalHelper();

};

