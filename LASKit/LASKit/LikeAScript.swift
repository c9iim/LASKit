//
//  LikeAScript.swift
//  LASKit
//
//  Copyright (c) 2015 c9iim. All rights reserved.
//

import Cocoa
//import LASKit

public protocol LikeAScriptBaseProtocol {
    static func main()
    static func main(activationPolicy policy: NSApplicationActivationPolicy)
}

public class LikeAScript: NSObject, NSApplicationDelegate, LikeAScriptBaseProtocol {
    public class func main() {
        LikeAScript.main(activationPolicy: NSApplicationActivationPolicy.Accessory)
    }
    public class func main(activationPolicy policy: NSApplicationActivationPolicy) {
        let applicationDelegate = LikeAScript()
        let application = NSApplication.sharedApplication()
        application.setActivationPolicy(policy)
        application.delegate = applicationDelegate
        application.run()
    }
    public func activate() {
        NSApplication.sharedApplication().activateIgnoringOtherApps(true)
    }
    public func terminate() {
        NSRunningApplication.currentApplication().terminate()
    }
}
