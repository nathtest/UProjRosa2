#include "G01EventUnitSimpleTalk.h"
#include "G01MsgSimpleUiContAccessor.h"
#include "G01TextManagerAccessor.h"

AG01EventUnitSimpleTalk::AG01EventUnitSimpleTalk(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SettingTable = NULL;
    this->DisplayPresetTable = NULL;
    this->MMessageSimpleUiAccessor = CreateDefaultSubobject<UG01MsgSimpleUiContAccessor>(TEXT("MessageSimpleUiAccessor"));
    this->TextManagerAccessor = CreateDefaultSubobject<UG01TextManagerAccessor>(TEXT("TextManagerAccessor"));
}

void AG01EventUnitSimpleTalk::OnUnregisterSimpleWindow(AActor* InUser) {
}


