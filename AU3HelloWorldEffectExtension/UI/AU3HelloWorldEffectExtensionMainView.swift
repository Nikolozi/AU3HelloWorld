//
//  AU3HelloWorldEffectExtensionMainView.swift
//  AU3HelloWorldEffectExtension
//
//  Created by Nikolozi on 16.11.25.
//

import SwiftUI

struct AU3HelloWorldEffectExtensionMainView: View {
    var parameterTree: ObservableAUParameterGroup

    var body: some View {
        ParameterSlider(param: parameterTree.global.gain)
    }
}
