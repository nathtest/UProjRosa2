#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
#include "G01GameEffectFlagIDStruct.h"
#include "G01TeacherManagerAccessor.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01TeacherManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UG01TeacherManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void GetGameEffect(FG01GameEffectFlagIDStruct InFlagID, TMap<FName, float>& OutEffect, bool& OutIsValid);
    
};

