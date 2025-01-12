#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADEventExecuter.h"
#include "SQEXSEADEventTreeNode.generated.h"

class USQEXSEADEventTreeNode;

UCLASS(Blueprintable)
class SQEXSEADEVENT_API USQEXSEADEventTreeNode : public USQEXSEADEventExecuter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEXSEADEventTreeNode* ParentNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USQEXSEADEventTreeNode*> ChildNodes;
    
public:
    USQEXSEADEventTreeNode();

};

