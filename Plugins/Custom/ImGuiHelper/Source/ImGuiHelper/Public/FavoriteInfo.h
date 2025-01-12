#pragma once
#include "CoreMinimal.h"
#include "FavoriteInfo.generated.h"

USTRUCT(BlueprintType)
struct FFavoriteInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool fav;
    
    IMGUIHELPER_API FFavoriteInfo();
};

