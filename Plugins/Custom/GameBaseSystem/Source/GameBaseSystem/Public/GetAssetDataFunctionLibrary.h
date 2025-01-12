#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=AssetData -FallbackName=AssetData
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "GetAssetDataFunctionLibrary.generated.h"

class AQuestObjectBase;
class ULevelSequence;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UGetAssetDataFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGetAssetDataFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UClass* GetAssetGeneratedClass(const FAssetData& InAssetData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSoftObjectPtr<ULevelSequence> Func_StringToSoftObjectPtrLevelSequence(const FString& InPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSoftClassPtr<AQuestObjectBase> Func_StringToSoftClassPtrQuest(const FString& InPath);
    
};

