//
//  AU3HelloWorldEffectExtensionParameterAddresses.h
//  AU3HelloWorldEffectExtension
//
//  Created by Nikolozi on 16.11.25.
//

#pragma once

#include <AudioToolbox/AUParameters.h>

#ifdef __cplusplus
namespace AU3HelloWorldEffectExtensionParameterAddress {
#endif

typedef NS_ENUM(AUParameterAddress, AU3HelloWorldEffectExtensionParameterAddress) {
    gain = 0
};

#ifdef __cplusplus
}
#endif
