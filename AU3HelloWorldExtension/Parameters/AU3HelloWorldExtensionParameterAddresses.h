//
//  AU3HelloWorldExtensionParameterAddresses.h
//  AU3HelloWorldExtension
//
//  Created by Nikolozi on 16.11.25.
//

#pragma once

#include <AudioToolbox/AUParameters.h>

#ifdef __cplusplus
namespace AU3HelloWorldExtensionParameterAddress {
#endif

typedef NS_ENUM(AUParameterAddress, AU3HelloWorldExtensionParameterAddress) {
    gain = 0
};

#ifdef __cplusplus
}
#endif
