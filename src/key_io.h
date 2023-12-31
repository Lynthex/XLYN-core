// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2018 The Bitcoin Core developers
// Copyright (c) 2022 The LYNTHEX Core Developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef LYNTHEX_KEY_IO_H
#define LYNTHEX_KEY_IO_H

#include "chainparams.h"
#include "key.h"
#include "pubkey.h"
#include "script/standard.h"

#include <string>

namespace KeyIO {

    CKey DecodeSecret(const std::string &str);

    std::string EncodeSecret(const CKey &key);

    CExtKey DecodeExtKey(const std::string &str);

    std::string EncodeExtKey(const CExtKey &extkey);

    CExtPubKey DecodeExtPubKey(const std::string &str);

    std::string EncodeExtPubKey(const CExtPubKey &extkey);
}

#endif //LYNTHEX_KEY_IO_H
