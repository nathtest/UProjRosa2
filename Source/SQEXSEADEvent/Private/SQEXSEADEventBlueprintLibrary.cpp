#include "SQEXSEADEventBlueprintLibrary.h"

USQEXSEADEventBlueprintLibrary::USQEXSEADEventBlueprintLibrary() {
}

USQEXSEADEventTreeNode* USQEXSEADEventBlueprintLibrary::RemoveEventTreeNode(USQEXSEADEventTreeNode* ParentTreeNode, const FName SEADEventLabel, bool Recursive) {
    return NULL;
}

bool USQEXSEADEventBlueprintLibrary::IsRunning(USQEXSEADEventExecuter* SEADEventExecuter) {
    return false;
}

bool USQEXSEADEventBlueprintLibrary::IsRootNode(USQEXSEADEventTreeNode* TreeNode) {
    return false;
}

USQEXSEADEventTreeNode* USQEXSEADEventBlueprintLibrary::FindEventTreeNode(USQEXSEADEventTreeNode* TreeNode, const FName SEADEventLabel, bool Recursive) {
    return NULL;
}

bool USQEXSEADEventBlueprintLibrary::EndEvent(USQEXSEADEventExecuter* SEADEventExecuter) {
    return false;
}

USQEXSEADEventTreeNode* USQEXSEADEventBlueprintLibrary::CreateEventTreeNode(const FName SEADEventLabel) {
    return NULL;
}

USQEXSEADEventExecuter* USQEXSEADEventBlueprintLibrary::CreateEventExecuter(const FName SEADEventLabel) {
    return NULL;
}

bool USQEXSEADEventBlueprintLibrary::BeginEvent(USQEXSEADEventExecuter* SEADEventExecuter) {
    return false;
}

USQEXSEADEventTreeNode* USQEXSEADEventBlueprintLibrary::AddEventTreeNode(USQEXSEADEventTreeNode* ParentTreeNode, const FName SEADEventLabel) {
    return NULL;
}


