//
//  LASApplication.m
//  LASKit
//
//  Copyright (c) 2015 c9iim. All rights reserved.
//

#import "LASKit.h"

@implementation LASApplication

SystemEventsApplication *SystemEventsInstance;
FinderApplication *FinderInstance;
iTunesApplication *iTunesInstance;

+ (SystemEventsApplication*)SystemEvents {
    if (!SystemEventsInstance) {
        SystemEventsInstance = [SBApplication applicationWithBundleIdentifier:@"com.apple.systemevents"];
    }
    return SystemEventsInstance;
}

+ (FinderApplication*)Finder {
    if (!FinderInstance) {
        FinderInstance = [SBApplication applicationWithBundleIdentifier:@"com.apple.finder"];
    }
    return FinderInstance;
}

+ (iTunesApplication*)iTunes {
    if (!iTunesInstance) {
        iTunesInstance = [SBApplication applicationWithBundleIdentifier:@"com.apple.itunes"];
    }
    return iTunesInstance;
}

@end


