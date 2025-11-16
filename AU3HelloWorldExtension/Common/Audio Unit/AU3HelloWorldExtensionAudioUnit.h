//
//  AU3HelloWorldExtensionAudioUnit.h
//  AU3HelloWorldExtension
//
//  Created by Nikolozi on 16.11.25.
//

#import <AudioToolbox/AudioToolbox.h>
#import <AVFoundation/AVFoundation.h>

@interface AU3HelloWorldExtensionAudioUnit : AUAudioUnit
- (void)setupParameterTree:(AUParameterTree *)parameterTree;
@end
