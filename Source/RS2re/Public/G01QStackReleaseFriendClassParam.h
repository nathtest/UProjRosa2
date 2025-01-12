#pragma once
#include "CoreMinimal.h"
#include "EG01FriendClass.h"
#include "G01QStackReleaseFriendClassParam.generated.h"

USTRUCT(BlueprintType)
struct FG01QStackReleaseFriendClassParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01FriendClass MFriendClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlayableClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCancel;
    
    RS2RE_API FG01QStackReleaseFriendClassParam();
};

