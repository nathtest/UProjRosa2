#pragma once
#include "CoreMinimal.h"
#include "G01MsgSubtitleParam.h"
#include "G01MsgUiControllerAccessorBase.h"
#include "G01TextFindResult.h"
#include "G01MsgSubtitleUiContAccessor.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01MsgSubtitleUiContAccessor : public UG01MsgUiControllerAccessorBase {
    GENERATED_BODY()
public:
    UG01MsgSubtitleUiContAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void EndShowSubtitle();
    
    UFUNCTION(BlueprintCallable)
    bool BeginShowSubtitleByText(AActor* InUser, const FG01MsgSubtitleParam& InParam, const FG01TextFindResult& InText);
    
    UFUNCTION(BlueprintCallable)
    bool BeginShowSubtitle(AActor* InUser, const FG01MsgSubtitleParam& InParam);
    
};

