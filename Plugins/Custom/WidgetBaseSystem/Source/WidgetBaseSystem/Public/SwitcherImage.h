#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Image -FallbackName=Image
#include "Components/Image.h"
#include "SwitcherImage.generated.h"

UCLASS(Blueprintable)
class WIDGETBASESYSTEM_API USwitcherImage : public UImage {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MMemo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MBrushIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSlateBrush> MBrushList;
    
public:
    USwitcherImage();

    UFUNCTION(BlueprintCallable)
    void SetBrushIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetBrushIndex();
    
};

