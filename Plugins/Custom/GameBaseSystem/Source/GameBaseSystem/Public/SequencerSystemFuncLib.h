#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EventArguments.h"
#include "SeqCategoryView.h"
#include "SeqPlayCollisionEventInfo.h"
#include "SeqTypeView.h"
#include "SequencerSystemFuncLib.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API USequencerSystemFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USequencerSystemFuncLib();

    UFUNCTION(BlueprintCallable)
    static FEventArguments Func_SeqQueueInfoToSeqPlayArgs(const FSeqPlayCollisionEventInfo& InInfo);
    
    UFUNCTION(BlueprintCallable)
    static FSeqPlayCollisionEventInfo Func_SeqPlayArgsToSeqQueueInfo(const FEventArguments& InArgs);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Func_NotEqual_SeqType(FSeqTypeView InA, FSeqTypeView InB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Func_NotEqual_SeqCategory(FSeqCategoryView InA, FSeqCategoryView InB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Func_EqualEqual_SeqType(FSeqTypeView InA, FSeqTypeView InB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Func_EqualEqual_SeqCategory(FSeqCategoryView InA, FSeqCategoryView InB);
    
};

