#include "ManagerFuncLib.h"
#include "Templates/SubclassOf.h"

UManagerFuncLib::UManagerFuncLib() {
}

void UManagerFuncLib::Func_GetManagerHasInterface(const UObject* InWorldContext, TSubclassOf<UInterface> InInterfaceClass, TArray<AManagerBase*>& OutManagers, EManagerGetResult& OutBranches) {
}

AManagerBase* UManagerFuncLib::Func_FindManager(const UObject* InWorldContext, EManagerID InManagerId) {
    return NULL;
}


