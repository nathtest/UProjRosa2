#include "G01HudInformationDataInfoStruct.h"

FG01HudInformationDataInfoStruct::FG01HudInformationDataInfoStruct() {
    this->IconTexture = NULL;
    this->IconSubTexture = NULL;
    this->CaptionTexture = NULL;
    this->Type = EG01HudInformationTypeEnum::FacilityBuild;
    this->NoticeType = EG01HudInformationNoticeTypeEnum::Developable;
    this->TextureType = EG01BattleArtsType::None;
}

