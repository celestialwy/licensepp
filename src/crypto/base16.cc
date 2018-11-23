//
//  base16.cc
//  License++
//
//  Copyright © 2018-present Zuhd Web Services
//  https://zuhd.org
//
//  See https://github.com/zuhd-org/licensepp/blob/master/LICENSE 
//

#include "src/external/Ripe.h"
#include "src/crypto/base16.h"

using namespace licensepp;

std::string Base16::decode(const std::string& encoded)
{
    return Ripe::hexToString(encoded);
}

std::string Base16::encode(const std::string& raw)
{
    return Ripe::stringToHex(raw);
}
