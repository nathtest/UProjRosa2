#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EQuestOrderState.h"
#include "QuestFunctionLibrary.generated.h"

class AQuestObjectCore;
class UObject;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UQuestFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UQuestFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool QuestOrderStateAND(TEnumAsByte<EQuestOrderState::Type> InLhs, int32 InRhs);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetPreSectionName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPreSectionIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetPreSectionDescription();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetPostSectionName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetPostSectionDescription();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetErrorSectionIndex();
    
    UFUNCTION(BlueprintCallable)
    static void Func_QuestIDtoQuestFullID(FName InOriginalID, FName InCustomID, FName& OutFullID);
    
    UFUNCTION(BlueprintCallable)
    static bool Func_QuestFullIDtoQuestID(FName InQuestID, FName& OutOriginalID, FName& OutCustomID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObjectconst"))
    static FName ConvertQuestClassToQuestID(const UObject* InWorldContextObjectconst, const TSoftClassPtr<AQuestObjectCore>& InQuestClass);
    
};

