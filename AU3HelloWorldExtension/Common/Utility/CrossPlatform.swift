//
//  CrossPlatform.swift
//  AU3HelloWorldExtension
//
//  Created by Nikolozi on 16.11.25.
//

import Foundation
import SwiftUI

#if os(iOS)
typealias HostingController = UIHostingController
#elseif os(macOS)
typealias HostingController = NSHostingController

extension NSView {
	
	func bringSubviewToFront(_ view: NSView) {
		// This function is a no-opp for macOS
	}
}
#endif
