#pragma once
#include "CoreMinimal.h"
#include "AppGameInstanceSubsystem.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppGameInstanceSubsystem -FallbackName=AppGameInstanceSubsystem
#include "G01VAStorage_AnimSeRange.h"
#include "G01VAGlobalStorage.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01VAGlobalStorage : public UAppGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FG01VAStorage_AnimSeRange> AnimSeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FG01VAStorage_AnimSeRange> AnimSeRangeGlobal;
    
public:
    UG01VAGlobalStorage();

};

