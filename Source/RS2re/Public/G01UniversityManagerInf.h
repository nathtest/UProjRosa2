#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "QuestSectionNameView.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestSectionNameView -FallbackName=QuestSectionNameView
#include "G01ImperialExamID.h"
#include "G01UniversityManagerInf.generated.h"

class UTexture2D;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01UniversityManagerInf : public UInterface {
    GENERATED_BODY()
};

class IG01UniversityManagerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_UG01UniversityManagerInf_IsRandom(FG01ImperialExamID ImperialExamID, bool& IsRandom);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_UG01UniversityManagerInf_GetUniversityLevel(FG01ImperialExamID ImperialExamID, int32& UniversityLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_UG01UniversityManagerInf_GetTextIDList(FName QuestionID, TArray<FText>& TextIDList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_UG01UniversityManagerInf_GetSpellNum(FG01ImperialExamID ImperialExamID, int32& SpellNum);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_UG01UniversityManagerInf_GetSkillNum(FG01ImperialExamID ImperialExamID, int32& SkillNum);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_UG01UniversityManagerInf_GetSelectionNum(FG01ImperialExamID ImperialExamID, int32& SelectionNum);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_UG01UniversityManagerInf_GetRewardItemTextIDList(FG01ImperialExamID ImperialExamID, TArray<FText>& RewardItemTextIDList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_UG01UniversityManagerInf_GetRewardItemNumList(FG01ImperialExamID ImperialExamID, TArray<int32>& RewardItemNumList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_UG01UniversityManagerInf_GetRewardItemIDList(FG01ImperialExamID ImperialExamID, TArray<FName>& RewardItemIDList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_UG01UniversityManagerInf_GetRewardCrown(FG01ImperialExamID ImperialExamID, int32& RewardCrown);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_UG01UniversityManagerInf_GetQuestSectionName(FG01ImperialExamID ImperialExamID, FQuestSectionNameView& QuestSectionName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_UG01UniversityManagerInf_GetQuestionTime(FG01ImperialExamID ImperialExamID, float& Time);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_UG01UniversityManagerInf_GetQuestionTextID(FName QuestionID, FText& QuestionText);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_UG01UniversityManagerInf_GetQuestionNum(FG01ImperialExamID ImperialExamID, int32& QuestionNum);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_UG01UniversityManagerInf_GetPrice(FG01ImperialExamID ImperialExamID, int32& Price);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSoftObjectPtr<UTexture2D> Inf_UG01UniversityManagerInf_GetPictureTexture(FName QuestionID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_UG01UniversityManagerInf_GetPassNum(FG01ImperialExamID ImperialExamID, int32& PassNum);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_UG01UniversityManagerInf_GetIsPicture(FName QuestionID, bool& IsPicture);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_UG01UniversityManagerInf_GetFlag(FG01ImperialExamID ImperialExamID, FName& FlagName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_UG01UniversityManagerInf_GetFathomNum(FG01ImperialExamID ImperialExamID, int32& FathomNum);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_UG01UniversityManagerInf_GetDefficult(FG01ImperialExamID ImperialExamID, int32& Defficult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_UG01UniversityManagerInf_GetClearExamID(FG01ImperialExamID ImperialExamID, FName& ClearExamID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_UG01UniversityManagerInf_GetClearAreaNum(FG01ImperialExamID ImperialExamID, int32& ClearAreaNum);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_UG01UniversityManagerInf_GetArgment(FName QuestionID, FString& Argment);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01UniversityManagerInf_SetReward(FG01ImperialExamID ImperialExamID, bool IsFirst);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01UniversityManagerInf_SetPassFlag(FG01ImperialExamID ImperialExamID, bool IsPass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01UniversityManagerInf_SetInfo(FName QuestionName, int32 QuestionNum, int32 PassNum);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01UniversityManagerInf_GetTestTextIDDataList(FG01ImperialExamID ImperialExamID, TArray<FText>& QuestionTextIDDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01UniversityManagerInf_GetTestIDDataList(FG01ImperialExamID ImperialExamID, TArray<FName>& QuestionIDDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01UniversityManagerInf_GetPassFlag(FG01ImperialExamID ImperialExamID, bool& IsPass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01UniversityManagerInf_GetInfo(FName& QuestionName, int32& QuestionNum, int32& PassNum);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01UniversityManagerInf_GetCurrentRewardCheck(bool& IsFirst, TArray<FName>& RewardItemIDList, TArray<FText>& RewardItemTextIDList, TArray<int32>& RewardItemNumList, int32& RewardCrown);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01UniversityManagerInf_GetCompleteNum(int32& OutCompleteNum, int32& OutMaxNum);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01UniversityManagerInf_CheckCondition(FG01ImperialExamID ImperialExamID, bool& IsPass);
    
};

