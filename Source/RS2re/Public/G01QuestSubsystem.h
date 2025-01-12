#pragma once
#include "CoreMinimal.h"
#include "QuestSubsystem.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestSubsystem -FallbackName=QuestSubsystem
#include "G01QuestSaveInfo.h"
#include "G01QuestSubsystem.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01QuestSubsystem : public UQuestSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01QuestSaveInfo Data2;
    
public:
    UG01QuestSubsystem();

};

