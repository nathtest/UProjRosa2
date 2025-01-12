#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "G01MenuLibrarySubsystem.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01MenuLibrarySubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsAllOpenEnemyLibrary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsOpenEnemyLibrary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsOpenSkillLibrary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsOpenSpellLibrary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsOpenFathomLibrary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsOpenItemLibrary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsTestTutorialLibrary;
    
public:
    UG01MenuLibrarySubsystem();

    UFUNCTION(BlueprintCallable)
    void SetOpenTutorialLibrary(bool InIsOpenTutorialLibrary);
    
    UFUNCTION(BlueprintCallable)
    void SetOpenSpellLibrary(bool InIsOpenSpellLibrary);
    
    UFUNCTION(BlueprintCallable)
    void SetOpenSkillLibrary(bool InIsOpenSkillLibrary);
    
    UFUNCTION(BlueprintCallable)
    void SetOpenItemLibrary(bool InIsOpenItemLibrary);
    
    UFUNCTION(BlueprintCallable)
    void SetOpenFathomLibrary(bool InIsOpenFathomLibrary);
    
    UFUNCTION(BlueprintCallable)
    void SetOpenEnemyLibrary(bool InIsOpenEnemyLibrary);
    
    UFUNCTION(BlueprintCallable)
    void SetAllOpenEnemyLibrary(bool InIsAllOpenEnemyLibrary);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsOpenTutorialLibrary(bool& OutIsOpenTutorialLibrary) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsOpenSpellLibrary(bool& OutIsOpenSpellLibrary) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsOpenSkillLibrary(bool& OutIsOpenSkillLibrary) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsOpenItemLibrary(bool& OutIsOpenItemLibrary) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsOpenFathomLibrary(bool& OutIsOpenFathomLibrary) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsOpenEnemyLibrary(bool& OutIsOpenEnemyLibrary) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsAllOpenEnemyLibrary(bool& OutIsAllOpenEnemyLibrary) const;
    
};

