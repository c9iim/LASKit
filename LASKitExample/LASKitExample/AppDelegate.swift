//
//  AppDelegate.swift
//  LASKitExample
//
//  Copyright (c) 2015年 c9iim. All rights reserved.
//

import Cocoa
import LASKit

@NSApplicationMain
class AppDelegate: NSObject, NSApplicationDelegate {
    
    var iTunes : iTunesApplication {
        get {
            return LASApplication.iTunes()
        }
    }
    
    var iTunes_playing : Bool {
        get {
            return iTunes.playerState.value == iTunesEPlSPlaying.value
        }
    }
    
    var iTunes_notPlaying : Bool {
        get {
            return !iTunes_playing
        }
    }
    
    func iTunes_runningCheck() {
        if iTunes.running {
            iTunes.run()
        }
    }
    
    func iTunes_displayTrackInfo() {
        let track: iTunesTrack = iTunes.currentTrack
        label.stringValue = "\(track.album) / \(track.name)"
    }
    
    func iTunes_playAndDisplayTrackInfo() {
        if iTunes_notPlaying {
            iTunes.playpause()
        }
        let track: iTunesTrack = iTunes.currentTrack
        label.stringValue = "\(track.album) / \(track.name)"
    }
    
    func iTunes_displayTrackInfoPauseInfo() {
        if iTunes_playing {
            iTunes_displayTrackInfo()
        } else {
            label.stringValue = "pause"
        }
    }

    @IBOutlet weak var window: NSWindow!
    @IBOutlet weak var label: NSTextField!
    
    @IBAction func preview(sender: NSButton) {
        iTunes_runningCheck()
        iTunes.backTrack()
        iTunes_playAndDisplayTrackInfo()
    }
    
    @IBAction func playpause(sender: NSButton) {
        iTunes_runningCheck()
        iTunes.playpause()
        iTunes_displayTrackInfoPauseInfo()
    }
    
    @IBAction func forward(sender: NSButton) {
        iTunes_runningCheck()
        iTunes.nextTrack()
        iTunes_playAndDisplayTrackInfo()
    }
    
    func applicationDidFinishLaunching(aNotification: NSNotification) {
        iTunes_displayTrackInfoPauseInfo()
    }
    
    func applicationWillTerminate(aNotification: NSNotification) {
        // Insert code here to tear down your application
    }
    
    func applicationShouldTerminateAfterLastWindowClosed(sender: NSApplication) -> Bool {
        return true
    }
    
}

