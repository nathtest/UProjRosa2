#include "G01BattleArtsIconDataAssets.h"

UG01BattleArtsIconDataAssets::UG01BattleArtsIconDataAssets() {
}

UTexture2D* UG01BattleArtsIconDataAssets::LoadIconTexture(EG01BattleArtsType Type) {
    return NULL;
}

FName UG01BattleArtsIconDataAssets::GetTextID(EG01BattleArtsType Type) {
    return NAME_None;
}

TSoftObjectPtr<UTexture2D> UG01BattleArtsIconDataAssets::GetIconTexture(EG01BattleArtsType Type) {
    return NULL;
}

TArray<TSoftObjectPtr<UTexture2D>> UG01BattleArtsIconDataAssets::GetAllIconTexture() {
    return TArray<TSoftObjectPtr<UTexture2D>>();
}


