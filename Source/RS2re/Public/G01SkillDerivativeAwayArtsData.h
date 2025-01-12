#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "G01SkillDerivativeAwayArtsData.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01SkillDerivativeAwayArtsData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AwayArtsList;
    
public:
    UG01SkillDerivativeAwayArtsData();

};

