//
//  AU3HelloWorldMIDIExtensionMainView.swift
//  AU3HelloWorldMIDIExtension
//
//  Created by Nikolozi on 16.11.25.
//

import SwiftUI

struct AU3HelloWorldMIDIExtensionMainView: View {
    var parameterTree: ObservableAUParameterGroup
    
    var body: some View {
        VStack {
            ParameterSlider(param: parameterTree.global.midiNoteNumber)
                .padding()
            MomentaryButton(
                "Play note",
                param: parameterTree.global.sendNote
            )
        }
    }
}
