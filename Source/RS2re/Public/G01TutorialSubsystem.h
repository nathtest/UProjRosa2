#pragma once
#include "CoreMinimal.h"
#include "G01SaveDataUserSubsystemBase.h"
#include "G01TutorialID.h"
#include "G01TutorialParamRow.h"
#include "G01TutorialRuntimeData.h"
#include "G01TutorialSaveInfo.h"
#include "G01TutorialSubsystem.generated.h"

class UG01TutorialScript;
class UG01TutorialSubsystemHelper;

UCLASS(Blueprintable)
class RS2RE_API UG01TutorialSubsystem : public UG01SaveDataUserSubsystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsEnableTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FG01TutorialID, FG01TutorialRuntimeData> RuntimeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UG01TutorialSubsystemHelper* Helper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UG01TutorialScript*> Scripts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01TutorialSaveInfo Data;
    
public:
    UG01TutorialSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetEnableTutorial(bool InIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Opened(const FG01TutorialID& InTutorialId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableTutorial() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisplayed(const FG01TutorialID& InTutorialId) const;
    
    UFUNCTION(BlueprintCallable)
    void FindTutorialData(bool& OutIsFound, FG01TutorialParamRow& OutData, const FG01TutorialID& InTutorialId);
    
    UFUNCTION(BlueprintCallable)
    void CreateTutorial(FG01TutorialID InTutorialId);
    
};

