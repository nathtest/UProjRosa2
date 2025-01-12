#pragma once
#include "CoreMinimal.h"
#include "LevelMoveGameInstanceSubsystem.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=LevelMoveGameInstanceSubsystem -FallbackName=LevelMoveGameInstanceSubsystem
#include "LevelTransitionInfoView.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=LevelTransitionInfoView -FallbackName=LevelTransitionInfoView
#include "G01LevelMoveSaveInfo.h"
#include "G01LevelMoveSubsystem.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01LevelMoveSubsystem : public ULevelMoveGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01LevelMoveSaveInfo Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool MIsUseFastTravel;
    
public:
    UG01LevelMoveSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetLevelID(const FLevelTransitionInfoView& InLevelID);
    
    UFUNCTION(BlueprintCallable)
    void SetIsUseFastTravel(bool InIsFastTravel);
    
    UFUNCTION(BlueprintCallable)
    void GetIsUseFastTravel(bool& OutIsFastTravel);
    
};

