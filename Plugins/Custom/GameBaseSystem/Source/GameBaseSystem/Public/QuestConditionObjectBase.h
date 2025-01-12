#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EQuestBufferIndex.h"
#include "QuestConditionBufferAccessor.h"
#include "QuestConditionObjectBase.generated.h"

class UQuestCoreData;
class UScriptStruct;

UCLASS(Abstract, Blueprintable)
class GAMEBASESYSTEM_API UQuestConditionObjectBase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UQuestCoreData* CoreData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FQuestConditionBufferAccessor BufferAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EQuestBufferIndex ParamIndex;
    
public:
    UQuestConditionObjectBase();

    UFUNCTION(BlueprintCallable)
    void SetCompleted(bool InIsCompleted);
    
    UFUNCTION(BlueprintCallable)
    bool IsCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UScriptStruct* GetParamStruct() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FString GetConditionDescription() const;
    
};

