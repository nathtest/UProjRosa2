#pragma once
#include "CoreMinimal.h"
#include "GameLevelManagerObserverInf.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=GameLevelManagerObserverInf -FallbackName=GameLevelManagerObserverInf
#include "SequenceLoadControlComponent.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SequenceLoadControlComponent -FallbackName=SequenceLoadControlComponent
#include "G01GeneralLipPresetID.h"
#include "G01LipSyncLoadedRessources.h"
#include "G01VoiceLoadInfo.h"
#include "G01SequenceLoadComponent.generated.h"

class UG01BattleArtsManagerAccessor;
class UG01ItemManagerAccessor;
class UG01LipSyncManagerAccessor;
class UG01PartyManagerAccessor;
class UG01RoomManagerAccessor;
class UG01VisualActorCharacterSettings;
class UG01VisualActorCommonSettings;
class UG01VoiceManagerAccessor;
class UObserverSubjectComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01SequenceLoadComponent : public USequenceLoadControlComponent, public IGameLevelManagerObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UObserverSubjectComponent* ObserverSubject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01RoomManagerAccessor* RoomManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01LipSyncManagerAccessor* LipSyncManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01VoiceManagerAccessor* VoiceManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01PartyManagerAccessor* PartyManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01ItemManagerAccessor* ItemManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UG01VisualActorCommonSettings* VisualActorCommonSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UG01VisualActorCharacterSettings* CharacterSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01BattleArtsManagerAccessor* MArtsManagerAccessor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FG01GeneralLipPresetID> GeneralLipPresetIDs;
    
public:
    UG01SequenceLoadComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnVoiceLoadCompleted(const FG01VoiceLoadInfo& InInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnLoadCompletedVFX(int32 InRequestIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnLoadCompletedFX(int32 InRequestIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnLipAnimLoadCompleted(const FG01LipSyncLoadedRessources& InResource);
    
    UFUNCTION(BlueprintCallable)
    void OnGeneralLipAnimLoadCompleted(const FG01LipSyncLoadedRessources& InResource);
    

    // Fix for true pure virtual functions not being implemented
};

