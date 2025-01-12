#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EG01TextPlayerGenderOverride.h"
#include "G01TextAnalysisResult.h"
#include "G01TextFindArgs.h"
#include "G01TextFindResult.h"
#include "G01TextLanguageID.h"
#include "G01TextManagerInterface.generated.h"

class UFont;

UINTERFACE(Blueprintable)
class UG01TextManagerInterface : public UInterface {
    GENERATED_BODY()
};

class IG01TextManagerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01TextManager_SetupTextLanguage(bool& OutIsSuccess, FG01TextLanguageID InLanguageID, bool InIsAsync);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01TextManager_SetOverridePlayerGender(const EG01TextPlayerGenderOverride& InOverrideGender);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString Inf_G01TextManager_ReplaceUnsupportedText(const UFont* InFont, const FString& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UFont* Inf_G01TextManager_GetFont();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FG01TextLanguageID Inf_G01TextManager_GetCurrentTextLanguageID();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01TextManager_GetAllTextID(TArray<FName>& OutTextIDs);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01TextManager_FormatTextID(FString& OutTextID, FG01TextAnalysisResult& OutAnalysisData, const FName& InTextID, const FG01TextFindArgs& InArgs);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01TextManager_FormatLinkName(FText& OutContent, const TArray<FText>& InStartNames, const TArray<FText>& InEndNames, int32 InLinkNum);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01TextManager_FormatContent(FText& OutContent, FG01TextAnalysisResult& OutAnalysisData, const FText& InContent, const FG01TextFindArgs& InArgs);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01TextManager_FindText(FG01TextFindResult& OutResult, FName InTextID, const FG01TextFindArgs& InArgs);
    
};

