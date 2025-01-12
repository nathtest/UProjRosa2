#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "SQEXSEADEventBlueprintLibrary.generated.h"

class USQEXSEADEventExecuter;
class USQEXSEADEventTreeNode;

UCLASS(Blueprintable)
class SQEXSEADEVENT_API USQEXSEADEventBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USQEXSEADEventBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static USQEXSEADEventTreeNode* RemoveEventTreeNode(USQEXSEADEventTreeNode* ParentTreeNode, const FName SEADEventLabel, bool Recursive);
    
    UFUNCTION(BlueprintCallable)
    static bool IsRunning(USQEXSEADEventExecuter* SEADEventExecuter);
    
    UFUNCTION(BlueprintCallable)
    static bool IsRootNode(USQEXSEADEventTreeNode* TreeNode);
    
    UFUNCTION(BlueprintCallable)
    static USQEXSEADEventTreeNode* FindEventTreeNode(USQEXSEADEventTreeNode* TreeNode, const FName SEADEventLabel, bool Recursive);
    
    UFUNCTION(BlueprintCallable)
    static bool EndEvent(USQEXSEADEventExecuter* SEADEventExecuter);
    
    UFUNCTION(BlueprintCallable)
    static USQEXSEADEventTreeNode* CreateEventTreeNode(const FName SEADEventLabel);
    
    UFUNCTION(BlueprintCallable)
    static USQEXSEADEventExecuter* CreateEventExecuter(const FName SEADEventLabel);
    
    UFUNCTION(BlueprintCallable)
    static bool BeginEvent(USQEXSEADEventExecuter* SEADEventExecuter);
    
    UFUNCTION(BlueprintCallable)
    static USQEXSEADEventTreeNode* AddEventTreeNode(USQEXSEADEventTreeNode* ParentTreeNode, const FName SEADEventLabel);
    
};

