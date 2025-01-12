#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "TextWrapLines.h"
#include "TextWrapWordParams.h"
#include "TextWrapperOwnerInterface.generated.h"

class UTextWrapperBase;

UINTERFACE(Blueprintable)
class UTextWrapperOwnerInterface : public UInterface {
    GENERATED_BODY()
};

class ITextWrapperOwnerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_TextWrapper_OnTextUpdate(const UTextWrapperBase* InWrapper);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_TextWrapper_OnTextRevisionChanged(const UTextWrapperBase* InWrapper);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_TextWrapper_OnPreRecalculate(const UTextWrapperBase* InWrapper);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_TextWrapper_OnPreApplyText(const UTextWrapperBase* InWrapper);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_TextWrapper_OnPostRecalculate(const UTextWrapperBase* InWrapper);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_TextWrapper_OnPostApplyText(const UTextWrapperBase* InWrapper);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_TextWrapper_OnEndFrame(const UTextWrapperBase* InWrapper);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_TextWrapper_OnCreateLines(const UTextWrapperBase* InWrapper, FTextWrapLines& InOutLines);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector2D Owner_TextWrapper_CalcTextSize(const UTextWrapperBase* InWrapper, const FTextWrapWordParams& InWordParams);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector2D Owner_TextWrapper_CalcMaxTextSize(const UTextWrapperBase* InWrapper);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_TextWrapper_AddText(const UTextWrapperBase* InWrapper, const FTextWrapWordParams& InWordParams);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_TextWrapper_AddNewLine(const UTextWrapperBase* InWrapper, int32 InInsertIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_TextManager_BreakLine(const UTextWrapperBase* InWrapper, int32 InLineIndex, int32 InWordIndex);
    
};

