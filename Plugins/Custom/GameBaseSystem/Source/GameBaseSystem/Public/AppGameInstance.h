#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstance -FallbackName=GameInstance
#include "AppGameInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class GAMEBASESYSTEM_API UAppGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsAutoSetupInputMappings;
    
public:
    UAppGameInstance();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGameStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LateInit();
    
};

