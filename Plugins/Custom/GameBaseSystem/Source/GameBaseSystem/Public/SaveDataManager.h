#pragma once
#include "CoreMinimal.h"
#include "ESaveDataManagerState.h"
#include "ManagerBase.h"
#include "SaveDataManagerInf.h"
#include "SaveDataManager.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ASaveDataManager : public AManagerBase, public ISaveDataManagerInf {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESaveDataManagerState State;
    
public:
    ASaveDataManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnGameStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Init();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Fin();
    

    // Fix for true pure virtual functions not being implemented
};

