//
//  AU3HelloWorldApp.swift
//  AU3HelloWorld
//
//  Created by Nikolozi on 16.11.25.
//

import CoreMIDI
import SwiftUI

@main
struct AU3HelloWorldApp: App {
    @ObservedObject private var hostModel = AudioUnitHostModel()

    var body: some Scene {
        WindowGroup {
            ContentView(hostModel: hostModel)
        }
    }
}
