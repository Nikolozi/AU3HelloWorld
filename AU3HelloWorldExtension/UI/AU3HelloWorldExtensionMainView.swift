//
//  AU3HelloWorldExtensionMainView.swift
//  AU3HelloWorldExtension
//
//  Created by Nikolozi on 16.11.25.
//

import SwiftUI

struct AU3HelloWorldExtensionMainView: View {
    var parameterTree: ObservableAUParameterGroup
    
    var body: some View {
        ParameterSlider(param: parameterTree.global.gain)
    }
}
