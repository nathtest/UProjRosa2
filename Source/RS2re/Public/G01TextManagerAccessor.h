#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
#include "EG01TextPlayerGenderOverride.h"
#include "G01TextAnalysisResult.h"
#include "G01TextFindArgs.h"
#include "G01TextFindResult.h"
#include "G01TextLanguageID.h"
#include "G01TextManagerAccessor.generated.h"

class UFont;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01TextManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UG01TextManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetupTextLanguage(bool& OutIsSuccess, FG01TextLanguageID InLanguageID, bool InIsAsync);
    
    UFUNCTION(BlueprintCallable)
    void SetOverridePlayerGender(const EG01TextPlayerGenderOverride& InGender);
    
    UFUNCTION(BlueprintCallable)
    void GetFont(UFont*& OutFont);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01TextLanguageID GetCurrentTextLanguageID() const;
    
    UFUNCTION(BlueprintCallable)
    void GetAllTextID(TArray<FName>& OutTextIDs);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FormatTextID(FString& OutTextID, FG01TextAnalysisResult& OutAnalysisData, const FName& InTextID, const FG01TextFindArgs& InArgs);
    
    UFUNCTION(BlueprintCallable)
    void FormatLinkName(FText& OutContent, const TArray<FText>& InStartNames, const TArray<FText>& InEndNames, int32 InLinkNum);
    
    UFUNCTION(BlueprintCallable)
    void FormatContent(FText& OutContent, FG01TextAnalysisResult& OutAnalysisData, const FText& InContent, const FG01TextFindArgs& InArgs);
    
    UFUNCTION(BlueprintCallable)
    void FindText(bool& OutIsSuccess, FG01TextFindResult& OutResult, FName InTextID, FG01TextFindArgs InArgs);
    
};

