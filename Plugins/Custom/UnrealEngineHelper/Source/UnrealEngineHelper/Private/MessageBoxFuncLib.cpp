#include "MessageBoxFuncLib.h"

UMessageBoxFuncLib::UMessageBoxFuncLib() {
}

TEnumAsByte<EAppReturnType::Type> UMessageBoxFuncLib::ShowMessageBoxYN(bool InExeption, const FString& InTitle, const FString& InMessage) {
    return EAppReturnType::No;
}

TEnumAsByte<EAppReturnType::Type> UMessageBoxFuncLib::ShowMessageBoxOkCancel(bool InExeption, const FString& InTitle, const FString& InMessage) {
    return EAppReturnType::No;
}

void UMessageBoxFuncLib::ShowMessageBoxOK(bool InExeption, const FString& InTitle, const FString& InMessage) {
}


