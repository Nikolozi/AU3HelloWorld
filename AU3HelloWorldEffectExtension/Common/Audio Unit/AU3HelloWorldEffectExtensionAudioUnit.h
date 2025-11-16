//
//  AU3HelloWorldEffectExtensionAudioUnit.h
//  AU3HelloWorldEffectExtension
//
//  Created by Nikolozi on 16.11.25.
//

#import <AudioToolbox/AudioToolbox.h>
#import <AVFoundation/AVFoundation.h>

@interface AU3HelloWorldEffectExtensionAudioUnit : AUAudioUnit
- (void)setupParameterTree:(AUParameterTree *)parameterTree;
@end
