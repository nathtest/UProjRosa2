#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
#include "G01DevelopSpellParameterStruct.h"
#include "G01SpellInstituteManagerAccessor.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01SpellInstituteManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UG01SpellInstituteManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestOpenSpellInstitute(AActor* InRequestActor);
    
    UFUNCTION(BlueprintCallable)
    void GetDevelopSpellParameter(const FName InSpellID, FG01DevelopSpellParameterStruct& ReDevelopSpellParam);
    
};

