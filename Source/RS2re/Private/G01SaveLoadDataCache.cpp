#include "G01SaveLoadDataCache.h"

FG01SaveLoadDataCache::FG01SaveLoadDataCache() {
    this->LoadError = ESaveDataLoadError::NoError;
    this->SaveData = NULL;
}

