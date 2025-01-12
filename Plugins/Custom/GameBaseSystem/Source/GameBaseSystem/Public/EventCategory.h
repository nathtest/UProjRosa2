#pragma once
#include "CoreMinimal.h"
#include "EventMainCatView.h"
#include "EventSubCatView.h"
#include "EventSubGroupView.h"
#include "EventCategory.generated.h"

USTRUCT(BlueprintType)
struct FEventCategory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventMainCatView MMainCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventSubCatView MSubCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventSubGroupView MSubCatGroup;
    
    GAMEBASESYSTEM_API FEventCategory();
};
FORCEINLINE uint32 GetTypeHash(const FEventCategory) { return 0; }

