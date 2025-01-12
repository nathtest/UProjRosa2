#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "QuestSectionNameView.h"
#include "QuestSectionParam.h"
#include "QuestDataAsset.generated.h"

class AQuestObjectBase;
class UDataTable;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UQuestDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AQuestObjectBase> QuestClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SectionTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* FlagTable;
    
public:
    UQuestDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetValidSectionParam(int32 InSectionIndex, bool& OutIsValid, FQuestSectionParam& OutParam) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetSectionTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FQuestSectionParam GetSectionParam(int32 InSectionIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSectionName(int32 InSectionIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<AQuestObjectBase> GetQuestClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FQuestSectionParam GetPostSectionParam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FQuestSectionParam GetLastSectionParam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetFlagTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FQuestSectionParam GetFirstSectionParam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 ConvertSectionNameToSectionIndex(const FQuestSectionNameView& InSectionName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSectionNameExist(const FName& InSectionName) const;
    
};

