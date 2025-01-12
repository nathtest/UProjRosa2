#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "G01ArtsViewerSimpleDelegateDelegate.h"
#include "G01DebugArtsViewer_ImGuiScrollBoxParam.generated.h"

USTRUCT(BlueprintType)
struct FG01DebugArtsViewer_ImGuiScrollBoxParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UniqueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableHorizontalScroll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01ArtsViewerSimpleDelegate Impl;
    
    RS2RE_API FG01DebugArtsViewer_ImGuiScrollBoxParam();
};

