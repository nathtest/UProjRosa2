#pragma once
#include "CoreMinimal.h"
#include "G01HudInformationDataInfoStruct.h"
#include "G01SaveDataUserSubsystemBase.h"
#include "G01MenuSubsystem.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01MenuSubsystem : public UG01SaveDataUserSubsystemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01HudInformationDataInfoStruct> NoticeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HudEnemyPreLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HudEnemyLevel;
    
    UG01MenuSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetPartyCharaIndex(int32 InPartyCharaIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetMenuItemCategoryPriorityList(TMap<FName, int32> InCategoryPriorityList);
    
    UFUNCTION(BlueprintCallable)
    void SetLoadUniqueInfo(FName InCharaInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetLearnArtsPriority(TArray<FName> InLearnArtsPriority);
    
    UFUNCTION(BlueprintCallable)
    void SetEquipItemCategoryPriorityList(TMap<FName, int32> InCategoryPriorityList);
    
    UFUNCTION(BlueprintCallable)
    void SetCursorIndex(int32 InCursorIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetCharaIndex(int32 InCharaIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTipsList(TArray<FText>& OutTipsList) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPartyCharaIndex(int32& OutPartyCharaIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMenuItemCategoryPriorityList(TMap<FName, int32>& OutCategoryPriorityList) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLoadUniqueInfo(FName& OutCharaInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLearnArtsPriority(TArray<FName>& OutLearnArtsPriority) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEquipItemCategoryPriorityList(TMap<FName, int32>& OutCategoryPriorityList) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCursorIndex(int32& OutCursorIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCharaIndex(int32& OutCharaIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void AddTipsList(FText DispTips);
    
};

