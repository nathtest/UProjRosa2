#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "G01BattleExplicitCommandMementoStruct.h"
#include "G01BattleExplicitCommandMemento.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01BattleExplicitCommandMemento : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01BattleExplicitCommandMementoStruct> memento_;
    
public:
    UG01BattleExplicitCommandMemento();

    UFUNCTION(BlueprintCallable)
    void StoreMemento(const FName& InArtsID, int32 InSubIndex);
    
    UFUNCTION(BlueprintCallable)
    void RestoreMemento(int32 InReverse, FName& OutArtsID, int32& OutSubIndex);
    
    UFUNCTION(BlueprintCallable)
    void ResolveMemento(const TArray<FName>& InArtsIdList);
    
    UFUNCTION(BlueprintCallable)
    void DiscardMemento();
    
};

