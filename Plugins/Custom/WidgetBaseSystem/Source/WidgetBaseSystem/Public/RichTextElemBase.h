#pragma once
#include "CoreMinimal.h"
#include "Components/HorizontalBox.h" //CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=HorizontalBox -FallbackName=HorizontalBox
#include "RichTextElemBase.generated.h"

class URichTextElemBase;

UCLASS(Blueprintable)
class WIDGETBASESYSTEM_API URichTextElemBase : public UHorizontalBox {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URichTextElemBase* Prev;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URichTextElemBase* Next;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsRegistered;
    
public:
    URichTextElemBase();

};

