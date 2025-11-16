//
//  AU3HelloWorldMIDIExtensionAudioUnit.h
//  AU3HelloWorldMIDIExtension
//
//  Created by Nikolozi on 16.11.25.
//

#import <AudioToolbox/AudioToolbox.h>
#import <AVFoundation/AVFoundation.h>

@interface AU3HelloWorldMIDIExtensionAudioUnit : AUAudioUnit
- (void)setupParameterTree:(AUParameterTree *)parameterTree;
@end
