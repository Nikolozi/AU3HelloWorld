//
//  AU3HelloWorldMIDIExtensionParameterAddresses.h
//  AU3HelloWorldMIDIExtension
//
//  Created by Nikolozi on 16.11.25.
//

#pragma once

#include <AudioToolbox/AUParameters.h>

#ifdef __cplusplus
namespace AU3HelloWorldMIDIExtensionParameterAddress {
#endif

typedef NS_ENUM(AUParameterAddress, AU3HelloWorldMIDIExtensionParameterAddress) {
    sendNote = 0,
    midiNoteNumber = 1
};

#ifdef __cplusplus
}
#endif
