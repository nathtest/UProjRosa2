#include "G01TextManagerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

UG01TextManagerAccessor::UG01TextManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_TEXTSYSTEM;
}

void UG01TextManagerAccessor::SetupTextLanguage(bool& OutIsSuccess, FG01TextLanguageID InLanguageID, bool InIsAsync) {
}

void UG01TextManagerAccessor::SetOverridePlayerGender(const EG01TextPlayerGenderOverride& InGender) {
}

void UG01TextManagerAccessor::GetFont(UFont*& OutFont) {
}

FG01TextLanguageID UG01TextManagerAccessor::GetCurrentTextLanguageID() const {
    return FG01TextLanguageID{};
}

void UG01TextManagerAccessor::GetAllTextID(TArray<FName>& OutTextIDs) {
}

void UG01TextManagerAccessor::FormatTextID_Implementation(FString& OutTextID, FG01TextAnalysisResult& OutAnalysisData, const FName& InTextID, const FG01TextFindArgs& InArgs) {
}

void UG01TextManagerAccessor::FormatLinkName(FText& OutContent, const TArray<FText>& InStartNames, const TArray<FText>& InEndNames, int32 InLinkNum) {
}

void UG01TextManagerAccessor::FormatContent(FText& OutContent, FG01TextAnalysisResult& OutAnalysisData, const FText& InContent, const FG01TextFindArgs& InArgs) {
}

void UG01TextManagerAccessor::FindText(bool& OutIsSuccess, FG01TextFindResult& OutResult, FName InTextID, FG01TextFindArgs InArgs) {
}


