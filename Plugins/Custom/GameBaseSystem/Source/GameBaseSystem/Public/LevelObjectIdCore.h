#pragma once
#include "CoreMinimal.h"
#include "LevelObjectIdCore.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FLevelObjectIdCore {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MLevelObjectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MLevelObjectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MGenericNumber;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName MLevelObjectFullID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool MIsNeedUpdateFullID;
    
public:
    FLevelObjectIdCore();
};

