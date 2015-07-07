//
//  main.swift
//  LASKitInterpreter
//
//  Copyright (c) 2015 c9iim. All rights reserved.
//

import Cocoa
import LASKit

let iTunes = LASApplication.iTunes()

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

if iTunes.running {
    iTunes.run()
}

if iTunes_notPlaying {
    iTunes.playpause()
}

let currentTrack = iTunes.currentTrack
println("\(currentTrack.album) / \(currentTrack.name)")

