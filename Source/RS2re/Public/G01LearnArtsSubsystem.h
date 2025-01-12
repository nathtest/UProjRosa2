#pragma once
#include "CoreMinimal.h"
#include "SaveDataUserSubsystemBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SaveDataUserSubsystemBase -FallbackName=SaveDataUserSubsystemBase
#include "G01PartyLearnArtsStruct.h"
#include "G01LearnArtsSubsystem.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01LearnArtsSubsystem : public USaveDataUserSubsystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01PartyLearnArtsStruct> LearnArtsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01PartyLearnArtsStruct> RegisterArtsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AchievementSkillList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AchievementSpellList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsForceArtsRegist;
    
public:
    UG01LearnArtsSubsystem();

    UFUNCTION(BlueprintCallable)
    void UpdateRegisterLearnArts();
    
    UFUNCTION(BlueprintCallable)
    void RemoveRegisteredArts(const FG01PartyLearnArtsStruct& InRemoveArts);
    
    UFUNCTION(BlueprintCallable)
    void GetRegisterArtsList(UPARAM(Ref) TArray<FG01PartyLearnArtsStruct>& ReArtsList);
    
    UFUNCTION(BlueprintCallable)
    void GetLearnArtsList(UPARAM(Ref) TArray<FG01PartyLearnArtsStruct>& ReArtsList);
    
    UFUNCTION(BlueprintCallable)
    void GetAchievementSpellList(TArray<FName>& OutSpellList);
    
    UFUNCTION(BlueprintCallable)
    void GetAchievementSkillList(TArray<FName>& OutSkillList);
    
    UFUNCTION(BlueprintCallable)
    void AddRegisterArts(const FG01PartyLearnArtsStruct& InLearnArts);
    
    UFUNCTION(BlueprintCallable)
    void AddLearnArts(const FG01PartyLearnArtsStruct& InLearnArts);
    
};

