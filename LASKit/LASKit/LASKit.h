//
//  LASKit.h
//  LASKit
//
//  Copyright (c) 2015 c9iim. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <ScriptingBridge/ScriptingBridge.h>

//! Project version number for LASKit.
FOUNDATION_EXPORT double LASKitVersionNumber;

//! Project version string for LASKit.
FOUNDATION_EXPORT const unsigned char LASKitVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <LASKit/PublicHeader.h>


/*
 * SystemEvents.h
 */

@class SystemEventsApplication, SystemEventsDocument, SystemEventsWindow, SystemEventsUser, SystemEventsAppearancePreferencesObject, SystemEventsCDAndDVDPreferencesObject, SystemEventsInsertionPreference, SystemEventsDesktop, SystemEventsDockPreferencesObject, SystemEventsLoginItem, SystemEventsConfiguration, SystemEventsInterface, SystemEventsLocation, SystemEventsNetworkPreferencesObject, SystemEventsService, SystemEventsScreenSaver, SystemEventsScreenSaverPreferencesObject, SystemEventsSecurityPreferencesObject, SystemEventsDiskItem, SystemEventsAlias, SystemEventsDisk, SystemEventsDomain, SystemEventsClassicDomainObject, SystemEventsFile, SystemEventsFilePackage, SystemEventsFolder, SystemEventsLocalDomainObject, SystemEventsNetworkDomainObject, SystemEventsSystemDomainObject, SystemEventsUserDomainObject, SystemEventsFolderAction, SystemEventsScript, SystemEventsAction, SystemEventsAttribute, SystemEventsUIElement, SystemEventsBrowser, SystemEventsBusyIndicator, SystemEventsButton, SystemEventsCheckbox, SystemEventsColorWell, SystemEventsColumn, SystemEventsComboBox, SystemEventsDrawer, SystemEventsGroup, SystemEventsGrowArea, SystemEventsImage, SystemEventsIncrementor, SystemEventsList, SystemEventsMenu, SystemEventsMenuBar, SystemEventsMenuBarItem, SystemEventsMenuButton, SystemEventsMenuItem, SystemEventsOutline, SystemEventsPopOver, SystemEventsPopUpButton, SystemEventsProcess, SystemEventsApplicationProcess, SystemEventsDeskAccessoryProcess, SystemEventsProgressIndicator, SystemEventsRadioButton, SystemEventsRadioGroup, SystemEventsRelevanceIndicator, SystemEventsRow, SystemEventsScrollArea, SystemEventsScrollBar, SystemEventsSheet, SystemEventsSlider, SystemEventsSplitter, SystemEventsSplitterGroup, SystemEventsStaticText, SystemEventsTabGroup, SystemEventsTable, SystemEventsTextArea, SystemEventsTextField, SystemEventsToolbar, SystemEventsValueIndicator, SystemEventsPropertyListFile, SystemEventsData, SystemEventsPropertyListItem, SystemEventsAnnotation, SystemEventsQuickTimeData, SystemEventsAudioData, SystemEventsMovieData, SystemEventsQuickTimeFile, SystemEventsAudioFile, SystemEventsMovieFile, SystemEventsTrack, SystemEventsXMLAttribute, SystemEventsXMLData, SystemEventsXMLElement, SystemEventsXMLFile, SystemEventsPrintSettings, SystemEventsScriptingClass, SystemEventsScriptingCommand, SystemEventsScriptingDefinitionObject, SystemEventsScriptingElement, SystemEventsScriptingEnumeration, SystemEventsScriptingEnumerator, SystemEventsScriptingParameter, SystemEventsScriptingProperty, SystemEventsScriptingResultObject, SystemEventsScriptingSuite;

enum SystemEventsSaveOptions {
    SystemEventsSaveOptionsYes = 'yes ' /* Save the file. */,
    SystemEventsSaveOptionsNo = 'no  ' /* Do not save the file. */,
    SystemEventsSaveOptionsAsk = 'ask ' /* Ask the user whether or not to save the file. */
};
typedef enum SystemEventsSaveOptions SystemEventsSaveOptions;

enum SystemEventsPrintingErrorHandling {
    SystemEventsPrintingErrorHandlingStandard = 'lwst' /* Standard PostScript error handling */,
    SystemEventsPrintingErrorHandlingDetailed = 'lwdt' /* print a detailed report of PostScript errors */
};
typedef enum SystemEventsPrintingErrorHandling SystemEventsPrintingErrorHandling;

enum SystemEventsSaveableFileFormat {
    SystemEventsSaveableFileFormatText = 'ctxt' /* Text File Format */
};
typedef enum SystemEventsSaveableFileFormat SystemEventsSaveableFileFormat;

enum SystemEventsScrollPageBehaviors {
    SystemEventsScrollPageBehaviorsJumpToHere = 'tohr' /* jump to here */,
    SystemEventsScrollPageBehaviorsJumpToNextPage = 'nxpg' /* jump to next page */
};
typedef enum SystemEventsScrollPageBehaviors SystemEventsScrollPageBehaviors;

enum SystemEventsFontSmoothingStyles {
    SystemEventsFontSmoothingStylesAutomatic = 'autm' /* automatic */,
    SystemEventsFontSmoothingStylesLight = 'lite' /* light */,
    SystemEventsFontSmoothingStylesMedium = 'medi' /* medium */,
    SystemEventsFontSmoothingStylesStandard = 'stnd' /* standard */,
    SystemEventsFontSmoothingStylesStrong = 'strg' /* strong */
};
typedef enum SystemEventsFontSmoothingStyles SystemEventsFontSmoothingStyles;

enum SystemEventsAppearances {
    SystemEventsAppearancesBlue = 'blue' /* blue */,
    SystemEventsAppearancesGraphite = 'grft' /* graphite */
};
typedef enum SystemEventsAppearances SystemEventsAppearances;

enum SystemEventsHighlightColors {
    SystemEventsHighlightColorsBlue = 'blue' /* blue */,
    SystemEventsHighlightColorsGold = 'gold' /* gold */,
    SystemEventsHighlightColorsGraphite = 'grft' /* graphite */,
    SystemEventsHighlightColorsGreen = 'gren' /* green */,
    SystemEventsHighlightColorsOrange = 'orng' /* orange */,
    SystemEventsHighlightColorsPurple = 'prpl' /* purple */,
    SystemEventsHighlightColorsRed = 'red ' /* red */,
    SystemEventsHighlightColorsSilver = 'slvr' /* silver */
};
typedef enum SystemEventsHighlightColors SystemEventsHighlightColors;

enum SystemEventsDhac {
    SystemEventsDhacAskWhatToDo = 'dhas' /* ask what to do */,
    SystemEventsDhacIgnore = 'dhig' /* ignore */,
    SystemEventsDhacOpenApplication = 'dhap' /* open application */,
    SystemEventsDhacRunAScript = 'dhrs' /* run a script */
};
typedef enum SystemEventsDhac SystemEventsDhac;

enum SystemEventsDpls {
    SystemEventsDplsBottom = 'bott' /* bottom */,
    SystemEventsDplsLeft = 'left' /* left */,
    SystemEventsDplsRight = 'righ' /* right */
};
typedef enum SystemEventsDpls SystemEventsDpls;

enum SystemEventsDpef {
    SystemEventsDpefGenie = 'geni' /* genie */,
    SystemEventsDpefScale = 'scal' /* scale */
};
typedef enum SystemEventsDpef SystemEventsDpef;

enum SystemEventsEdfm {
    SystemEventsEdfmApplePhotoFormat = 'dfph' /* Apple Photo format */,
    SystemEventsEdfmAppleShareFormat = 'dfas' /* AppleShare format */,
    SystemEventsEdfmAudioFormat = 'dfau' /* audio format */,
    SystemEventsEdfmHighSierraFormat = 'dfhs' /* High Sierra format */,
    SystemEventsEdfmISO9660Format = 'df96' /* ISO 9660 format */,
    SystemEventsEdfmMacOSExtendedFormat = 'dfh+' /* Mac OS Extended format */,
    SystemEventsEdfmMacOSFormat = 'dfhf' /* Mac OS format */,
    SystemEventsEdfmMSDOSFormat = 'dfms' /* MSDOS format */,
    SystemEventsEdfmNFSFormat = 'dfnf' /* NFS format */,
    SystemEventsEdfmProDOSFormat = 'dfpr' /* ProDOS format */,
    SystemEventsEdfmQuickTakeFormat = 'dfqt' /* QuickTake format */,
    SystemEventsEdfmUDFFormat = 'dfud' /* UDF format */,
    SystemEventsEdfmUFSFormat = 'dfuf' /* UFS format */,
    SystemEventsEdfmUnknownFormat = 'df$$' /* unknown format */,
    SystemEventsEdfmWebDAVFormat = 'dfwd' /* WebDAV format */
};
typedef enum SystemEventsEdfm SystemEventsEdfm;

enum SystemEventsEMds {
    SystemEventsEMdsCommandDown = 'Kcmd' /* command down */,
    SystemEventsEMdsControlDown = 'Kctl' /* control down */,
    SystemEventsEMdsOptionDown = 'Kopt' /* option down */,
    SystemEventsEMdsShiftDown = 'Ksft' /* shift down */
};
typedef enum SystemEventsEMds SystemEventsEMds;

enum SystemEventsEMky {
    SystemEventsEMkyCommand = 'eCmd' /* command */,
    SystemEventsEMkyControl = 'eCnt' /* control */,
    SystemEventsEMkyOption = 'eOpt' /* option */,
    SystemEventsEMkyShift = 'eSft' /* shift */
};
typedef enum SystemEventsEMky SystemEventsEMky;

enum SystemEventsPrmd {
    SystemEventsPrmdNormal = 'norm' /* normal */,
    SystemEventsPrmdSlideShow = 'pmss' /* slide show */
};
typedef enum SystemEventsPrmd SystemEventsPrmd;

enum SystemEventsMvsz {
    SystemEventsMvszCurrent = 'cust' /* current */,
    SystemEventsMvszDouble = 'doub' /* double */,
    SystemEventsMvszHalf = 'half' /* half */,
    SystemEventsMvszNormal = 'norm' /* normal */,
    SystemEventsMvszScreen = 'fits' /* screen */
};
typedef enum SystemEventsMvsz SystemEventsMvsz;

enum SystemEventsEnum {
    SystemEventsEnumStandard = 'lwst' /* Standard PostScript error handling */,
    SystemEventsEnumDetailed = 'lwdt' /* print a detailed report of PostScript errors */
};
typedef enum SystemEventsEnum SystemEventsEnum;

enum SystemEventsAccs {
    SystemEventsAccsNone = 'none' /* none */,
    SystemEventsAccsReadOnly = 'read' /* read only */,
    SystemEventsAccsReadWrite = 'rdwr' /* read write */,
    SystemEventsAccsWriteOnly = 'writ' /* write only */
};
typedef enum SystemEventsAccs SystemEventsAccs;



/*
 * Standard Suite
 */

// The application's top-level scripting object.
@interface SystemEventsApplication : SBApplication

- (SBElementArray *) documents;
- (SBElementArray *) windows;

@property (copy, readonly) NSString *name;  // The name of the application.
@property (readonly) BOOL frontmost;  // Is this the active application?
@property (copy, readonly) NSString *version;  // The version number of the application.

- (id) open:(id)x;  // Open a document.
- (void) print:(id)x withProperties:(SystemEventsPrintSettings *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) quitSaving:(SystemEventsSaveOptions)saving;  // Quit the application.
- (BOOL) exists:(id)x;  // Verify that an object exists.
- (void) abortTransaction;  // Discard the results of a bounded update session with one or more files.
- (NSInteger) beginTransaction;  // Begin a bounded update session with one or more files.
- (void) endTransaction;  // Apply the results of a bounded update session with one or more files.
- (id) move:(id)x to:(id)to;  // Move disk item(s) to a new location.

// MARK: エラーの為、コメントに
//- (SystemEventsFile *) open:(id)x;  // Open disk item(s) with the appropriate application.

- (void) logOut;  // Log out the current user
- (void) restartStateSavingPreference:(BOOL)stateSavingPreference;  // Restart the computer
- (void) shutDownStateSavingPreference:(BOOL)stateSavingPreference;  // Shut Down the computer
- (void) sleep;  // Put the computer to sleep
- (id) clickAt:(NSArray *)at;  // cause the target process to behave as if the UI element were clicked
- (void) keyCode:(id)x using:(id)using_;  // cause the target process to behave as if key codes were entered
- (void) keystroke:(NSString *)x using:(id)using_;  // cause the target process to behave as if keystrokes were entered

@end

// A document.
@interface SystemEventsDocument : SBObject

@property (copy, readonly) NSString *name;  // Its name.
@property (readonly) BOOL modified;  // Has it been modified since the last save?
@property (copy, readonly) SystemEventsFile *file;  // Its location on disk, if it has one.

- (void) closeSaving:(SystemEventsSaveOptions)saving savingIn:(SystemEventsFile *)savingIn;  // Close a document.
- (void) saveIn:(SystemEventsFile *)in_ as:(SystemEventsSaveableFileFormat)as;  // Save a document.
- (void) printWithProperties:(SystemEventsPrintSettings *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy an object.
- (void) moveTo:(SBObject *)to;  // Move an object to a new location.

@end

// A window.
@interface SystemEventsWindow : SBObject

@property (copy, readonly) NSString *name;  // The title of the window.
- (NSInteger) id;  // The unique identifier of the window.
@property NSInteger index;  // The index of the window, ordered front to back.
@property NSRect bounds;  // The bounding rectangle of the window.
@property (readonly) BOOL closeable;  // Does the window have a close button?
@property (readonly) BOOL miniaturizable;  // Does the window have a minimize button?
@property BOOL miniaturized;  // Is the window minimized right now?
@property (readonly) BOOL resizable;  // Can the window be resized?
@property BOOL visible;  // Is the window visible right now?
@property (readonly) BOOL zoomable;  // Does the window have a zoom button?
@property BOOL zoomed;  // Is the window zoomed right now?
@property (copy, readonly) SystemEventsDocument *document;  // The document whose contents are displayed in the window.

- (void) closeSaving:(SystemEventsSaveOptions)saving savingIn:(SystemEventsFile *)savingIn;  // Close a document.
- (void) saveIn:(SystemEventsFile *)in_ as:(SystemEventsSaveableFileFormat)as;  // Save a document.
- (void) printWithProperties:(SystemEventsPrintSettings *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy an object.
- (void) moveTo:(SBObject *)to;  // Move an object to a new location.

@end



/*
 * System Events Suite
 */

// The System Events application
@interface SystemEventsApplication (SystemEventsSuite)

@property NSInteger quitDelay;  // the time in seconds the application will idle before quitting; if set to zero, idle time will not cause the application to quit
@property (readonly) BOOL scriptMenuEnabled;  // Is the Script menu installed in the menu bar?

@end



/*
 * Accounts Suite
 */

// The System Events application
@interface SystemEventsApplication (AccountsSuite)

- (SBElementArray *) users;

@property (copy, readonly) SystemEventsUser *currentUser;  // the currently logged in user

@end

// user account
@interface SystemEventsUser : SBObject

@property (copy, readonly) NSString *fullName;  // user's full name
@property (copy, readonly) id homeDirectory;  // path to user's home directory
@property (copy, readonly) NSString *name;  // user's short name
@property (copy) id picturePath;  // path to user's picture. Can be set for current user only!

- (void) closeSaving:(SystemEventsSaveOptions)saving savingIn:(SystemEventsFile *)savingIn;  // Close a document.
- (void) saveIn:(SystemEventsFile *)in_ as:(SystemEventsSaveableFileFormat)as;  // Save a document.
- (void) printWithProperties:(SystemEventsPrintSettings *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy an object.
- (void) moveTo:(SBObject *)to;  // Move an object to a new location.

@end



/*
 * Appearance Suite
 */

// The System Events application
@interface SystemEventsApplication (AppearanceSuite)

@property (copy) SystemEventsAppearancePreferencesObject *appearancePreferences;  // a collection of appearance preferences

@end

// A collection of appearance preferences
@interface SystemEventsAppearancePreferencesObject : SBObject

@property SystemEventsAppearances appearance;  // the overall look of buttons, menus and windows
@property BOOL fontSmoothing;  // Is font smoothing on?
@property SystemEventsFontSmoothingStyles fontSmoothingStyle;  // the method used for smoothing fonts
@property (copy) id highlightColor;  // color used for hightlighting selected text and lists
@property NSInteger recentApplicationsLimit;  // the number of recent applications to track
@property NSInteger recentDocumentsLimit;  // the number of recent documents to track
@property NSInteger recentServersLimit;  // the number of recent servers to track
@property SystemEventsScrollPageBehaviors scrollBarAction;  // the action performed by clicking the scroll bar
@property BOOL smoothScrolling;  // Is smooth scrolling used?
@property BOOL darkMode;  // use dark menu bar and dock

- (void) closeSaving:(SystemEventsSaveOptions)saving savingIn:(SystemEventsFile *)savingIn;  // Close a document.
- (void) saveIn:(SystemEventsFile *)in_ as:(SystemEventsSaveableFileFormat)as;  // Save a document.
- (void) printWithProperties:(SystemEventsPrintSettings *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy an object.
- (void) moveTo:(SBObject *)to;  // Move an object to a new location.

@end



/*
 * CD and DVD Preferences Suite
 */

// The System Events application
@interface SystemEventsApplication (CDAndDVDPreferencesSuite)

@property (copy) SystemEventsCDAndDVDPreferencesObject *CDAndDVDPreferences;  // the preferences for the current user when a CD or DVD is inserted

@end

// user's CD and DVD insertion preferences
@interface SystemEventsCDAndDVDPreferencesObject : SBObject

@property (copy, readonly) SystemEventsInsertionPreference *blankCD;  // the blank CD insertion preference
@property (copy, readonly) SystemEventsInsertionPreference *blankDVD;  // the blank DVD insertion preference
@property (copy, readonly) SystemEventsInsertionPreference *blankBD;  // the blank BD insertion preference
@property (copy, readonly) SystemEventsInsertionPreference *musicCD;  // the music CD insertion preference
@property (copy, readonly) SystemEventsInsertionPreference *pictureCD;  // the picture CD insertion preference
@property (copy, readonly) SystemEventsInsertionPreference *videoDVD;  // the video DVD insertion preference
@property (copy, readonly) SystemEventsInsertionPreference *videoBD;  // the video BD insertion preference

- (void) closeSaving:(SystemEventsSaveOptions)saving savingIn:(SystemEventsFile *)savingIn;  // Close a document.
- (void) saveIn:(SystemEventsFile *)in_ as:(SystemEventsSaveableFileFormat)as;  // Save a document.
- (void) printWithProperties:(SystemEventsPrintSettings *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy an object.
- (void) moveTo:(SBObject *)to;  // Move an object to a new location.

@end

// a specific insertion preference
@interface SystemEventsInsertionPreference : SBObject

@property (copy) id customApplication;  // application to launch or activate on the insertion of media
@property (copy) id customScript;  // AppleScript to launch or activate on the insertion of media
@property SystemEventsDhac insertionAction;  // action to perform on media insertion

- (void) closeSaving:(SystemEventsSaveOptions)saving savingIn:(SystemEventsFile *)savingIn;  // Close a document.
- (void) saveIn:(SystemEventsFile *)in_ as:(SystemEventsSaveableFileFormat)as;  // Save a document.
- (void) printWithProperties:(SystemEventsPrintSettings *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy an object.
- (void) moveTo:(SBObject *)to;  // Move an object to a new location.

@end



/*
 * Desktop Suite
 */

// The System Events application
@interface SystemEventsApplication (DesktopSuite)

- (SBElementArray *) desktops;

@property (copy, readonly) SystemEventsDesktop *currentDesktop;  // the primary desktop

@end

// desktop picture settings
@interface SystemEventsDesktop : SBObject

@property (copy, readonly) NSString *name;  // name of the desktop
- (NSInteger) id;  // unique identifier of the desktop
@property double changeInterval;  // number of seconds to wait between changing the desktop picture
@property (copy, readonly) NSString *displayName;  // name of display on which this desktop appears
@property (copy) id picture;  // path to file used as desktop picture
@property NSInteger pictureRotation;  // never, using interval, using login, after sleep
@property (copy) id picturesFolder;  // path to folder containing pictures for changing desktop background
@property BOOL randomOrder;  // turn on for random ordering of changing desktop pictures
@property BOOL translucentMenuBar;  // indicates whether the menu bar is translucent

- (void) closeSaving:(SystemEventsSaveOptions)saving savingIn:(SystemEventsFile *)savingIn;  // Close a document.
- (void) saveIn:(SystemEventsFile *)in_ as:(SystemEventsSaveableFileFormat)as;  // Save a document.
- (void) printWithProperties:(SystemEventsPrintSettings *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy an object.
- (void) moveTo:(SBObject *)to;  // Move an object to a new location.

@end



/*
 * Dock Preferences Suite
 */

// The System Events application
@interface SystemEventsApplication (DockPreferencesSuite)

@property (copy) SystemEventsDockPreferencesObject *dockPreferences;  // the preferences for the current user's dock

@end

// user's dock preferences
@interface SystemEventsDockPreferencesObject : SBObject

@property BOOL animate;  // is the animation of opening applications on or off?
@property BOOL autohide;  // is autohiding the dock on or off?
@property double dockSize;  // size/height of the items (between 0.0 (minimum) and 1.0 (maximum))
@property BOOL magnification;  // is magnification on or off?
@property double magnificationSize;  // maximum magnification size when magnification is on (between 0.0 (minimum) and 1.0 (maximum))
@property SystemEventsDpef minimizeEffect;  // minimization effect
@property SystemEventsDpls screenEdge;  // location on screen

- (void) closeSaving:(SystemEventsSaveOptions)saving savingIn:(SystemEventsFile *)savingIn;  // Close a document.
- (void) saveIn:(SystemEventsFile *)in_ as:(SystemEventsSaveableFileFormat)as;  // Save a document.
- (void) printWithProperties:(SystemEventsPrintSettings *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy an object.
- (void) moveTo:(SBObject *)to;  // Move an object to a new location.

@end



/*
 * Login Items Suite
 */

// The System Events application
@interface SystemEventsApplication (LoginItemsSuite)

- (SBElementArray *) loginItems;

@end

// an item to be launched or opened at login
@interface SystemEventsLoginItem : SBObject

@property BOOL hidden;  // Is the Login Item hidden when launched?
@property (copy, readonly) NSString *kind;  // the file type of the Login Item
@property (copy, readonly) NSString *name;  // the name of the Login Item
@property (copy, readonly) NSString *path;  // the file system path to the Login Item

- (void) closeSaving:(SystemEventsSaveOptions)saving savingIn:(SystemEventsFile *)savingIn;  // Close a document.
- (void) saveIn:(SystemEventsFile *)in_ as:(SystemEventsSaveableFileFormat)as;  // Save a document.
- (void) printWithProperties:(SystemEventsPrintSettings *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy an object.
- (void) moveTo:(SBObject *)to;  // Move an object to a new location.

@end



/*
 * Network Preferences Suite
 */

// The System Events application
@interface SystemEventsApplication (NetworkPreferencesSuite)

@property (copy) SystemEventsNetworkPreferencesObject *networkPreferences;  // the preferences for the current user's network

@end

// A collection of settings for configuring a connection
@interface SystemEventsConfiguration : SBObject

@property (copy) NSString *accountName;  // the name used to authenticate
@property (readonly) BOOL connected;  // Is the configuration connected?
- (NSString *) id;  // the unique identifier for the configuration
@property (copy, readonly) NSString *name;  // the name of the configuration

- (void) closeSaving:(SystemEventsSaveOptions)saving savingIn:(SystemEventsFile *)savingIn;  // Close a document.
- (void) saveIn:(SystemEventsFile *)in_ as:(SystemEventsSaveableFileFormat)as;  // Save a document.
- (void) printWithProperties:(SystemEventsPrintSettings *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy an object.
- (void) moveTo:(SBObject *)to;  // Move an object to a new location.
- (SystemEventsConfiguration *) connect;  // connect a configuration or service
- (SystemEventsConfiguration *) disconnect;  // disconnect a configuration or service

@end

// A collection of settings for a network interface
@interface SystemEventsInterface : SBObject

@property BOOL automatic;  // configure the interface speed, duplex, and mtu automatically?
@property (copy) NSString *duplex;  // the duplex setting  half | full | full with flow control
- (NSString *) id;  // the unique identifier for the interface
@property (copy, readonly) NSString *kind;  // the type of interface
@property (copy, readonly) NSString *MACAddress;  // the MAC address for the interface
@property NSInteger mtu;  // the packet size
@property (copy, readonly) NSString *name;  // the name of the interface
@property NSInteger speed;  // ethernet speed 10 | 100 | 1000

- (void) closeSaving:(SystemEventsSaveOptions)saving savingIn:(SystemEventsFile *)savingIn;  // Close a document.
- (void) saveIn:(SystemEventsFile *)in_ as:(SystemEventsSaveableFileFormat)as;  // Save a document.
- (void) printWithProperties:(SystemEventsPrintSettings *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy an object.
- (void) moveTo:(SBObject *)to;  // Move an object to a new location.

@end

// A set of services
@interface SystemEventsLocation : SBObject

- (SBElementArray *) services;

- (NSString *) id;  // the unique identifier for the location
@property (copy) NSString *name;  // the name of the location

- (void) closeSaving:(SystemEventsSaveOptions)saving savingIn:(SystemEventsFile *)savingIn;  // Close a document.
- (void) saveIn:(SystemEventsFile *)in_ as:(SystemEventsSaveableFileFormat)as;  // Save a document.
- (void) printWithProperties:(SystemEventsPrintSettings *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy an object.
- (void) moveTo:(SBObject *)to;  // Move an object to a new location.

@end

// the preferences for the current user's network
@interface SystemEventsNetworkPreferencesObject : SBObject

- (SBElementArray *) interfaces;
- (SBElementArray *) locations;
- (SBElementArray *) services;

@property (copy) SystemEventsLocation *currentLocation;  // the current location

- (void) closeSaving:(SystemEventsSaveOptions)saving savingIn:(SystemEventsFile *)savingIn;  // Close a document.
- (void) saveIn:(SystemEventsFile *)in_ as:(SystemEventsSaveableFileFormat)as;  // Save a document.
- (void) printWithProperties:(SystemEventsPrintSettings *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy an object.
- (void) moveTo:(SBObject *)to;  // Move an object to a new location.

@end

// A collection of settings for a network service
@interface SystemEventsService : SBObject

- (SBElementArray *) configurations;

@property (readonly) BOOL active;  // Is the service active?
@property (copy) SystemEventsConfiguration *currentConfiguration;  // the currently selected configuration
- (NSString *) id;  // the unique identifier for the service
@property (copy, readonly) SystemEventsInterface *interface;  // the interface the service is built on
@property (readonly) NSInteger kind;  // the type of service
@property (copy) NSString *name;  // the name of the service

- (void) closeSaving:(SystemEventsSaveOptions)saving savingIn:(SystemEventsFile *)savingIn;  // Close a document.
- (void) saveIn:(SystemEventsFile *)in_ as:(SystemEventsSaveableFileFormat)as;  // Save a document.
- (void) printWithProperties:(SystemEventsPrintSettings *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy an object.
- (void) moveTo:(SBObject *)to;  // Move an object to a new location.
- (SystemEventsConfiguration *) connect;  // connect a configuration or service
- (SystemEventsConfiguration *) disconnect;  // disconnect a configuration or service

@end



/*
 * Screen Saver Suite
 */

// The System Events application
@interface SystemEventsApplication (ScreenSaverSuite)

- (SBElementArray *) screenSavers;

@property (copy) SystemEventsScreenSaver *currentScreenSaver;  // the currently selected screen saver
@property (copy) SystemEventsScreenSaverPreferencesObject *screenSaverPreferences;  // the preferences common to all screen savers

@end

// an installed screen saver
@interface SystemEventsScreenSaver : SBObject

@property (copy, readonly) NSString *displayedName;  // name of the screen saver module as displayed to the user
@property (copy, readonly) NSString *name;  // name of the screen saver module to be displayed
@property (copy, readonly) SystemEventsAlias *path;  // path to the screen saver module
@property (copy) NSString *pictureDisplayStyle;  // effect to use when displaying picture-based screen savers (slideshow, collage, or mosaic)

- (void) closeSaving:(SystemEventsSaveOptions)saving savingIn:(SystemEventsFile *)savingIn;  // Close a document.
- (void) saveIn:(SystemEventsFile *)in_ as:(SystemEventsSaveableFileFormat)as;  // Save a document.
- (void) printWithProperties:(SystemEventsPrintSettings *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy an object.
- (void) moveTo:(SBObject *)to;  // Move an object to a new location.
- (void) start;  // start the screen saver
- (void) stop;  // stop the screen saver

@end

// screen saver settings
@interface SystemEventsScreenSaverPreferencesObject : SBObject

@property NSInteger delayInterval;  // number of seconds of idle time before the screen saver starts; zero for never
@property BOOL mainScreenOnly;  // should the screen saver be shown only on the main screen?
@property (readonly) BOOL running;  // is the screen saver running?
@property BOOL showClock;  // should a clock appear over the screen saver?

- (void) closeSaving:(SystemEventsSaveOptions)saving savingIn:(SystemEventsFile *)savingIn;  // Close a document.
- (void) saveIn:(SystemEventsFile *)in_ as:(SystemEventsSaveableFileFormat)as;  // Save a document.
- (void) printWithProperties:(SystemEventsPrintSettings *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy an object.
- (void) moveTo:(SBObject *)to;  // Move an object to a new location.
- (void) start;  // start the screen saver
- (void) stop;  // stop the screen saver

@end



/*
 * Audio File Suite
 */

// The System Events application
@interface SystemEventsApplication (AudioFileSuite)

- (SBElementArray *) audioDatas;
- (SBElementArray *) audioFiles;

@end



/*
 * Security Suite
 */

// The System Events application
@interface SystemEventsApplication (SecuritySuite)

@property (copy) SystemEventsSecurityPreferencesObject *securityPreferences;  // a collection of security preferences

@end

// a collection of security preferences
@interface SystemEventsSecurityPreferencesObject : SBObject

@property BOOL automaticLogin;  // Is automatic login allowed?
@property BOOL logOutWhenInactive;  // Will the computer log out when inactive?
@property NSInteger logOutWhenInactiveInterval;  // The interval of inactivity after which the computer will log out
@property BOOL requirePasswordToUnlock;  // Is a password required to unlock secure preferences?
@property BOOL requirePasswordToWake;  // Is a password required to wake the computer from sleep or screen saver?
@property BOOL secureVirtualMemory;  // Is secure virtual memory being used?

- (void) closeSaving:(SystemEventsSaveOptions)saving savingIn:(SystemEventsFile *)savingIn;  // Close a document.
- (void) saveIn:(SystemEventsFile *)in_ as:(SystemEventsSaveableFileFormat)as;  // Save a document.
- (void) printWithProperties:(SystemEventsPrintSettings *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy an object.
- (void) moveTo:(SBObject *)to;  // Move an object to a new location.

@end



/*
 * Disk-Folder-File Suite
 */

// The Disk-Folder-File specific extensions to the application
@interface SystemEventsApplication (DiskFolderFileSuite)

- (SBElementArray *) aliases;
- (SBElementArray *) disks;
- (SBElementArray *) diskItems;
- (SBElementArray *) domains;
- (SBElementArray *) files;
- (SBElementArray *) filePackages;
- (SBElementArray *) folders;

@property (copy, readonly) SystemEventsFolder *applicationSupportFolder;  // The Application Support folder
@property (copy, readonly) SystemEventsFolder *applicationsFolder;  // The user's Applications folder
@property (copy, readonly) SystemEventsClassicDomainObject *ClassicDomain;  // the collection of folders belonging to the Classic System
@property (copy, readonly) SystemEventsFolder *desktopFolder;  // The user's Desktop folder
@property (copy, readonly) SystemEventsFolder *desktopPicturesFolder;  // The Desktop Pictures folder
@property (copy, readonly) SystemEventsFolder *documentsFolder;  // The user's Documents folder
@property (copy, readonly) SystemEventsFolder *downloadsFolder;  // The user's Downloads folder
@property (copy, readonly) SystemEventsFolder *favoritesFolder;  // The user's Favorites folder
@property (copy, readonly) SystemEventsFolder *FolderActionScriptsFolder;  // The user's Folder Action Scripts folder
@property (copy, readonly) SystemEventsFolder *fontsFolder;  // The Fonts folder
@property (copy, readonly) SystemEventsFolder *homeFolder;  // The Home folder of the currently logged in user
@property (copy, readonly) SystemEventsFolder *libraryFolder;  // The Library folder
@property (copy, readonly) SystemEventsLocalDomainObject *localDomain;  // the collection of folders residing on the Local machine
@property (copy, readonly) SystemEventsFolder *moviesFolder;  // The user's Movies folder
@property (copy, readonly) SystemEventsFolder *musicFolder;  // The user's Music folder
@property (copy, readonly) SystemEventsNetworkDomainObject *networkDomain;  // the collection of folders residing on the Network
@property (copy, readonly) SystemEventsFolder *picturesFolder;  // The user's Pictures folder
@property (copy, readonly) SystemEventsFolder *preferencesFolder;  // The user's Preferences folder
@property (copy, readonly) SystemEventsFolder *publicFolder;  // The user's Public folder
@property (copy, readonly) SystemEventsFolder *scriptingAdditionsFolder;  // The Scripting Additions folder
@property (copy, readonly) SystemEventsFolder *scriptsFolder;  // The user's Scripts folder
@property (copy, readonly) SystemEventsFolder *sharedDocumentsFolder;  // The Shared Documents folder
@property (copy, readonly) SystemEventsFolder *sitesFolder;  // The user's Sites folder
@property (copy, readonly) SystemEventsFolder *speakableItemsFolder;  // The Speakable Items folder
@property (copy, readonly) SystemEventsDisk *startupDisk;  // the disk from which Mac OS X was loaded
@property (copy, readonly) SystemEventsSystemDomainObject *systemDomain;  // the collection of folders belonging to the System
@property (copy, readonly) SystemEventsFolder *temporaryItemsFolder;  // The Temporary Items folder
@property (copy, readonly) SystemEventsFolder *trash;  // The user's Trash folder
@property (copy, readonly) SystemEventsUserDomainObject *userDomain;  // the collection of folders belonging to the User
@property (copy, readonly) SystemEventsFolder *utilitiesFolder;  // The Utilities folder
@property (copy, readonly) SystemEventsFolder *workflowsFolder;  // The Automator Workflows folder

@end

// An item stored in the file system
@interface SystemEventsDiskItem : SBObject

@property (readonly) BOOL busyStatus;  // Is the disk item busy?
@property (copy, readonly) SystemEventsDiskItem *container;  // the folder or disk which has this disk item as an element
@property (copy, readonly) NSDate *creationDate;  // the date on which the disk item was created
@property (copy, readonly) NSString *displayedName;  // the name of the disk item as displayed in the User Interface
- (NSString *) id;  // the unique ID of the disk item
@property (copy) NSDate *modificationDate;  // the date on which the disk item was last modified
@property (copy) NSString *name;  // the name of the disk item
@property (copy, readonly) NSString *nameExtension;  // the extension portion of the name
@property (readonly) BOOL packageFolder;  // Is the disk item a package?
@property (copy, readonly) NSString *path;  // the file system path of the disk item
@property (readonly) NSInteger physicalSize;  // the actual space used by the disk item on disk
@property (copy, readonly) NSString *POSIXPath;  // the POSIX file system path of the disk item
@property (readonly) NSInteger size;  // the logical size of the disk item
@property (copy, readonly) NSString *URL;  // the URL of the disk item
@property BOOL visible;  // Is the disk item visible?
@property (copy, readonly) NSString *volume;  // the volume on which the disk item resides

- (void) closeSaving:(SystemEventsSaveOptions)saving savingIn:(SystemEventsFile *)savingIn;  // Close a document.
- (void) saveIn:(SystemEventsFile *)in_ as:(SystemEventsSaveableFileFormat)as;  // Save a document.
- (void) printWithProperties:(SystemEventsPrintSettings *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy an object.
- (void) moveTo:(SBObject *)to;  // Move an object to a new location.

// MARK: ワーニングの為、コメントに
//- (void) delete;  // Delete disk item(s).

// MARK: エラーの為、コメントに
//- (id) moveTo:(id)to;  // Move disk item(s) to a new location.

@end

// An alias in the file system
@interface SystemEventsAlias : SystemEventsDiskItem

- (SBElementArray *) aliases;
- (SBElementArray *) diskItems;
- (SBElementArray *) files;
- (SBElementArray *) filePackages;
- (SBElementArray *) folders;

@property (copy) id creatorType;  // the OSType identifying the application that created the alias
@property (copy) id defaultApplication;  // the application that will launch if the alias is opened
@property (copy) id fileType;  // the OSType identifying the type of data contained in the alias
@property (copy, readonly) NSString *kind;  // The kind of alias, as shown in Finder
@property (copy, readonly) NSString *productVersion;  // the version of the product (visible at the top of the "Get Info" window)
@property (copy, readonly) NSString *shortVersion;  // the short version of the application bundle referenced by the alias
@property BOOL stationery;  // Is the alias a stationery pad?
@property (copy, readonly) NSString *typeIdentifier;  // The type identifier of the alias
@property (copy, readonly) NSString *version;  // the version of the application bundle referenced by the alias (visible at the bottom of the "Get Info" window)


@end

// A disk in the file system
@interface SystemEventsDisk : SystemEventsDiskItem

- (SBElementArray *) aliases;
- (SBElementArray *) diskItems;
- (SBElementArray *) files;
- (SBElementArray *) filePackages;
- (SBElementArray *) folders;

@property (copy, readonly) NSNumber *capacity;  // the total number of bytes (free or used) on the disk
@property (readonly) BOOL ejectable;  // Can the media be ejected (floppies, CD's, and so on)?
@property (readonly) SystemEventsEdfm format;  // the file system format of this disk
@property (copy, readonly) NSNumber *freeSpace;  // the number of free bytes left on the disk
@property BOOL ignorePrivileges;  // Ignore permissions on this disk?
@property (readonly) BOOL localVolume;  // Is the media a local volume (as opposed to a file server)?
@property (copy, readonly) id server;  // the server on which the disk resides, AFP volumes only
@property (readonly) BOOL startup;  // Is this disk the boot disk?
@property (copy, readonly) id zone;  // the zone in which the disk's server resides, AFP volumes only


@end

// A domain in the file system
@interface SystemEventsDomain : SBObject

- (SBElementArray *) folders;

@property (copy, readonly) SystemEventsFolder *applicationSupportFolder;  // The Application Support folder
@property (copy, readonly) SystemEventsFolder *applicationsFolder;  // The Applications folder
@property (copy, readonly) SystemEventsFolder *desktopPicturesFolder;  // The Desktop Pictures folder
@property (copy, readonly) SystemEventsFolder *FolderActionScriptsFolder;  // The Folder Action Scripts folder
@property (copy, readonly) SystemEventsFolder *fontsFolder;  // The Fonts folder
- (NSString *) id;  // the unique identifier of the domain
@property (copy, readonly) SystemEventsFolder *libraryFolder;  // The Library folder
@property (copy, readonly) NSString *name;  // the name of the domain
@property (copy, readonly) SystemEventsFolder *preferencesFolder;  // The Preferences folder
@property (copy, readonly) SystemEventsFolder *scriptingAdditionsFolder;  // The Scripting Additions folder
@property (copy, readonly) SystemEventsFolder *scriptsFolder;  // The Scripts folder
@property (copy, readonly) SystemEventsFolder *sharedDocumentsFolder;  // The Shared Documents folder
@property (copy, readonly) SystemEventsFolder *speakableItemsFolder;  // The Speakable Items folder
@property (copy, readonly) SystemEventsFolder *utilitiesFolder;  // The Utilities folder
@property (copy, readonly) SystemEventsFolder *workflowsFolder;  // The Automator Workflows folder

- (void) closeSaving:(SystemEventsSaveOptions)saving savingIn:(SystemEventsFile *)savingIn;  // Close a document.
- (void) saveIn:(SystemEventsFile *)in_ as:(SystemEventsSaveableFileFormat)as;  // Save a document.
- (void) printWithProperties:(SystemEventsPrintSettings *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy an object.
- (void) moveTo:(SBObject *)to;  // Move an object to a new location.

@end

// The Classic domain in the file system
@interface SystemEventsClassicDomainObject : SystemEventsDomain

- (SBElementArray *) folders;

@property (copy, readonly) SystemEventsFolder *appleMenuFolder;  // The Apple Menu Items folder
@property (copy, readonly) SystemEventsFolder *controlPanelsFolder;  // The Control Panels folder
@property (copy, readonly) SystemEventsFolder *controlStripModulesFolder;  // The Control Strip Modules folder
@property (copy, readonly) SystemEventsFolder *desktopFolder;  // The Classic Desktop folder
@property (copy, readonly) SystemEventsFolder *extensionsFolder;  // The Extensions folder
@property (copy, readonly) SystemEventsFolder *fontsFolder;  // The Fonts folder
@property (copy, readonly) SystemEventsFolder *launcherItemsFolder;  // The Launcher Items folder
@property (copy, readonly) SystemEventsFolder *preferencesFolder;  // The Classic Preferences folder
@property (copy, readonly) SystemEventsFolder *shutdownFolder;  // The Shutdown Items folder
@property (copy, readonly) SystemEventsFolder *startupItemsFolder;  // The StartupItems folder
@property (copy, readonly) SystemEventsFolder *systemFolder;  // The System folder


@end

// A file in the file system
@interface SystemEventsFile : SystemEventsDiskItem

@property (copy) id creatorType;  // the OSType identifying the application that created the file
@property (copy) id defaultApplication;  // the application that will launch if the file is opened
@property (copy) id fileType;  // the OSType identifying the type of data contained in the file
@property (copy, readonly) NSString *kind;  // The kind of file, as shown in Finder
@property (copy, readonly) NSString *productVersion;  // the version of the product (visible at the top of the "Get Info" window)
@property (copy, readonly) NSString *shortVersion;  // the short version of the file
@property BOOL stationery;  // Is the file a stationery pad?
@property (copy, readonly) NSString *typeIdentifier;  // The type identifier of the file
@property (copy, readonly) NSString *version;  // the version of the file (visible at the bottom of the "Get Info" window)

- (id) open;  // Open a document.

// MARK: エラーの為、コメントに
//- (SystemEventsFile *) open;  // Open disk item(s) with the appropriate application.

@end

// A file package in the file system
@interface SystemEventsFilePackage : SystemEventsFile

- (SBElementArray *) aliases;
- (SBElementArray *) diskItems;
- (SBElementArray *) files;
- (SBElementArray *) filePackages;
- (SBElementArray *) folders;


@end

// A folder in the file system
@interface SystemEventsFolder : SystemEventsDiskItem

- (SBElementArray *) aliases;
- (SBElementArray *) diskItems;
- (SBElementArray *) files;
- (SBElementArray *) filePackages;
- (SBElementArray *) folders;


@end

// The local domain in the file system
@interface SystemEventsLocalDomainObject : SystemEventsDomain

- (SBElementArray *) folders;


@end

// The network domain in the file system
@interface SystemEventsNetworkDomainObject : SystemEventsDomain

- (SBElementArray *) folders;


@end

// The system domain in the file system
@interface SystemEventsSystemDomainObject : SystemEventsDomain

- (SBElementArray *) folders;


@end

// The user domain in the file system
@interface SystemEventsUserDomainObject : SystemEventsDomain

- (SBElementArray *) folders;

@property (copy, readonly) SystemEventsFolder *desktopFolder;  // The user's Desktop folder
@property (copy, readonly) SystemEventsFolder *documentsFolder;  // The user's Documents folder
@property (copy, readonly) SystemEventsFolder *downloadsFolder;  // The user's Downloads folder
@property (copy, readonly) SystemEventsFolder *favoritesFolder;  // The user's Favorites folder
@property (copy, readonly) SystemEventsFolder *homeFolder;  // The user's Home folder
@property (copy, readonly) SystemEventsFolder *moviesFolder;  // The user's Movies folder
@property (copy, readonly) SystemEventsFolder *musicFolder;  // The user's Music folder
@property (copy, readonly) SystemEventsFolder *picturesFolder;  // The user's Pictures folder
@property (copy, readonly) SystemEventsFolder *publicFolder;  // The user's Public folder
@property (copy, readonly) SystemEventsFolder *sitesFolder;  // The user's Sites folder
@property (copy, readonly) SystemEventsFolder *temporaryItemsFolder;  // The Temporary Items folder


@end



/*
 * Folder Actions Suite
 */

// The System Events application
@interface SystemEventsApplication (FolderActionsSuite)

- (SBElementArray *) folderActions;

@property BOOL folderActionsEnabled;  // Are Folder Actions currently being processed?

@end

// An action attached to a folder in the file system
@interface SystemEventsFolderAction : SBObject

- (SBElementArray *) scripts;

@property BOOL enabled;  // Is the folder action enabled?
@property (copy) NSString *name;  // the name of the folder action, which is also the name of the folder
@property (copy) id path;  // the path to the folder to which the folder action applies
@property (copy, readonly) NSString *volume;  // the volume on which the folder to which the folder action applies resides

- (void) closeSaving:(SystemEventsSaveOptions)saving savingIn:(SystemEventsFile *)savingIn;  // Close a document.
- (void) saveIn:(SystemEventsFile *)in_ as:(SystemEventsSaveableFileFormat)as;  // Save a document.
- (void) printWithProperties:(SystemEventsPrintSettings *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy an object.
- (void) moveTo:(SBObject *)to;  // Move an object to a new location.
- (void) enableProcessNewChanges:(SystemEventsSaveOptions)processNewChanges;  // Enable a folder action.

@end

// A script invoked by a folder action
@interface SystemEventsScript : SBObject

@property BOOL enabled;  // Is the script enabled?
@property (copy, readonly) NSString *name;  // the name of the script
@property (copy, readonly) NSString *path;  // the file system path of the script
@property (copy, readonly) NSString *POSIXPath;  // the POSIX file system path of the script

- (void) closeSaving:(SystemEventsSaveOptions)saving savingIn:(SystemEventsFile *)savingIn;  // Close a document.
- (void) saveIn:(SystemEventsFile *)in_ as:(SystemEventsSaveableFileFormat)as;  // Save a document.
- (void) printWithProperties:(SystemEventsPrintSettings *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy an object.
- (void) moveTo:(SBObject *)to;  // Move an object to a new location.

@end



/*
 * Movie File Suite
 */

// The System Events application
@interface SystemEventsApplication (MovieFileSuite)

- (SBElementArray *) movieDatas;
- (SBElementArray *) movieFiles;

@end



/*
 * Processes Suite
 */

// The System Events application
@interface SystemEventsApplication (ProcessesSuite)

- (SBElementArray *) applicationProcesses;
- (SBElementArray *) deskAccessoryProcesses;
- (SBElementArray *) processes;
- (SBElementArray *) UIElements;

@property (readonly) BOOL UIElementsEnabled;  // Are UI element events currently being processed?

@end

// An action that can be performed on the UI element
@interface SystemEventsAction : SBObject

@property (copy, readonly) NSString *objectDescription;  // what the action does
@property (copy, readonly) NSString *name;  // the name of the action

- (void) closeSaving:(SystemEventsSaveOptions)saving savingIn:(SystemEventsFile *)savingIn;  // Close a document.
- (void) saveIn:(SystemEventsFile *)in_ as:(SystemEventsSaveableFileFormat)as;  // Save a document.
- (void) printWithProperties:(SystemEventsPrintSettings *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy an object.
- (void) moveTo:(SBObject *)to;  // Move an object to a new location.
- (SystemEventsAction *) perform;  // cause the target process to behave as if the action were applied to its UI element

@end

// An named data value associated with the UI element
@interface SystemEventsAttribute : SBObject

@property (copy, readonly) NSString *name;  // the name of the attribute
@property (readonly) BOOL settable;  // Can the attribute be set?
@property (copy) id value;  // the current value of the attribute

- (void) closeSaving:(SystemEventsSaveOptions)saving savingIn:(SystemEventsFile *)savingIn;  // Close a document.
- (void) saveIn:(SystemEventsFile *)in_ as:(SystemEventsSaveableFileFormat)as;  // Save a document.
- (void) printWithProperties:(SystemEventsPrintSettings *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy an object.
- (void) moveTo:(SBObject *)to;  // Move an object to a new location.

@end

// A piece of the user interface of a process
@interface SystemEventsUIElement : SBObject

- (SBElementArray *) actions;
- (SBElementArray *) attributes;
- (SBElementArray *) browsers;
- (SBElementArray *) busyIndicators;
- (SBElementArray *) buttons;
- (SBElementArray *) checkboxes;
- (SBElementArray *) colorWells;
- (SBElementArray *) columns;
- (SBElementArray *) comboBoxes;
- (SBElementArray *) drawers;
- (SBElementArray *) groups;
- (SBElementArray *) growAreas;
- (SBElementArray *) images;
- (SBElementArray *) incrementors;
- (SBElementArray *) lists;
- (SBElementArray *) menus;
- (SBElementArray *) menuBars;
- (SBElementArray *) menuBarItems;
- (SBElementArray *) menuButtons;
- (SBElementArray *) menuItems;
- (SBElementArray *) outlines;
- (SBElementArray *) popOvers;
- (SBElementArray *) popUpButtons;
- (SBElementArray *) progressIndicators;
- (SBElementArray *) radioButtons;
- (SBElementArray *) radioGroups;
- (SBElementArray *) relevanceIndicators;
- (SBElementArray *) rows;
- (SBElementArray *) scrollAreas;
- (SBElementArray *) scrollBars;
- (SBElementArray *) sheets;
- (SBElementArray *) sliders;
- (SBElementArray *) splitters;
- (SBElementArray *) splitterGroups;
- (SBElementArray *) staticTexts;
- (SBElementArray *) tabGroups;
- (SBElementArray *) tables;
- (SBElementArray *) textAreas;
- (SBElementArray *) textFields;
- (SBElementArray *) toolbars;
- (SBElementArray *) UIElements;
- (SBElementArray *) valueIndicators;
- (SBElementArray *) windows;

@property (copy, readonly) id accessibilityDescription;  // a more complete description of the UI element and its capabilities
@property (copy, readonly) id objectDescription;  // the accessibility description, if available; otherwise, the role description
@property (copy, readonly) id enabled;  // Is the UI element enabled? ( Does it accept clicks? )
@property (copy, readonly) NSArray *entireContents;  // a list of every UI element contained in this UI element and its child UI elements, to the limits of the tree
@property (copy) id focused;  // Is the focus on this UI element?
@property (copy, readonly) id help;  // an elaborate description of the UI element and its capabilities
@property (copy, readonly) id maximumValue;  // the maximum value that the UI element can take on
@property (copy, readonly) id minimumValue;  // the minimum value that the UI element can take on
@property (copy, readonly) NSString *name;  // the name of the UI Element, which identifies it within its container
@property (copy, readonly) id orientation;  // the orientation of the UI element
@property (copy) id position;  // the position of the UI element
@property (copy, readonly) NSString *role;  // an encoded description of the UI element and its capabilities
@property (copy, readonly) NSString *roleDescription;  // a more complete description of the UI element's role
@property (copy) id selected;  // Is the UI element selected?
@property (copy) id size;  // the size of the UI element
@property (copy, readonly) id subrole;  // an encoded description of the UI element and its capabilities
@property (copy, readonly) NSString *title;  // the title of the UI element as it appears on the screen
@property (copy) id value;  // the current value of the UI element

- (void) closeSaving:(SystemEventsSaveOptions)saving savingIn:(SystemEventsFile *)savingIn;  // Close a document.
- (void) saveIn:(SystemEventsFile *)in_ as:(SystemEventsSaveableFileFormat)as;  // Save a document.
- (void) printWithProperties:(SystemEventsPrintSettings *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy an object.
- (void) moveTo:(SBObject *)to;  // Move an object to a new location.
- (id) clickAt:(NSArray *)at;  // cause the target process to behave as if the UI element were clicked
- (SystemEventsUIElement *) select;  // set the selected property of the UI element

@end

// A browser belonging to a window
@interface SystemEventsBrowser : SystemEventsUIElement


@end

// A busy indicator belonging to a window
@interface SystemEventsBusyIndicator : SystemEventsUIElement


@end

// A button belonging to a window or scroll bar
@interface SystemEventsButton : SystemEventsUIElement


@end

// A checkbox belonging to a window
@interface SystemEventsCheckbox : SystemEventsUIElement


@end

// A color well belonging to a window
@interface SystemEventsColorWell : SystemEventsUIElement


@end

// A column belonging to a table
@interface SystemEventsColumn : SystemEventsUIElement


@end

// A combo box belonging to a window
@interface SystemEventsComboBox : SystemEventsUIElement


@end

// A drawer that may be extended from a window
@interface SystemEventsDrawer : SystemEventsUIElement


@end

// A group belonging to a window
@interface SystemEventsGroup : SystemEventsUIElement

- (SBElementArray *) checkboxes;
- (SBElementArray *) staticTexts;


@end

// A grow area belonging to a window
@interface SystemEventsGrowArea : SystemEventsUIElement


@end

// An image belonging to a static text field
@interface SystemEventsImage : SystemEventsUIElement


@end

// A incrementor belonging to a window
@interface SystemEventsIncrementor : SystemEventsUIElement


@end

// A list belonging to a window
@interface SystemEventsList : SystemEventsUIElement


@end

// A menu belonging to a menu bar item
@interface SystemEventsMenu : SystemEventsUIElement

- (SBElementArray *) menuItems;


@end

// A menu bar belonging to a process
@interface SystemEventsMenuBar : SystemEventsUIElement

- (SBElementArray *) menus;
- (SBElementArray *) menuBarItems;


@end

// A menu bar item belonging to a menu bar
@interface SystemEventsMenuBarItem : SystemEventsUIElement

- (SBElementArray *) menus;


@end

// A menu button belonging to a window
@interface SystemEventsMenuButton : SystemEventsUIElement


@end

// A menu item belonging to a menu
@interface SystemEventsMenuItem : SystemEventsUIElement

- (SBElementArray *) menus;


@end

// A outline belonging to a window
@interface SystemEventsOutline : SystemEventsUIElement


@end

// A pop over belonging to a window
@interface SystemEventsPopOver : SystemEventsUIElement


@end

// A pop up button belonging to a window
@interface SystemEventsPopUpButton : SystemEventsUIElement


@end

// A process running on this computer
@interface SystemEventsProcess : SystemEventsUIElement

- (SBElementArray *) menuBars;
- (SBElementArray *) windows;

@property (readonly) BOOL acceptsHighLevelEvents;  // Is the process high-level event aware (accepts open application, open document, print document, and quit)?
@property (readonly) BOOL acceptsRemoteEvents;  // Does the process accept remote events?
@property (copy, readonly) NSString *architecture;  // the architecture in which the process is running
@property (readonly) BOOL backgroundOnly;  // Does the process run exclusively in the background?
@property (copy, readonly) NSString *bundleIdentifier;  // the bundle identifier of the process' application file
@property (readonly) BOOL Classic;  // Is the process running in the Classic environment?
@property (copy, readonly) NSString *creatorType;  // the OSType of the creator of the process (the signature)
@property (copy, readonly) NSString *displayedName;  // the name of the file from which the process was launched, as displayed in the User Interface
@property (copy, readonly) id file;  // the file from which the process was launched
@property (copy, readonly) NSString *fileType;  // the OSType of the file type of the process
@property BOOL frontmost;  // Is the process the frontmost process
@property (readonly) BOOL hasScriptingTerminology;  // Does the process have a scripting terminology, i.e., can it be scripted?
- (NSInteger) id;  // The unique identifier of the process
@property (copy, readonly) NSString *name;  // the name of the process
@property (readonly) NSInteger partitionSpaceUsed;  // the number of bytes currently used in the process' partition
@property (copy, readonly) id shortName;  // the short name of the file from which the process was launched
@property (readonly) NSInteger totalPartitionSize;  // the size of the partition with which the process was launched
@property (readonly) NSInteger unixId;  // The Unix process identifier of a process running in the native environment, or -1 for a process running in the Classic environment
@property BOOL visible;  // Is the process' layer visible?


@end

// A process launched from an application file
@interface SystemEventsApplicationProcess : SystemEventsProcess

@property (copy, readonly) id applicationFile;  // a reference to the application file from which this process was launched


@end

// A process launched from an desk accessory file
@interface SystemEventsDeskAccessoryProcess : SystemEventsProcess

@property (copy, readonly) SystemEventsAlias *deskAccessoryFile;  // a reference to the desk accessory file from which this process was launched


@end

// A progress indicator belonging to a window
@interface SystemEventsProgressIndicator : SystemEventsUIElement


@end

// A radio button belonging to a window
@interface SystemEventsRadioButton : SystemEventsUIElement


@end

// A radio button group belonging to a window
@interface SystemEventsRadioGroup : SystemEventsUIElement

- (SBElementArray *) radioButtons;


@end

// A relevance indicator belonging to a window
@interface SystemEventsRelevanceIndicator : SystemEventsUIElement


@end

// A row belonging to a table
@interface SystemEventsRow : SystemEventsUIElement


@end

// A scroll area belonging to a window
@interface SystemEventsScrollArea : SystemEventsUIElement


@end

// A scroll bar belonging to a window
@interface SystemEventsScrollBar : SystemEventsUIElement

- (SBElementArray *) buttons;
- (SBElementArray *) valueIndicators;


@end

// A sheet displayed over a window
@interface SystemEventsSheet : SystemEventsUIElement


@end

// A slider belonging to a window
@interface SystemEventsSlider : SystemEventsUIElement


@end

// A splitter belonging to a window
@interface SystemEventsSplitter : SystemEventsUIElement


@end

// A splitter group belonging to a window
@interface SystemEventsSplitterGroup : SystemEventsUIElement


@end

// A static text field belonging to a window
@interface SystemEventsStaticText : SystemEventsUIElement

- (SBElementArray *) images;


@end

// A tab group belonging to a window
@interface SystemEventsTabGroup : SystemEventsUIElement


@end

// A table belonging to a window
@interface SystemEventsTable : SystemEventsUIElement


@end

// A text area belonging to a window
@interface SystemEventsTextArea : SystemEventsUIElement


@end

// A text field belonging to a window
@interface SystemEventsTextField : SystemEventsUIElement


@end

// A toolbar belonging to a window
@interface SystemEventsToolbar : SystemEventsUIElement


@end

// A value indicator ( thumb or slider ) belonging to a scroll bar
@interface SystemEventsValueIndicator : SystemEventsUIElement


@end

// A window belonging to a process
@interface SystemEventsWindow (ProcessesSuite)

- (SBElementArray *) actions;
- (SBElementArray *) attributes;
- (SBElementArray *) browsers;
- (SBElementArray *) busyIndicators;
- (SBElementArray *) buttons;
- (SBElementArray *) checkboxes;
- (SBElementArray *) colorWells;
- (SBElementArray *) comboBoxes;
- (SBElementArray *) drawers;
- (SBElementArray *) groups;
- (SBElementArray *) growAreas;
- (SBElementArray *) images;
- (SBElementArray *) incrementors;
- (SBElementArray *) lists;
- (SBElementArray *) menuButtons;
- (SBElementArray *) outlines;
- (SBElementArray *) popOvers;
- (SBElementArray *) popUpButtons;
- (SBElementArray *) progressIndicators;
- (SBElementArray *) radioButtons;
- (SBElementArray *) radioGroups;
- (SBElementArray *) relevanceIndicators;
- (SBElementArray *) scrollAreas;
- (SBElementArray *) scrollBars;
- (SBElementArray *) sheets;
- (SBElementArray *) sliders;
- (SBElementArray *) splitters;
- (SBElementArray *) splitterGroups;
- (SBElementArray *) staticTexts;
- (SBElementArray *) tabGroups;
- (SBElementArray *) tables;
- (SBElementArray *) textAreas;
- (SBElementArray *) textFields;
- (SBElementArray *) toolbars;
- (SBElementArray *) UIElements;

@property (copy, readonly) id accessibilityDescription;  // a more complete description of the window and its capabilities
@property (copy, readonly) id objectDescription;  // the accessibility description, if available; otherwise, the role description
@property (copy, readonly) id enabled;  // Is the window enabled? ( Does it accept clicks? )
@property (copy, readonly) NSArray *entireContents;  // a list of every UI element contained in this window and its child UI elements, to the limits of the tree
@property (copy) id focused;  // Is the focus on this window?
@property (copy, readonly) id help;  // an elaborate description of the window and its capabilities
@property (copy, readonly) id maximumValue;  // the maximum value that the UI element can take on
@property (copy, readonly) id minimumValue;  // the minimum value that the UI element can take on
@property (copy, readonly) NSString *name;  // the name of the window, which identifies it within its container
@property (copy, readonly) id orientation;  // the orientation of the window
@property (copy) id position;  // the position of the window
@property (copy, readonly) NSString *role;  // an encoded description of the window and its capabilities
@property (copy, readonly) NSString *roleDescription;  // a more complete description of the window's role
@property (copy) id selected;  // Is the window selected?
@property (copy) id size;  // the size of the window
@property (copy, readonly) id subrole;  // an encoded description of the window and its capabilities
@property (copy, readonly) NSString *title;  // the title of the window as it appears on the screen
@property (copy) id value;  // the current value of the window

@end



/*
 * Property List Suite
 */

// The System Events application
@interface SystemEventsApplication (PropertyListSuite)

- (SBElementArray *) propertyListFiles;
- (SBElementArray *) propertyListItems;

@end

// A file containing data in Property List format
@interface SystemEventsPropertyListFile : SystemEventsFile

@property (copy) SystemEventsPropertyListItem *contents;  // the contents of the property list file; elements and properties of the property list item may be accessed as if they were elements and properties of the property list file


@end

// A unit of data in Property List format
@interface SystemEventsPropertyListItem : SBObject

- (SBElementArray *) propertyListItems;

@property (copy, readonly) NSNumber *kind;  // the kind of data stored in the property list item: boolean/data/date/list/number/record/string
@property (copy, readonly) NSString *name;  // the name of the property list item ( if any )
@property (copy) NSString *text;  // the text representation of the property list data
@property (copy) id value;  // the value of the property list item

- (void) closeSaving:(SystemEventsSaveOptions)saving savingIn:(SystemEventsFile *)savingIn;  // Close a document.
- (void) saveIn:(SystemEventsFile *)in_ as:(SystemEventsSaveableFileFormat)as;  // Save a document.
- (void) printWithProperties:(SystemEventsPrintSettings *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy an object.
- (void) moveTo:(SBObject *)to;  // Move an object to a new location.

@end



/*
 * QuickTime File Suite
 */

// The System Events application
@interface SystemEventsApplication (QuickTimeFileSuite)

- (SBElementArray *) QuickTimeDatas;
- (SBElementArray *) QuickTimeFiles;

@end

// A unit of user data in a QuickTime file
@interface SystemEventsAnnotation : SBObject

@property (copy, readonly) NSString *fullText;  // the full text of the annotation
- (NSString *) id;  // the unique identifier of the annotation
@property (copy, readonly) NSString *name;  // the name of the annotation

- (void) closeSaving:(SystemEventsSaveOptions)saving savingIn:(SystemEventsFile *)savingIn;  // Close a document.
- (void) saveIn:(SystemEventsFile *)in_ as:(SystemEventsSaveableFileFormat)as;  // Save a document.
- (void) printWithProperties:(SystemEventsPrintSettings *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy an object.
- (void) moveTo:(SBObject *)to;  // Move an object to a new location.

@end

// Data in QuickTime format
@interface SystemEventsQuickTimeData : SBObject

- (SBElementArray *) annotations;
- (SBElementArray *) tracks;

@property (readonly) BOOL autoPlay;  // will the movie automatically start playing? (saved with QuickTime file)
@property (readonly) BOOL autoPresent;  // will the movie automatically start presenting? (saved with QuickTime file)
@property (readonly) BOOL autoQuitWhenDone;  // will the player automatically quit when done playing? (saved with QuickTime file)
@property (copy, readonly) NSDate *creationTime;  // the creation time of the QuickTime file
@property (readonly) NSInteger dataSize;  // the size of the QuickTime file data
@property (readonly) NSInteger duration;  // the duration of the QuickTime file, in terms of the time scale
@property (copy, readonly) NSString *href;  // the internet location to open when clicking on the movie (overrides track hrefs)
@property (readonly) BOOL looping;  // keep playing the movie in a loop?
@property (copy, readonly) NSDate *modificationTime;  // the modification time of the QuickTime file
@property (readonly) NSInteger preferredRate;  // the preferred rate of the QuickTime file
@property (readonly) NSInteger preferredVolume;  // the preferred volume of the QuickTime file
@property (readonly) SystemEventsPrmd presentationMode;  // mode in which the movie will be presented
@property (readonly) SystemEventsMvsz presentationSize;  // size at which the movie will be presented
@property (readonly) BOOL storedStream;  // is this a stored streaming movie?
@property (readonly) NSInteger timeScale;  // the time scale of the QuickTime file

- (void) closeSaving:(SystemEventsSaveOptions)saving savingIn:(SystemEventsFile *)savingIn;  // Close a document.
- (void) saveIn:(SystemEventsFile *)in_ as:(SystemEventsSaveableFileFormat)as;  // Save a document.
- (void) printWithProperties:(SystemEventsPrintSettings *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy an object.
- (void) moveTo:(SBObject *)to;  // Move an object to a new location.

@end



/*
 * Audio File Suite
 */

// Data in Audio format
@interface SystemEventsAudioData : SystemEventsQuickTimeData


@end



/*
 * Movie File Suite
 */

// Data in Movie format
@interface SystemEventsMovieData : SystemEventsQuickTimeData

@property (copy, readonly) NSArray *bounds;  // the bounding rectangle of the movie file
@property (copy, readonly) NSArray *naturalDimensions;  // the dimensions the movie has when it is not scaled
@property (readonly) NSInteger previewDuration;  // the preview duration of the movie file
@property (readonly) NSInteger previewTime;  // the preview time of the movie file


@end



/*
 * QuickTime File Suite
 */

// A file containing data in QuickTime format
@interface SystemEventsQuickTimeFile : SystemEventsFile

@property (copy, readonly) SystemEventsQuickTimeData *contents;  // the contents of the QuickTime file; elements and properties of the QuickTime data may be accessed as if they were elements and properties of the QuickTime file


@end



/*
 * Audio File Suite
 */

// A file containing data in Audio format
@interface SystemEventsAudioFile : SystemEventsQuickTimeFile

@property (copy, readonly) SystemEventsAudioData *contents;  // the contents of the audio file; elements and properties of the audio data may be accessed as if they were elements and properties of the audio file


@end



/*
 * Movie File Suite
 */

// A file containing data in Movie format
@interface SystemEventsMovieFile : SystemEventsQuickTimeFile

@property (copy, readonly) SystemEventsMovieData *contents;  // the contents of the movie file; elements and properties of the movie data may be accessed as if they were elements and properties of the movie file


@end



/*
 * QuickTime File Suite
 */

// A track in a QuickTime file
@interface SystemEventsTrack : SBObject

- (SBElementArray *) annotations;

@property (readonly) NSInteger audioChannelCount;  // the number of channels in the audio
@property (readonly) BOOL audioCharacteristic;  // can the track be heard?
@property (readonly) double audioSampleRate;  // the sample rate of the audio in kHz
@property (readonly) NSInteger audioSampleSize;  // the size of uncompressed audio samples in bits
@property (copy, readonly) NSDate *creationTime;  // the creation time of the track
@property (copy, readonly) NSString *dataFormat;  // the data format
@property (readonly) NSInteger dataRate;  // the data rate (bytes/sec) of the track
@property (readonly) NSInteger dataSize;  // the size of the track data
@property (copy, readonly) NSArray *dimensions;  // the current dimensions of the track
@property (readonly) NSInteger duration;  // the duration of the track, in terms of the time scale
@property BOOL enabled;  // should this track be used when the movie is playing?
@property BOOL highQuality;  // is the track high quality?
@property (copy, readonly) NSString *href;  // the internet location to open when clicking on the track
@property (copy, readonly) NSString *kind;  // the name of the media in the track, in the current language (e.g., 'Sound', 'Video', 'Text', ...)
@property (copy, readonly) NSDate *modificationTime;  // the modification time of the track
@property (copy, readonly) NSString *name;  // the name of the track
@property NSInteger startTime;  // the time delay before this track starts playing
@property (copy, readonly) NSString *type;  // the type of media in the track (e.g., 'soun', 'vide', 'text', ...)
@property (copy, readonly) NSString *typeClass;  // deprecated: use "type" instead ( included only to resolve a terminology conflict, script text will be updated upon compilation )
@property (readonly) NSInteger videoDepth;  // the color depth of the video
@property (readonly) BOOL visualCharacteristic;  // can the track be seen?

- (void) closeSaving:(SystemEventsSaveOptions)saving savingIn:(SystemEventsFile *)savingIn;  // Close a document.
- (void) saveIn:(SystemEventsFile *)in_ as:(SystemEventsSaveableFileFormat)as;  // Save a document.
- (void) printWithProperties:(SystemEventsPrintSettings *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy an object.
- (void) moveTo:(SBObject *)to;  // Move an object to a new location.

@end



/*
 * XML Suite
 */

// The System Events application
@interface SystemEventsApplication (XMLSuite)

- (SBElementArray *) XMLDatas;
- (SBElementArray *) XMLFiles;

@end

// A named value associated with a unit of data in XML format
@interface SystemEventsXMLAttribute : SBObject

@property (copy, readonly) NSString *name;  // the name of the XML attribute
@property (copy) id value;  // the value of the XML attribute

- (void) closeSaving:(SystemEventsSaveOptions)saving savingIn:(SystemEventsFile *)savingIn;  // Close a document.
- (void) saveIn:(SystemEventsFile *)in_ as:(SystemEventsSaveableFileFormat)as;  // Save a document.
- (void) printWithProperties:(SystemEventsPrintSettings *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy an object.
- (void) moveTo:(SBObject *)to;  // Move an object to a new location.

@end

// Data in XML format
@interface SystemEventsXMLData : SBObject

- (SBElementArray *) XMLElements;

- (NSString *) id;  // the unique identifier of the XML data
@property (copy) NSString *name;  // the name of the XML data
@property (copy) NSString *text;  // the text representation of the XML data

- (void) closeSaving:(SystemEventsSaveOptions)saving savingIn:(SystemEventsFile *)savingIn;  // Close a document.
- (void) saveIn:(SystemEventsFile *)in_ as:(SystemEventsSaveableFileFormat)as;  // Save a document.
- (void) printWithProperties:(SystemEventsPrintSettings *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy an object.
- (void) moveTo:(SBObject *)to;  // Move an object to a new location.

@end

// A unit of data in XML format
@interface SystemEventsXMLElement : SBObject

- (SBElementArray *) XMLAttributes;
- (SBElementArray *) XMLElements;

- (NSString *) id;  // the unique identifier of the XML element
@property (copy, readonly) NSString *name;  // the name of the XML element
@property (copy) id value;  // the value of the XML element

- (void) closeSaving:(SystemEventsSaveOptions)saving savingIn:(SystemEventsFile *)savingIn;  // Close a document.
- (void) saveIn:(SystemEventsFile *)in_ as:(SystemEventsSaveableFileFormat)as;  // Save a document.
- (void) printWithProperties:(SystemEventsPrintSettings *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy an object.
- (void) moveTo:(SBObject *)to;  // Move an object to a new location.

@end

// A file containing data in XML format
@interface SystemEventsXMLFile : SystemEventsFile

@property (copy) SystemEventsXMLData *contents;  // the contents of the XML file; elements and properties of the XML data may be accessed as if they were elements and properties of the XML file


@end



/*
 * Type Definitions
 */

@interface SystemEventsPrintSettings : SBObject

@property NSInteger copies;  // the number of copies of a document to be printed
@property BOOL collating;  // Should printed copies be collated?
@property NSInteger startingPage;  // the first page of the document to be printed
@property NSInteger endingPage;  // the last page of the document to be printed
@property NSInteger pagesAcross;  // number of logical pages laid across a physical page
@property NSInteger pagesDown;  // number of logical pages laid out down a physical page
@property (copy) NSDate *requestedPrintTime;  // the time at which the desktop printer should print the document
@property SystemEventsEnum errorHandling;  // how errors are handled
@property (copy) NSString *faxNumber;  // for fax number
@property (copy) NSString *targetPrinter;  // for target printer

- (void) closeSaving:(SystemEventsSaveOptions)saving savingIn:(SystemEventsFile *)savingIn;  // Close a document.
- (void) saveIn:(SystemEventsFile *)in_ as:(SystemEventsSaveableFileFormat)as;  // Save a document.
- (void) printWithProperties:(SystemEventsPrintSettings *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy an object.
- (void) moveTo:(SBObject *)to;  // Move an object to a new location.

@end



/*
 * Scripting Definition Suite
 */

// The System Events application
@interface SystemEventsApplication (ScriptingDefinitionSuite)

@property (copy, readonly) SystemEventsScriptingDefinitionObject *scriptingDefinition;  // The scripting definition of the System Events application

@end

// A class within a suite within a scripting definition
@interface SystemEventsScriptingClass : SBObject

- (SBElementArray *) scriptingElements;
- (SBElementArray *) scriptingProperties;

@property (copy, readonly) NSString *name;  // The name of the class
- (NSString *) id;  // The unique identifier of the class
@property (copy, readonly) NSString *objectDescription;  // The description of the class
@property (readonly) BOOL hidden;  // Is the class hidden?
@property (copy, readonly) NSString *pluralName;  // The plural name of the class
@property (copy, readonly) NSString *suiteName;  // The name of the suite to which this class belongs
@property (copy, readonly) SystemEventsScriptingClass *superclass;  // The class from which this class inherits

- (void) closeSaving:(SystemEventsSaveOptions)saving savingIn:(SystemEventsFile *)savingIn;  // Close a document.
- (void) saveIn:(SystemEventsFile *)in_ as:(SystemEventsSaveableFileFormat)as;  // Save a document.
- (void) printWithProperties:(SystemEventsPrintSettings *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy an object.
- (void) moveTo:(SBObject *)to;  // Move an object to a new location.

@end

// A command within a suite within a scripting definition
@interface SystemEventsScriptingCommand : SBObject

- (SBElementArray *) scriptingParameters;

@property (copy, readonly) NSString *name;  // The name of the command
- (NSString *) id;  // The unique identifier of the command
@property (copy, readonly) NSString *objectDescription;  // The description of the command
@property (copy, readonly) SystemEventsScriptingParameter *directParameter;  // The direct parameter of the command
@property (readonly) BOOL hidden;  // Is the command hidden?
@property (copy, readonly) SystemEventsScriptingResultObject *scriptingResult;  // The object or data returned by this command
@property (copy, readonly) NSString *suiteName;  // The name of the suite to which this command belongs

- (void) closeSaving:(SystemEventsSaveOptions)saving savingIn:(SystemEventsFile *)savingIn;  // Close a document.
- (void) saveIn:(SystemEventsFile *)in_ as:(SystemEventsSaveableFileFormat)as;  // Save a document.
- (void) printWithProperties:(SystemEventsPrintSettings *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy an object.
- (void) moveTo:(SBObject *)to;  // Move an object to a new location.

@end

// The scripting definition of the System Events applicaation
@interface SystemEventsScriptingDefinitionObject : SBObject

- (SBElementArray *) scriptingSuites;

- (void) closeSaving:(SystemEventsSaveOptions)saving savingIn:(SystemEventsFile *)savingIn;  // Close a document.
- (void) saveIn:(SystemEventsFile *)in_ as:(SystemEventsSaveableFileFormat)as;  // Save a document.
- (void) printWithProperties:(SystemEventsPrintSettings *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy an object.
- (void) moveTo:(SBObject *)to;  // Move an object to a new location.

@end

// An element within a class within a suite within a scripting definition
@interface SystemEventsScriptingElement : SystemEventsScriptingClass


@end

// An enumeration within a suite within a scripting definition
@interface SystemEventsScriptingEnumeration : SBObject

- (SBElementArray *) scriptingEnumerators;

@property (copy, readonly) NSString *name;  // The name of the enumeration
- (NSString *) id;  // The unique identifier of the enumeration
@property (readonly) BOOL hidden;  // Is the enumeration hidden?

- (void) closeSaving:(SystemEventsSaveOptions)saving savingIn:(SystemEventsFile *)savingIn;  // Close a document.
- (void) saveIn:(SystemEventsFile *)in_ as:(SystemEventsSaveableFileFormat)as;  // Save a document.
- (void) printWithProperties:(SystemEventsPrintSettings *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy an object.
- (void) moveTo:(SBObject *)to;  // Move an object to a new location.

@end

// An enumerator within an enumeration within a suite within a scripting definition
@interface SystemEventsScriptingEnumerator : SBObject

@property (copy, readonly) NSString *name;  // The name of the enumerator
- (NSString *) id;  // The unique identifier of the enumerator
@property (copy, readonly) NSString *objectDescription;  // The description of the enumerator
@property (readonly) BOOL hidden;  // Is the enumerator hidden?

- (void) closeSaving:(SystemEventsSaveOptions)saving savingIn:(SystemEventsFile *)savingIn;  // Close a document.
- (void) saveIn:(SystemEventsFile *)in_ as:(SystemEventsSaveableFileFormat)as;  // Save a document.
- (void) printWithProperties:(SystemEventsPrintSettings *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy an object.
- (void) moveTo:(SBObject *)to;  // Move an object to a new location.

@end

// A parameter within a command within a suite within a scripting definition
@interface SystemEventsScriptingParameter : SBObject

@property (copy, readonly) NSString *name;  // The name of the parameter
- (NSString *) id;  // The unique identifier of the parameter
@property (copy, readonly) NSString *objectDescription;  // The description of the parameter
@property (readonly) BOOL hidden;  // Is the parameter hidden?
@property (copy, readonly) NSString *kind;  // The kind of object or data specified by this parameter
@property (readonly) BOOL optional;  // Is the parameter optional?

- (void) closeSaving:(SystemEventsSaveOptions)saving savingIn:(SystemEventsFile *)savingIn;  // Close a document.
- (void) saveIn:(SystemEventsFile *)in_ as:(SystemEventsSaveableFileFormat)as;  // Save a document.
- (void) printWithProperties:(SystemEventsPrintSettings *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy an object.
- (void) moveTo:(SBObject *)to;  // Move an object to a new location.

@end

// A property within a class within a suite within a scripting definition
@interface SystemEventsScriptingProperty : SBObject

@property (copy, readonly) NSString *name;  // The name of the property
- (NSString *) id;  // The unique identifier of the property
@property (readonly) SystemEventsAccs access;  // The type of access to this property
@property (copy, readonly) NSString *objectDescription;  // The description of the property
@property (readonly) BOOL enumerated;  // Is the property's value an enumerator?
@property (readonly) BOOL hidden;  // Is the property hidden?
@property (copy, readonly) NSString *kind;  // The kind of object or data returned by this property
@property (readonly) BOOL listed;  // Is the property's value a list?

- (void) closeSaving:(SystemEventsSaveOptions)saving savingIn:(SystemEventsFile *)savingIn;  // Close a document.
- (void) saveIn:(SystemEventsFile *)in_ as:(SystemEventsSaveableFileFormat)as;  // Save a document.
- (void) printWithProperties:(SystemEventsPrintSettings *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy an object.
- (void) moveTo:(SBObject *)to;  // Move an object to a new location.

@end

// The result of a command within a suite within a scripting definition
@interface SystemEventsScriptingResultObject : SBObject

@property (copy, readonly) NSString *objectDescription;  // The description of the property
@property (readonly) BOOL enumerated;  // Is the scripting result's value an enumerator?
@property (copy, readonly) NSString *kind;  // The kind of object or data returned by this property
@property (readonly) BOOL listed;  // Is the scripting result's value a list?

- (void) closeSaving:(SystemEventsSaveOptions)saving savingIn:(SystemEventsFile *)savingIn;  // Close a document.
- (void) saveIn:(SystemEventsFile *)in_ as:(SystemEventsSaveableFileFormat)as;  // Save a document.
- (void) printWithProperties:(SystemEventsPrintSettings *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy an object.
- (void) moveTo:(SBObject *)to;  // Move an object to a new location.

@end

// A suite within a scripting definition
@interface SystemEventsScriptingSuite : SBObject

- (SBElementArray *) scriptingCommands;
- (SBElementArray *) scriptingClasses;
- (SBElementArray *) scriptingEnumerations;

@property (copy, readonly) NSString *name;  // The name of the suite
- (NSString *) id;  // The unique identifier of the suite
@property (copy, readonly) NSString *objectDescription;  // The description of the suite
@property (readonly) BOOL hidden;  // Is the suite hidden?

- (void) closeSaving:(SystemEventsSaveOptions)saving savingIn:(SystemEventsFile *)savingIn;  // Close a document.
- (void) saveIn:(SystemEventsFile *)in_ as:(SystemEventsSaveableFileFormat)as;  // Save a document.
- (void) printWithProperties:(SystemEventsPrintSettings *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy an object.
- (void) moveTo:(SBObject *)to;  // Move an object to a new location.

@end


/*
 * Finder.h
 */

@class FinderApplication, FinderItem, FinderContainer, FinderComputerObject, FinderDisk, FinderFolder, FinderDesktopObject, FinderTrashObject, FinderFile, FinderAliasFile, FinderApplicationFile, FinderDocumentFile, FinderInternetLocationFile, FinderClipping, FinderPackage, FinderWindow, FinderFinderWindow, FinderDesktopWindow, FinderInformationWindow, FinderPreferencesWindow, FinderClippingWindow, FinderProcess, FinderApplicationProcess, FinderDeskAccessoryProcess, FinderPreferences, FinderLabel, FinderIconFamily, FinderIconViewOptions, FinderColumnViewOptions, FinderListViewOptions, FinderColumn, FinderAliasList;

enum FinderPriv {
    FinderPrivReadOnly = 'read',
    FinderPrivReadWrite = 'rdwr',
    FinderPrivWriteOnly = 'writ',
    FinderPrivNone = 'none'
};
typedef enum FinderPriv FinderPriv;

enum FinderEdfm {
    FinderEdfmMacOSFormat = 'dfhf',
    FinderEdfmMacOSExtendedFormat = 'dfh+',
    FinderEdfmUFSFormat = 'dfuf',
    FinderEdfmNFSFormat = 'dfnf',
    FinderEdfmAudioFormat = 'dfau',
    FinderEdfmProDOSFormat = 'dfpr',
    FinderEdfmMSDOSFormat = 'dfms',
    FinderEdfmNTFSFormat = 'dfnt',
    FinderEdfmISO9660Format = 'df96',
    FinderEdfmHighSierraFormat = 'dfhs',
    FinderEdfmQuickTakeFormat = 'dfqt',
    FinderEdfmApplePhotoFormat = 'dfph',
    FinderEdfmAppleShareFormat = 'dfas',
    FinderEdfmUDFFormat = 'dfud',
    FinderEdfmWebDAVFormat = 'dfwd',
    FinderEdfmFTPFormat = 'dfft',
    FinderEdfmPacketWrittenUDFFormat = 'dfpu',
    FinderEdfmXsanFormat = 'dfac',
    FinderEdfmUnknownFormat = 'df\?\?'
};
typedef enum FinderEdfm FinderEdfm;

enum FinderIpnl {
    FinderIpnlGeneralInformationPanel = 'gpnl',
    FinderIpnlSharingPanel = 'spnl',
    FinderIpnlMemoryPanel = 'mpnl',
    FinderIpnlPreviewPanel = 'vpnl',
    FinderIpnlApplicationPanel = 'apnl',
    FinderIpnlLanguagesPanel = 'pklg',
    FinderIpnlPluginsPanel = 'pkpg',
    FinderIpnlNameExtensionPanel = 'npnl',
    FinderIpnlCommentsPanel = 'cpnl',
    FinderIpnlContentIndexPanel = 'cinl',
    FinderIpnlBurningPanel = 'bpnl',
    FinderIpnlMoreInfoPanel = 'minl',
    FinderIpnlSimpleHeaderPanel = 'shnl'
};
typedef enum FinderIpnl FinderIpnl;

enum FinderPple {
    FinderPpleGeneralPreferencesPanel = 'pgnp',
    FinderPpleLabelPreferencesPanel = 'plbp',
    FinderPpleSidebarPreferencesPanel = 'psid',
    FinderPpleAdvancedPreferencesPanel = 'padv'
};
typedef enum FinderPple FinderPple;

enum FinderEcvw {
    FinderEcvwIconView = 'icnv',
    FinderEcvwListView = 'lsvw',
    FinderEcvwColumnView = 'clvw',
    FinderEcvwGroupView = 'grvw',
    FinderEcvwFlowView = 'flvw'
};
typedef enum FinderEcvw FinderEcvw;

enum FinderEarr {
    FinderEarrNotArranged = 'narr',
    FinderEarrSnapToGrid = 'grda',
    FinderEarrArrangedByName = 'nama',
    FinderEarrArrangedByModificationDate = 'mdta',
    FinderEarrArrangedByCreationDate = 'cdta',
    FinderEarrArrangedBySize = 'siza',
    FinderEarrArrangedByKind = 'kina',
    FinderEarrArrangedByLabel = 'laba'
};
typedef enum FinderEarr FinderEarr;

enum FinderEpos {
    FinderEposRight = 'lrgt',
    FinderEposBottom = 'lbot'
};
typedef enum FinderEpos FinderEpos;

enum FinderSodr {
    FinderSodrNormal = 'snrm',
    FinderSodrReversed = 'srvs'
};
typedef enum FinderSodr FinderSodr;

enum FinderElsv {
    FinderElsvNameColumn = 'elsn',
    FinderElsvModificationDateColumn = 'elsm',
    FinderElsvCreationDateColumn = 'elsc',
    FinderElsvSizeColumn = 'elss',
    FinderElsvKindColumn = 'elsk',
    FinderElsvLabelColumn = 'elsl',
    FinderElsvVersionColumn = 'elsv',
    FinderElsvCommentColumn = 'elsC'
};
typedef enum FinderElsv FinderElsv;

enum FinderLvic {
    FinderLvicSmallIcon = 'smic',
    FinderLvicLargeIcon = 'lgic'
};
typedef enum FinderLvic FinderLvic;



/*
 * Finder Basics
 */

// The Finder
@interface FinderApplication : SBApplication

- (SBElementArray *) items;
- (SBElementArray *) containers;
- (SBElementArray *) disks;
- (SBElementArray *) folders;
- (SBElementArray *) files;
- (SBElementArray *) aliasFiles;
- (SBElementArray *) applicationFiles;
- (SBElementArray *) documentFiles;
- (SBElementArray *) internetLocationFiles;
- (SBElementArray *) clippings;
- (SBElementArray *) packages;
- (SBElementArray *) windows;
- (SBElementArray *) FinderWindows;
- (SBElementArray *) clippingWindows;

@property (copy, readonly) SBObject *clipboard;  // (NOT AVAILABLE YET) the Finder’s clipboard window
@property (copy, readonly) NSString *name;  // the Finder’s name
@property BOOL visible;  // Is the Finder’s layer visible?
@property BOOL frontmost;  // Is the Finder the frontmost process?
@property (copy) SBObject *selection;  // the selection in the frontmost Finder window
@property (copy, readonly) SBObject *insertionLocation;  // the container in which a new folder would appear if “New Folder” was selected
@property (copy, readonly) NSString *productVersion;  // the version of the System software running on this computer
@property (copy, readonly) NSString *version;  // the version of the Finder
@property (copy, readonly) FinderDisk *startupDisk;  // the startup disk
@property (copy, readonly) FinderDesktopObject *desktop;  // the desktop
@property (copy, readonly) FinderTrashObject *trash;  // the trash
@property (copy, readonly) FinderFolder *home;  // the home directory
@property (copy, readonly) FinderComputerObject *computerContainer;  // the computer location (as in Go > Computer)
@property (copy, readonly) FinderPreferences *FinderPreferences;  // Various preferences that apply to the Finder as a whole

- (void) quit;  // Quit the Finder
- (void) activate;  // Activate the specified window (or the Finder)

// MARK: ワーニングの為、コメントに
//- (void) copy NS_RETURNS_NOT_RETAINED;  // (NOT AVAILABLE YET) Copy the selected items to the clipboard (the Finder must be the front application)

- (void) eject;  // Eject the specified disk(s)
- (void) emptySecurity:(BOOL)security;  // Empty the trash
- (void) restart;  // Restart the computer
- (void) shutDown;  // Shut Down the computer
- (void) sleep;  // Put the computer to sleep

@end



/*
 * Finder items
 */

// An item
@interface FinderItem : SBObject

@property (copy) NSString *name;  // the name of the item
@property (copy, readonly) NSString *displayedName;  // the user-visible name of the item
@property (copy) NSString *nameExtension;  // the name extension of the item (such as “txt”)
@property BOOL extensionHidden;  // Is the item's extension hidden from the user?
@property (readonly) NSInteger index;  // the index in the front-to-back ordering within its container
@property (copy, readonly) SBObject *container;  // the container of the item
@property (copy, readonly) SBObject *disk;  // the disk on which the item is stored
@property NSPoint position;  // the position of the item within its parent window (can only be set for an item in a window viewed as icons or buttons)
@property NSPoint desktopPosition;  // the position of the item on the desktop
@property NSRect bounds;  // the bounding rectangle of the item (can only be set for an item in a window viewed as icons or buttons)
@property NSInteger labelIndex;  // the label of the item
@property BOOL locked;  // Is the file locked?
@property (copy, readonly) NSString *kind;  // the kind of the item
@property (copy, readonly) NSString *objectDescription;  // a description of the item
@property (copy) NSString *comment;  // the comment of the item, displayed in the “Get Info” window
@property (readonly) long long size;  // the logical size of the item
@property (readonly) long long physicalSize;  // the actual space used by the item on disk
@property (copy, readonly) NSDate *creationDate;  // the date on which the item was created
@property (copy) NSDate *modificationDate;  // the date on which the item was last modified
@property (copy) FinderIconFamily *icon;  // the icon bitmap of the item
@property (copy, readonly) NSString *URL;  // the URL of the item
@property (copy) NSString *owner;  // the user that owns the container
@property (copy) NSString *group;  // the user or group that has special access to the container
@property FinderPriv ownerPrivileges;
@property FinderPriv groupPrivileges;
@property FinderPriv everyonesPrivileges;
@property (copy, readonly) SBObject *informationWindow;  // the information window for the item
@property (copy) NSDictionary *properties;  // every property of an item

- (void) openUsing:(SBObject *)using_ withProperties:(NSDictionary *)withProperties;  // Open the specified object(s)
- (void) printWithProperties:(NSDictionary *)withProperties;  // Print the specified object(s)
- (void) activate;  // Activate the specified window (or the Finder)
- (void) close;  // Close an object
- (NSInteger) dataSizeAs:(NSNumber *)as;  // Return the size in bytes of an object
- (SBObject *) delete;  // Move an item from its container to the trash
- (SBObject *) duplicateTo:(SBObject *)to replacing:(BOOL)replacing routingSuppressed:(BOOL)routingSuppressed exactCopy:(BOOL)exactCopy;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to replacing:(BOOL)replacing positionedAt:(NSArray *)positionedAt routingSuppressed:(BOOL)routingSuppressed;  // Move object(s) to a new location
- (void) select;  // Select the specified object(s)
- (SBObject *) sortBy:(SEL)by;  // Return the specified object(s) in a sorted list
- (void) cleanUpBy:(SEL)by;  // Arrange items in window nicely (only applies to open windows in icon view that are not kept arranged)
- (void) eject;  // Eject the specified disk(s)
- (void) emptySecurity:(BOOL)security;  // Empty the trash
- (void) erase;  // (NOT AVAILABLE) Erase the specified disk(s)
- (void) reveal;  // Bring the specified object(s) into view
- (void) updateNecessity:(BOOL)necessity registeringApplications:(BOOL)registeringApplications;  // Update the display of the specified object(s) to match their on-disk representation

@end



/*
 * Containers and folders
 */

// An item that contains other items
@interface FinderContainer : FinderItem

- (SBElementArray *) items;
- (SBElementArray *) containers;
- (SBElementArray *) folders;
- (SBElementArray *) files;
- (SBElementArray *) aliasFiles;
- (SBElementArray *) applicationFiles;
- (SBElementArray *) documentFiles;
- (SBElementArray *) internetLocationFiles;
- (SBElementArray *) clippings;
- (SBElementArray *) packages;

@property (copy, readonly) SBObject *entireContents;  // the entire contents of the container, including the contents of its children
@property (readonly) BOOL expandable;  // (NOT AVAILABLE YET) Is the container capable of being expanded as an outline?
@property BOOL expanded;  // (NOT AVAILABLE YET) Is the container opened as an outline? (can only be set for containers viewed as lists)
@property BOOL completelyExpanded;  // (NOT AVAILABLE YET) Are the container and all of its children opened as outlines? (can only be set for containers viewed as lists)
@property (copy, readonly) SBObject *containerWindow;  // the container window for this folder


@end

// the Computer location (as in Go > Computer)
@interface FinderComputerObject : FinderItem


@end

// A disk
@interface FinderDisk : FinderContainer

- (SBElementArray *) items;
- (SBElementArray *) containers;
- (SBElementArray *) folders;
- (SBElementArray *) files;
- (SBElementArray *) aliasFiles;
- (SBElementArray *) applicationFiles;
- (SBElementArray *) documentFiles;
- (SBElementArray *) internetLocationFiles;
- (SBElementArray *) clippings;
- (SBElementArray *) packages;

- (NSInteger) id;  // the unique id for this disk (unchanged while disk remains connected and Finder remains running)
@property (readonly) long long capacity;  // the total number of bytes (free or used) on the disk
@property (readonly) long long freeSpace;  // the number of free bytes left on the disk
@property (readonly) BOOL ejectable;  // Can the media be ejected (floppies, CDs, and so on)?
@property (readonly) BOOL localVolume;  // Is the media a local volume (as opposed to a file server)?
@property (readonly) BOOL startup;  // Is this disk the boot disk?
@property (readonly) FinderEdfm format;  // the filesystem format of this disk
@property (readonly) BOOL journalingEnabled;  // Does this disk do file system journaling?
@property BOOL ignorePrivileges;  // Ignore permissions on this disk?


@end

// A folder
@interface FinderFolder : FinderContainer

- (SBElementArray *) items;
- (SBElementArray *) containers;
- (SBElementArray *) folders;
- (SBElementArray *) files;
- (SBElementArray *) aliasFiles;
- (SBElementArray *) applicationFiles;
- (SBElementArray *) documentFiles;
- (SBElementArray *) internetLocationFiles;
- (SBElementArray *) clippings;
- (SBElementArray *) packages;


@end

// Desktop-object is the class of the “desktop” object
@interface FinderDesktopObject : FinderContainer

- (SBElementArray *) items;
- (SBElementArray *) containers;
- (SBElementArray *) disks;
- (SBElementArray *) folders;
- (SBElementArray *) files;
- (SBElementArray *) aliasFiles;
- (SBElementArray *) applicationFiles;
- (SBElementArray *) documentFiles;
- (SBElementArray *) internetLocationFiles;
- (SBElementArray *) clippings;
- (SBElementArray *) packages;


@end

// Trash-object is the class of the “trash” object
@interface FinderTrashObject : FinderContainer

- (SBElementArray *) items;
- (SBElementArray *) containers;
- (SBElementArray *) folders;
- (SBElementArray *) files;
- (SBElementArray *) aliasFiles;
- (SBElementArray *) applicationFiles;
- (SBElementArray *) documentFiles;
- (SBElementArray *) internetLocationFiles;
- (SBElementArray *) clippings;
- (SBElementArray *) packages;

@property BOOL warnsBeforeEmptying;  // Display a dialog when emptying the trash?


@end



/*
 * Files
 */

// A file
@interface FinderFile : FinderItem

@property (copy) NSNumber *fileType;  // the OSType identifying the type of data contained in the item
@property (copy) NSNumber *creatorType;  // the OSType identifying the application that created the item
@property BOOL stationery;  // Is the file a stationery pad?
@property (copy, readonly) NSString *productVersion;  // the version of the product (visible at the top of the “Get Info” window)
@property (copy, readonly) NSString *version;  // the version of the file (visible at the bottom of the “Get Info” window)


@end

// An alias file (created with “Make Alias”)
@interface FinderAliasFile : FinderFile

@property (copy) SBObject *originalItem;  // the original item pointed to by the alias


@end

// An application's file on disk
@interface FinderApplicationFile : FinderFile

- (NSString *) id;  // the bundle identifier or creator type of the application
@property (readonly) NSInteger suggestedSize;  // (AVAILABLE IN 10.1 TO 10.4) the memory size with which the developer recommends the application be launched
@property NSInteger minimumSize;  // (AVAILABLE IN 10.1 TO 10.4) the smallest memory size with which the application can be launched
@property NSInteger preferredSize;  // (AVAILABLE IN 10.1 TO 10.4) the memory size with which the application will be launched
@property (readonly) BOOL acceptsHighLevelEvents;  // Is the application high-level event aware? (OBSOLETE: always returns true)
@property (readonly) BOOL hasScriptingTerminology;  // Does the process have a scripting terminology, i.e., can it be scripted?
@property BOOL opensInClassic;  // (AVAILABLE IN 10.1 TO 10.4) Should the application launch in the Classic environment?


@end

// A document file
@interface FinderDocumentFile : FinderFile


@end

// A file containing an internet location
@interface FinderInternetLocationFile : FinderFile

@property (copy, readonly) NSString *location;  // the internet location


@end

// A clipping
@interface FinderClipping : FinderFile

@property (copy, readonly) SBObject *clippingWindow;  // (NOT AVAILABLE YET) the clipping window for this clipping


@end

// A package
@interface FinderPackage : FinderItem


@end



/*
 * Window classes
 */

// A window
@interface FinderWindow : SBObject

- (id) id;  // the unique id for this window
@property NSPoint position;  // the upper left position of the window
@property NSRect bounds;  // the boundary rectangle for the window
@property (readonly) BOOL titled;  // Does the window have a title bar?
@property (copy, readonly) NSString *name;  // the name of the window
@property NSInteger index;  // the number of the window in the front-to-back layer ordering
@property (readonly) BOOL closeable;  // Does the window have a close box?
@property (readonly) BOOL floating;  // Does the window have a title bar?
@property (readonly) BOOL modal;  // Is the window modal?
@property (readonly) BOOL resizable;  // Is the window resizable?
@property (readonly) BOOL zoomable;  // Is the window zoomable?
@property BOOL zoomed;  // Is the window zoomed?
@property (readonly) BOOL visible;  // Is the window visible (always true for open Finder windows)?
@property BOOL collapsed;  // Is the window collapsed
@property (copy) NSDictionary *properties;  // every property of a window

- (void) openUsing:(SBObject *)using_ withProperties:(NSDictionary *)withProperties;  // Open the specified object(s)
- (void) printWithProperties:(NSDictionary *)withProperties;  // Print the specified object(s)
- (void) activate;  // Activate the specified window (or the Finder)
- (void) close;  // Close an object
- (NSInteger) dataSizeAs:(NSNumber *)as;  // Return the size in bytes of an object
- (SBObject *) delete;  // Move an item from its container to the trash
- (SBObject *) duplicateTo:(SBObject *)to replacing:(BOOL)replacing routingSuppressed:(BOOL)routingSuppressed exactCopy:(BOOL)exactCopy;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to replacing:(BOOL)replacing positionedAt:(NSArray *)positionedAt routingSuppressed:(BOOL)routingSuppressed;  // Move object(s) to a new location
- (void) select;  // Select the specified object(s)
- (SBObject *) sortBy:(SEL)by;  // Return the specified object(s) in a sorted list
- (void) cleanUpBy:(SEL)by;  // Arrange items in window nicely (only applies to open windows in icon view that are not kept arranged)
- (void) eject;  // Eject the specified disk(s)
- (void) emptySecurity:(BOOL)security;  // Empty the trash
- (void) erase;  // (NOT AVAILABLE) Erase the specified disk(s)
- (void) reveal;  // Bring the specified object(s) into view
- (void) updateNecessity:(BOOL)necessity registeringApplications:(BOOL)registeringApplications;  // Update the display of the specified object(s) to match their on-disk representation

@end

// A file viewer window
@interface FinderFinderWindow : FinderWindow

@property (copy) SBObject *target;  // the container at which this file viewer is targeted
@property FinderEcvw currentView;  // the current view for the container window
@property (copy, readonly) FinderIconViewOptions *iconViewOptions;  // the icon view options for the container window
@property (copy, readonly) FinderListViewOptions *listViewOptions;  // the list view options for the container window
@property (copy, readonly) FinderColumnViewOptions *columnViewOptions;  // the column view options for the container window
@property BOOL toolbarVisible;  // Is the window's toolbar visible?
@property BOOL statusbarVisible;  // Is the window's status bar visible?
@property NSInteger sidebarWidth;  // the width of the sidebar for the container window


@end

// the desktop window
@interface FinderDesktopWindow : FinderFinderWindow


@end

// An inspector window (opened by “Show Info”)
@interface FinderInformationWindow : FinderWindow

@property (copy, readonly) SBObject *item;  // the item from which this window was opened
@property FinderIpnl currentPanel;  // the current panel in the information window


@end

// The Finder Preferences window
@interface FinderPreferencesWindow : FinderWindow

@property FinderPple currentPanel;  // The current panel in the Finder preferences window


@end

// The window containing a clipping
@interface FinderClippingWindow : FinderWindow


@end



/*
 * Legacy suite
 */

// The Finder
@interface FinderApplication (LegacySuite)

@property (copy) FinderFile *desktopPicture;  // the desktop picture of the main monitor

@end

// A process running on this computer
@interface FinderProcess : SBObject

@property (copy, readonly) NSString *name;  // the name of the process
@property BOOL visible;  // Is the process' layer visible?
@property BOOL frontmost;  // Is the process the frontmost process?
@property (copy, readonly) SBObject *file;  // the file from which the process was launched
@property (copy, readonly) NSNumber *fileType;  // the OSType of the file type of the process
@property (copy, readonly) NSNumber *creatorType;  // the OSType of the creator of the process (the signature)
@property (readonly) BOOL acceptsHighLevelEvents;  // Is the process high-level event aware (accepts open application, open document, print document, and quit)?
@property (readonly) BOOL acceptsRemoteEvents;  // Does the process accept remote events?
@property (readonly) BOOL hasScriptingTerminology;  // Does the process have a scripting terminology, i.e., can it be scripted?
@property (readonly) NSInteger totalPartitionSize;  // the size of the partition with which the process was launched
@property (readonly) NSInteger partitionSpaceUsed;  // the number of bytes currently used in the process' partition

- (void) openUsing:(SBObject *)using_ withProperties:(NSDictionary *)withProperties;  // Open the specified object(s)
- (void) printWithProperties:(NSDictionary *)withProperties;  // Print the specified object(s)
- (void) activate;  // Activate the specified window (or the Finder)
- (void) close;  // Close an object
- (NSInteger) dataSizeAs:(NSNumber *)as;  // Return the size in bytes of an object
- (SBObject *) delete;  // Move an item from its container to the trash
- (SBObject *) duplicateTo:(SBObject *)to replacing:(BOOL)replacing routingSuppressed:(BOOL)routingSuppressed exactCopy:(BOOL)exactCopy;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to replacing:(BOOL)replacing positionedAt:(NSArray *)positionedAt routingSuppressed:(BOOL)routingSuppressed;  // Move object(s) to a new location
- (void) select;  // Select the specified object(s)
- (SBObject *) sortBy:(SEL)by;  // Return the specified object(s) in a sorted list
- (void) cleanUpBy:(SEL)by;  // Arrange items in window nicely (only applies to open windows in icon view that are not kept arranged)
- (void) eject;  // Eject the specified disk(s)
- (void) emptySecurity:(BOOL)security;  // Empty the trash
- (void) erase;  // (NOT AVAILABLE) Erase the specified disk(s)
- (void) reveal;  // Bring the specified object(s) into view
- (void) updateNecessity:(BOOL)necessity registeringApplications:(BOOL)registeringApplications;  // Update the display of the specified object(s) to match their on-disk representation

@end

// A process launched from an application file
@interface FinderApplicationProcess : FinderProcess

@property (copy, readonly) FinderApplicationFile *applicationFile;  // the application file from which this process was launched


@end

// A process launched from a desk accessory file
@interface FinderDeskAccessoryProcess : FinderProcess

@property (copy, readonly) SBObject *deskAccessoryFile;  // the desk accessory file from which this process was launched


@end



/*
 * Type Definitions
 */

// The Finder Preferences
@interface FinderPreferences : SBObject

@property (copy, readonly) FinderPreferencesWindow *window;  // the window that would open if Finder preferences was opened
@property (copy, readonly) FinderIconViewOptions *iconViewOptions;  // the default icon view options
@property (copy, readonly) FinderListViewOptions *listViewOptions;  // the default list view options
@property (copy, readonly) FinderColumnViewOptions *columnViewOptions;  // the column view options for all windows
@property BOOL foldersSpringOpen;  // Spring open folders after the specified delay?
@property double delayBeforeSpringing;  // the delay before springing open a container in seconds (from 0.167 to 1.169)
@property BOOL desktopShowsHardDisks;  // Hard disks appear on the desktop?
@property BOOL desktopShowsExternalHardDisks;  // External hard disks appear on the desktop?
@property BOOL desktopShowsRemovableMedia;  // CDs, DVDs, and iPods appear on the desktop?
@property BOOL desktopShowsConnectedServers;  // Connected servers appear on the desktop?
@property (copy) SBObject *newWindowTarget;  // target location for a newly-opened Finder window
@property BOOL foldersOpenInNewWindows;  // Folders open into new windows?
@property BOOL foldersOpenInNewTabs;  // Folders open into new tabs?
@property BOOL newWindowsOpenInColumnView;  // Open new windows in column view?
@property BOOL allNameExtensionsShowing;  // Show name extensions, even for items whose “extension hidden” is true?

- (void) openUsing:(SBObject *)using_ withProperties:(NSDictionary *)withProperties;  // Open the specified object(s)
- (void) printWithProperties:(NSDictionary *)withProperties;  // Print the specified object(s)
- (void) activate;  // Activate the specified window (or the Finder)
- (void) close;  // Close an object
- (NSInteger) dataSizeAs:(NSNumber *)as;  // Return the size in bytes of an object
- (SBObject *) delete;  // Move an item from its container to the trash
- (SBObject *) duplicateTo:(SBObject *)to replacing:(BOOL)replacing routingSuppressed:(BOOL)routingSuppressed exactCopy:(BOOL)exactCopy;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to replacing:(BOOL)replacing positionedAt:(NSArray *)positionedAt routingSuppressed:(BOOL)routingSuppressed;  // Move object(s) to a new location
- (void) select;  // Select the specified object(s)
- (SBObject *) sortBy:(SEL)by;  // Return the specified object(s) in a sorted list
- (void) cleanUpBy:(SEL)by;  // Arrange items in window nicely (only applies to open windows in icon view that are not kept arranged)
- (void) eject;  // Eject the specified disk(s)
- (void) emptySecurity:(BOOL)security;  // Empty the trash
- (void) erase;  // (NOT AVAILABLE) Erase the specified disk(s)
- (void) reveal;  // Bring the specified object(s) into view
- (void) updateNecessity:(BOOL)necessity registeringApplications:(BOOL)registeringApplications;  // Update the display of the specified object(s) to match their on-disk representation

@end

// (NOT AVAILABLE YET) A Finder label (name and color)
@interface FinderLabel : SBObject

@property (copy) NSString *name;  // the name associated with the label
@property NSInteger index;  // the index in the front-to-back ordering within its container
@property (copy) id color;  // the color associated with the label

- (void) openUsing:(SBObject *)using_ withProperties:(NSDictionary *)withProperties;  // Open the specified object(s)
- (void) printWithProperties:(NSDictionary *)withProperties;  // Print the specified object(s)
- (void) activate;  // Activate the specified window (or the Finder)
- (void) close;  // Close an object
- (NSInteger) dataSizeAs:(NSNumber *)as;  // Return the size in bytes of an object
- (SBObject *) delete;  // Move an item from its container to the trash
- (SBObject *) duplicateTo:(SBObject *)to replacing:(BOOL)replacing routingSuppressed:(BOOL)routingSuppressed exactCopy:(BOOL)exactCopy;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to replacing:(BOOL)replacing positionedAt:(NSArray *)positionedAt routingSuppressed:(BOOL)routingSuppressed;  // Move object(s) to a new location
- (void) select;  // Select the specified object(s)
- (SBObject *) sortBy:(SEL)by;  // Return the specified object(s) in a sorted list
- (void) cleanUpBy:(SEL)by;  // Arrange items in window nicely (only applies to open windows in icon view that are not kept arranged)
- (void) eject;  // Eject the specified disk(s)
- (void) emptySecurity:(BOOL)security;  // Empty the trash
- (void) erase;  // (NOT AVAILABLE) Erase the specified disk(s)
- (void) reveal;  // Bring the specified object(s) into view
- (void) updateNecessity:(BOOL)necessity registeringApplications:(BOOL)registeringApplications;  // Update the display of the specified object(s) to match their on-disk representation

@end

// (NOT AVAILABLE YET) A family of icons
@interface FinderIconFamily : SBObject

@property (copy, readonly) id largeMonochromeIconAndMask;  // the large black-and-white icon and the mask for large icons
@property (copy, readonly) id large8BitMask;  // the large 8-bit mask for large 32-bit icons
@property (copy, readonly) id large32BitIcon;  // the large 32-bit color icon
@property (copy, readonly) id large8BitIcon;  // the large 8-bit color icon
@property (copy, readonly) id large4BitIcon;  // the large 4-bit color icon
@property (copy, readonly) id smallMonochromeIconAndMask;  // the small black-and-white icon and the mask for small icons
@property (copy, readonly) id small8BitMask;  // the small 8-bit mask for small 32-bit icons
@property (copy, readonly) id small32BitIcon;  // the small 32-bit color icon
@property (copy, readonly) id small8BitIcon;  // the small 8-bit color icon
@property (copy, readonly) id small4BitIcon;  // the small 4-bit color icon

- (void) openUsing:(SBObject *)using_ withProperties:(NSDictionary *)withProperties;  // Open the specified object(s)
- (void) printWithProperties:(NSDictionary *)withProperties;  // Print the specified object(s)
- (void) activate;  // Activate the specified window (or the Finder)
- (void) close;  // Close an object
- (NSInteger) dataSizeAs:(NSNumber *)as;  // Return the size in bytes of an object
- (SBObject *) delete;  // Move an item from its container to the trash
- (SBObject *) duplicateTo:(SBObject *)to replacing:(BOOL)replacing routingSuppressed:(BOOL)routingSuppressed exactCopy:(BOOL)exactCopy;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to replacing:(BOOL)replacing positionedAt:(NSArray *)positionedAt routingSuppressed:(BOOL)routingSuppressed;  // Move object(s) to a new location
- (void) select;  // Select the specified object(s)
- (SBObject *) sortBy:(SEL)by;  // Return the specified object(s) in a sorted list
- (void) cleanUpBy:(SEL)by;  // Arrange items in window nicely (only applies to open windows in icon view that are not kept arranged)
- (void) eject;  // Eject the specified disk(s)
- (void) emptySecurity:(BOOL)security;  // Empty the trash
- (void) erase;  // (NOT AVAILABLE) Erase the specified disk(s)
- (void) reveal;  // Bring the specified object(s) into view
- (void) updateNecessity:(BOOL)necessity registeringApplications:(BOOL)registeringApplications;  // Update the display of the specified object(s) to match their on-disk representation

@end

// the icon view options
@interface FinderIconViewOptions : SBObject

@property FinderEarr arrangement;  // the property by which to keep icons arranged
@property NSInteger iconSize;  // the size of icons displayed in the icon view
@property BOOL showsItemInfo;  // additional info about an item displayed in icon view
@property BOOL showsIconPreview;  // displays a preview of the item in icon view
@property NSInteger textSize;  // the size of the text displayed in the icon view
@property FinderEpos labelPosition;  // the location of the label in reference to the icon
@property (copy) FinderFile *backgroundPicture;  // the background picture of the icon view
@property (copy) id backgroundColor;  // the background color of the icon view

- (void) openUsing:(SBObject *)using_ withProperties:(NSDictionary *)withProperties;  // Open the specified object(s)
- (void) printWithProperties:(NSDictionary *)withProperties;  // Print the specified object(s)
- (void) activate;  // Activate the specified window (or the Finder)
- (void) close;  // Close an object
- (NSInteger) dataSizeAs:(NSNumber *)as;  // Return the size in bytes of an object
- (SBObject *) delete;  // Move an item from its container to the trash
- (SBObject *) duplicateTo:(SBObject *)to replacing:(BOOL)replacing routingSuppressed:(BOOL)routingSuppressed exactCopy:(BOOL)exactCopy;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to replacing:(BOOL)replacing positionedAt:(NSArray *)positionedAt routingSuppressed:(BOOL)routingSuppressed;  // Move object(s) to a new location
- (void) select;  // Select the specified object(s)
- (SBObject *) sortBy:(SEL)by;  // Return the specified object(s) in a sorted list
- (void) cleanUpBy:(SEL)by;  // Arrange items in window nicely (only applies to open windows in icon view that are not kept arranged)
- (void) eject;  // Eject the specified disk(s)
- (void) emptySecurity:(BOOL)security;  // Empty the trash
- (void) erase;  // (NOT AVAILABLE) Erase the specified disk(s)
- (void) reveal;  // Bring the specified object(s) into view
- (void) updateNecessity:(BOOL)necessity registeringApplications:(BOOL)registeringApplications;  // Update the display of the specified object(s) to match their on-disk representation

@end

// the column view options
@interface FinderColumnViewOptions : SBObject

@property NSInteger textSize;  // the size of the text displayed in the column view
@property BOOL showsIcon;  // displays an icon next to the label in column view
@property BOOL showsIconPreview;  // displays a preview of the item in column view
@property BOOL showsPreviewColumn;  // displays the preview column in column view
@property BOOL disclosesPreviewPane;  // discloses the preview pane of the preview column in column view

- (void) openUsing:(SBObject *)using_ withProperties:(NSDictionary *)withProperties;  // Open the specified object(s)
- (void) printWithProperties:(NSDictionary *)withProperties;  // Print the specified object(s)
- (void) activate;  // Activate the specified window (or the Finder)
- (void) close;  // Close an object
- (NSInteger) dataSizeAs:(NSNumber *)as;  // Return the size in bytes of an object
- (SBObject *) delete;  // Move an item from its container to the trash
- (SBObject *) duplicateTo:(SBObject *)to replacing:(BOOL)replacing routingSuppressed:(BOOL)routingSuppressed exactCopy:(BOOL)exactCopy;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to replacing:(BOOL)replacing positionedAt:(NSArray *)positionedAt routingSuppressed:(BOOL)routingSuppressed;  // Move object(s) to a new location
- (void) select;  // Select the specified object(s)
- (SBObject *) sortBy:(SEL)by;  // Return the specified object(s) in a sorted list
- (void) cleanUpBy:(SEL)by;  // Arrange items in window nicely (only applies to open windows in icon view that are not kept arranged)
- (void) eject;  // Eject the specified disk(s)
- (void) emptySecurity:(BOOL)security;  // Empty the trash
- (void) erase;  // (NOT AVAILABLE) Erase the specified disk(s)
- (void) reveal;  // Bring the specified object(s) into view
- (void) updateNecessity:(BOOL)necessity registeringApplications:(BOOL)registeringApplications;  // Update the display of the specified object(s) to match their on-disk representation

@end

// the list view options
@interface FinderListViewOptions : SBObject

- (SBElementArray *) columns;

@property BOOL calculatesFolderSizes;  // Are folder sizes calculated and displayed in the window?
@property BOOL showsIconPreview;  // displays a preview of the item in list view
@property FinderLvic iconSize;  // the size of icons displayed in the list view
@property NSInteger textSize;  // the size of the text displayed in the list view
@property (copy) FinderColumn *sortColumn;  // the column that the list view is sorted on
@property BOOL usesRelativeDates;  // Are relative dates (e.g., today, yesterday) shown in the list view?

- (void) openUsing:(SBObject *)using_ withProperties:(NSDictionary *)withProperties;  // Open the specified object(s)
- (void) printWithProperties:(NSDictionary *)withProperties;  // Print the specified object(s)
- (void) activate;  // Activate the specified window (or the Finder)
- (void) close;  // Close an object
- (NSInteger) dataSizeAs:(NSNumber *)as;  // Return the size in bytes of an object
- (SBObject *) delete;  // Move an item from its container to the trash
- (SBObject *) duplicateTo:(SBObject *)to replacing:(BOOL)replacing routingSuppressed:(BOOL)routingSuppressed exactCopy:(BOOL)exactCopy;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to replacing:(BOOL)replacing positionedAt:(NSArray *)positionedAt routingSuppressed:(BOOL)routingSuppressed;  // Move object(s) to a new location
- (void) select;  // Select the specified object(s)
- (SBObject *) sortBy:(SEL)by;  // Return the specified object(s) in a sorted list
- (void) cleanUpBy:(SEL)by;  // Arrange items in window nicely (only applies to open windows in icon view that are not kept arranged)
- (void) eject;  // Eject the specified disk(s)
- (void) emptySecurity:(BOOL)security;  // Empty the trash
- (void) erase;  // (NOT AVAILABLE) Erase the specified disk(s)
- (void) reveal;  // Bring the specified object(s) into view
- (void) updateNecessity:(BOOL)necessity registeringApplications:(BOOL)registeringApplications;  // Update the display of the specified object(s) to match their on-disk representation

@end

// a column of a list view
@interface FinderColumn : SBObject

@property NSInteger index;  // the index in the front-to-back ordering within its container
@property (readonly) FinderElsv name;  // the column name
@property FinderSodr sortDirection;  // The direction in which the window is sorted
@property NSInteger width;  // the width of this column
@property (readonly) NSInteger minimumWidth;  // the minimum allowed width of this column
@property (readonly) NSInteger maximumWidth;  // the maximum allowed width of this column
@property BOOL visible;  // is this column visible

- (void) openUsing:(SBObject *)using_ withProperties:(NSDictionary *)withProperties;  // Open the specified object(s)
- (void) printWithProperties:(NSDictionary *)withProperties;  // Print the specified object(s)
- (void) activate;  // Activate the specified window (or the Finder)
- (void) close;  // Close an object
- (NSInteger) dataSizeAs:(NSNumber *)as;  // Return the size in bytes of an object
- (SBObject *) delete;  // Move an item from its container to the trash
- (SBObject *) duplicateTo:(SBObject *)to replacing:(BOOL)replacing routingSuppressed:(BOOL)routingSuppressed exactCopy:(BOOL)exactCopy;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to replacing:(BOOL)replacing positionedAt:(NSArray *)positionedAt routingSuppressed:(BOOL)routingSuppressed;  // Move object(s) to a new location
- (void) select;  // Select the specified object(s)
- (SBObject *) sortBy:(SEL)by;  // Return the specified object(s) in a sorted list
- (void) cleanUpBy:(SEL)by;  // Arrange items in window nicely (only applies to open windows in icon view that are not kept arranged)
- (void) eject;  // Eject the specified disk(s)
- (void) emptySecurity:(BOOL)security;  // Empty the trash
- (void) erase;  // (NOT AVAILABLE) Erase the specified disk(s)
- (void) reveal;  // Bring the specified object(s) into view
- (void) updateNecessity:(BOOL)necessity registeringApplications:(BOOL)registeringApplications;  // Update the display of the specified object(s) to match their on-disk representation

@end

// A list of aliases.  Use ‘as alias list’ when a list of aliases is needed (instead of a list of file system item references).
@interface FinderAliasList : SBObject

- (void) openUsing:(SBObject *)using_ withProperties:(NSDictionary *)withProperties;  // Open the specified object(s)
- (void) printWithProperties:(NSDictionary *)withProperties;  // Print the specified object(s)
- (void) activate;  // Activate the specified window (or the Finder)
- (void) close;  // Close an object
- (NSInteger) dataSizeAs:(NSNumber *)as;  // Return the size in bytes of an object
- (SBObject *) delete;  // Move an item from its container to the trash
- (SBObject *) duplicateTo:(SBObject *)to replacing:(BOOL)replacing routingSuppressed:(BOOL)routingSuppressed exactCopy:(BOOL)exactCopy;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (SBObject *) moveTo:(SBObject *)to replacing:(BOOL)replacing positionedAt:(NSArray *)positionedAt routingSuppressed:(BOOL)routingSuppressed;  // Move object(s) to a new location
- (void) select;  // Select the specified object(s)
- (SBObject *) sortBy:(SEL)by;  // Return the specified object(s) in a sorted list
- (void) cleanUpBy:(SEL)by;  // Arrange items in window nicely (only applies to open windows in icon view that are not kept arranged)
- (void) eject;  // Eject the specified disk(s)
- (void) emptySecurity:(BOOL)security;  // Empty the trash
- (void) erase;  // (NOT AVAILABLE) Erase the specified disk(s)
- (void) reveal;  // Bring the specified object(s) into view
- (void) updateNecessity:(BOOL)necessity registeringApplications:(BOOL)registeringApplications;  // Update the display of the specified object(s) to match their on-disk representation

@end


/*
 * iTunes.h
 */

@class iTunesPrintSettings, iTunesApplication, iTunesItem, iTunesAirPlayDevice, iTunesArtwork, iTunesEncoder, iTunesEQPreset, iTunesPlaylist, iTunesAudioCDPlaylist, iTunesLibraryPlaylist, iTunesRadioTunerPlaylist, iTunesSource, iTunesTrack, iTunesAudioCDTrack, iTunesFileTrack, iTunesSharedTrack, iTunesURLTrack, iTunesUserPlaylist, iTunesFolderPlaylist, iTunesVisual, iTunesWindow, iTunesBrowserWindow, iTunesEQWindow, iTunesPlaylistWindow;

enum iTunesEKnd {
    iTunesEKndTrackListing = 'kTrk' /* a basic listing of tracks within a playlist */,
    iTunesEKndAlbumListing = 'kAlb' /* a listing of a playlist grouped by album */,
    iTunesEKndCdInsert = 'kCDi' /* a printout of the playlist for jewel case inserts */
};
typedef enum iTunesEKnd iTunesEKnd;

enum iTunesEnum {
    iTunesEnumStandard = 'lwst' /* Standard PostScript error handling */,
    iTunesEnumDetailed = 'lwdt' /* print a detailed report of PostScript errors */
};
typedef enum iTunesEnum iTunesEnum;

enum iTunesEPlS {
    iTunesEPlSStopped = 'kPSS',
    iTunesEPlSPlaying = 'kPSP',
    iTunesEPlSPaused = 'kPSp',
    iTunesEPlSFastForwarding = 'kPSF',
    iTunesEPlSRewinding = 'kPSR'
};
typedef enum iTunesEPlS iTunesEPlS;

enum iTunesERpt {
    iTunesERptOff = 'kRpO',
    iTunesERptOne = 'kRp1',
    iTunesERptAll = 'kAll'
};
typedef enum iTunesERpt iTunesERpt;

enum iTunesEVSz {
    iTunesEVSzSmall = 'kVSS',
    iTunesEVSzMedium = 'kVSM',
    iTunesEVSzLarge = 'kVSL'
};
typedef enum iTunesEVSz iTunesEVSz;

enum iTunesESrc {
    iTunesESrcLibrary = 'kLib',
    iTunesESrcIPod = 'kPod',
    iTunesESrcAudioCD = 'kACD',
    iTunesESrcMP3CD = 'kMCD',
    iTunesESrcRadioTuner = 'kTun',
    iTunesESrcSharedLibrary = 'kShd',
    iTunesESrcUnknown = 'kUnk'
};
typedef enum iTunesESrc iTunesESrc;

enum iTunesESrA {
    iTunesESrAAlbums = 'kSrL' /* albums only */,
    iTunesESrAAll = 'kAll' /* all text fields */,
    iTunesESrAArtists = 'kSrR' /* artists only */,
    iTunesESrAComposers = 'kSrC' /* composers only */,
    iTunesESrADisplayed = 'kSrV' /* visible text fields */,
    iTunesESrASongs = 'kSrS' /* song names only */
};
typedef enum iTunesESrA iTunesESrA;

enum iTunesESpK {
    iTunesESpKNone = 'kNon',
    iTunesESpKBooks = 'kSpA',
    iTunesESpKFolder = 'kSpF',
    iTunesESpKGenius = 'kSpG',
    iTunesESpKITunesU = 'kSpU',
    iTunesESpKLibrary = 'kSpL',
    iTunesESpKMovies = 'kSpI',
    iTunesESpKMusic = 'kSpZ',
    iTunesESpKPodcasts = 'kSpP',
    iTunesESpKPurchasedMusic = 'kSpM',
    iTunesESpKTVShows = 'kSpT'
};
typedef enum iTunesESpK iTunesESpK;

enum iTunesEVdK {
    iTunesEVdKNone = 'kNon' /* not a video or unknown video kind */,
    iTunesEVdKHomeVideo = 'kVdH' /* home video track */,
    iTunesEVdKMovie = 'kVdM' /* movie track */,
    iTunesEVdKMusicVideo = 'kVdV' /* music video track */,
    iTunesEVdKTVShow = 'kVdT' /* TV show track */
};
typedef enum iTunesEVdK iTunesEVdK;

enum iTunesERtK {
    iTunesERtKUser = 'kRtU' /* user-specified rating */,
    iTunesERtKComputed = 'kRtC' /* iTunes-computed rating */
};
typedef enum iTunesERtK iTunesERtK;

enum iTunesEAPD {
    iTunesEAPDComputer = 'kAPC',
    iTunesEAPDAirPortExpress = 'kAPX',
    iTunesEAPDAppleTV = 'kAPT',
    iTunesEAPDAirPlayDevice = 'kAPO',
    iTunesEAPDUnknown = 'kAPU'
};
typedef enum iTunesEAPD iTunesEAPD;



/*
 * Standard Suite
 */

@interface iTunesPrintSettings : SBObject

@property (readonly) NSInteger copies;  // the number of copies of a document to be printed
@property (readonly) BOOL collating;  // Should printed copies be collated?
@property (readonly) NSInteger startingPage;  // the first page of the document to be printed
@property (readonly) NSInteger endingPage;  // the last page of the document to be printed
@property (readonly) NSInteger pagesAcross;  // number of logical pages laid across a physical page
@property (readonly) NSInteger pagesDown;  // number of logical pages laid out down a physical page
@property (readonly) iTunesEnum errorHandling;  // how errors are handled
@property (copy, readonly) NSDate *requestedPrintTime;  // the time at which the desktop printer should print the document
@property (copy, readonly) NSArray *printerFeatures;  // printer specific options
@property (copy, readonly) NSString *faxNumber;  // for fax number
@property (copy, readonly) NSString *targetPrinter;  // for target printer

- (void) printPrintDialog:(BOOL)printDialog withProperties:(iTunesPrintSettings *)withProperties kind:(iTunesEKnd)kind theme:(NSString *)theme;  // Print the specified object(s)
- (void) close;  // Close an object
- (void) delete;  // Delete an element from an object
- (SBObject *) duplicateTo:(SBObject *)to;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (void) open;  // open the specified object(s)
- (void) playOnce:(BOOL)once;  // play the current track or the specified track or file.

@end



/*
 * iTunes Suite
 */

// The application program
@interface iTunesApplication : SBApplication

- (SBElementArray *) AirPlayDevices;
- (SBElementArray *) browserWindows;
- (SBElementArray *) encoders;
- (SBElementArray *) EQPresets;
- (SBElementArray *) EQWindows;
- (SBElementArray *) playlistWindows;
- (SBElementArray *) sources;
- (SBElementArray *) visuals;
- (SBElementArray *) windows;

@property (readonly) BOOL AirPlayEnabled;  // is AirPlay currently enabled?
@property (readonly) BOOL converting;  // is a track currently being converted?
@property (copy) NSArray *currentAirPlayDevices;  // the currently selected AirPlay device(s)
@property (copy) iTunesEncoder *currentEncoder;  // the currently selected encoder (MP3, AIFF, WAV, etc.)
@property (copy) iTunesEQPreset *currentEQPreset;  // the currently selected equalizer preset
@property (copy, readonly) iTunesPlaylist *currentPlaylist;  // the playlist containing the currently targeted track
@property (copy, readonly) NSString *currentStreamTitle;  // the name of the current song in the playing stream (provided by streaming server)
@property (copy, readonly) NSString *currentStreamURL;  // the URL of the playing stream or streaming web site (provided by streaming server)
@property (copy, readonly) iTunesTrack *currentTrack;  // the current targeted track
@property (copy) iTunesVisual *currentVisual;  //  the currently selected visual plug-in
@property BOOL EQEnabled;  // is the equalizer enabled?
@property BOOL fixedIndexing;  // true if all AppleScript track indices should be independent of the play order of the owning playlist.
@property BOOL frontmost;  // is iTunes the frontmost application?
@property BOOL fullScreen;  // are visuals displayed using the entire screen?
@property (copy, readonly) NSString *name;  // the name of the application
@property BOOL mute;  // has the sound output been muted?
@property double playerPosition;  // the player’s position within the currently playing track in seconds.
@property (readonly) iTunesEPlS playerState;  // is iTunes stopped, paused, or playing?
@property (copy, readonly) SBObject *selection;  // the selection visible to the user
@property NSInteger soundVolume;  // the sound output volume (0 = minimum, 100 = maximum)
@property (copy, readonly) NSString *version;  // the version of iTunes
@property BOOL visualsEnabled;  // are visuals currently being displayed?
@property iTunesEVSz visualSize;  // the size of the displayed visual
@property (copy, readonly) NSString *iAdIdentifier;  // the iAd identifier

- (void) printPrintDialog:(BOOL)printDialog withProperties:(iTunesPrintSettings *)withProperties kind:(iTunesEKnd)kind theme:(NSString *)theme;  // Print the specified object(s)
- (void) run;  // run iTunes
- (void) quit;  // quit iTunes
- (iTunesTrack *) add:(NSArray *)x to:(SBObject *)to;  // add one or more files to a playlist
- (void) backTrack;  // reposition to beginning of current track or go to previous track if already at start of current track
- (iTunesTrack *) convert:(NSArray *)x;  // convert one or more files or tracks
- (void) fastForward;  // skip forward in a playing track
- (void) nextTrack;  // advance to the next track in the current playlist
- (void) pause;  // pause playback
- (void) playOnce:(BOOL)once;  // play the current track or the specified track or file.
- (void) playpause;  // toggle the playing/paused state of the current track
- (void) previousTrack;  // return to the previous track in the current playlist
- (void) resume;  // disable fast forward/rewind and resume playback, if playing.
- (void) rewind;  // skip backwards in a playing track
- (void) stop;  // stop playback
- (void) update;  // update the specified iPod
- (void) eject;  // eject the specified iPod
- (void) subscribe:(NSString *)x;  // subscribe to a podcast feed
- (void) updateAllPodcasts;  // update all subscribed podcast feeds
- (void) updatePodcast;  // update podcast feed
- (void) openLocation:(NSString *)x;  // Opens a Music Store or audio stream URL

@end

// an item
@interface iTunesItem : SBObject

@property (copy, readonly) SBObject *container;  // the container of the item
- (NSInteger) id;  // the id of the item
@property (readonly) NSInteger index;  // The index of the item in internal application order.
@property (copy) NSString *name;  // the name of the item
@property (copy, readonly) NSString *persistentID;  // the id of the item as a hexadecimal string. This id does not change over time.
@property (copy) NSDictionary *properties;  // every property of the item

- (void) printPrintDialog:(BOOL)printDialog withProperties:(iTunesPrintSettings *)withProperties kind:(iTunesEKnd)kind theme:(NSString *)theme;  // Print the specified object(s)
- (void) close;  // Close an object
- (void) delete;  // Delete an element from an object
- (SBObject *) duplicateTo:(SBObject *)to;  // Duplicate one or more object(s)
- (BOOL) exists;  // Verify if an object exists
- (void) open;  // open the specified object(s)
- (void) playOnce:(BOOL)once;  // play the current track or the specified track or file.
- (void) reveal;  // reveal and select a track or playlist

@end

// an AirPlay device
@interface iTunesAirPlayDevice : iTunesItem

@property (readonly) BOOL active;  // is the device currently being played to?
@property (readonly) BOOL available;  // is the device currently available?
@property (readonly) iTunesEAPD kind;  // the kind of the device
@property (copy, readonly) NSString *networkAddress;  // the network (MAC) address of the device
- (BOOL) protected;  // is the device password- or passcode-protected?
@property BOOL selected;  // is the device currently selected?
@property (readonly) BOOL supportsAudio;  // does the device support audio playback?
@property (readonly) BOOL supportsVideo;  // does the device support video playback?
@property NSInteger soundVolume;  // the output volume for the device (0 = minimum, 100 = maximum)


@end

// a piece of art within a track
@interface iTunesArtwork : iTunesItem

@property (copy) NSImage *data;  // data for this artwork, in the form of a picture
@property (copy) NSString *objectDescription;  // description of artwork as a string
@property (readonly) BOOL downloaded;  // was this artwork downloaded by iTunes?
@property (copy, readonly) NSNumber *format;  // the data format for this piece of artwork
@property NSInteger kind;  // kind or purpose of this piece of artwork
@property (copy) NSData *rawData;  // data for this artwork, in original format


@end

// converts a track to a specific file format
@interface iTunesEncoder : iTunesItem

@property (copy, readonly) NSString *format;  // the data format created by the encoder


@end

// equalizer preset configuration
@interface iTunesEQPreset : iTunesItem

@property double band1;  // the equalizer 32 Hz band level (-12.0 dB to +12.0 dB)
@property double band2;  // the equalizer 64 Hz band level (-12.0 dB to +12.0 dB)
@property double band3;  // the equalizer 125 Hz band level (-12.0 dB to +12.0 dB)
@property double band4;  // the equalizer 250 Hz band level (-12.0 dB to +12.0 dB)
@property double band5;  // the equalizer 500 Hz band level (-12.0 dB to +12.0 dB)
@property double band6;  // the equalizer 1 kHz band level (-12.0 dB to +12.0 dB)
@property double band7;  // the equalizer 2 kHz band level (-12.0 dB to +12.0 dB)
@property double band8;  // the equalizer 4 kHz band level (-12.0 dB to +12.0 dB)
@property double band9;  // the equalizer 8 kHz band level (-12.0 dB to +12.0 dB)
@property double band10;  // the equalizer 16 kHz band level (-12.0 dB to +12.0 dB)
@property (readonly) BOOL modifiable;  // can this preset be modified?
@property double preamp;  // the equalizer preamp level (-12.0 dB to +12.0 dB)
@property BOOL updateTracks;  // should tracks which refer to this preset be updated when the preset is renamed or deleted?


@end

// a list of songs/streams
@interface iTunesPlaylist : iTunesItem

- (SBElementArray *) tracks;

@property (readonly) NSInteger duration;  // the total length of all songs (in seconds)
@property (copy) NSString *name;  // the name of the playlist
@property BOOL loved;  // is this plalist loved?
@property (copy, readonly) iTunesPlaylist *parent;  // folder which contains this playlist (if any)
@property BOOL shuffle;  // play the songs in this playlist in random order?
@property (readonly) NSInteger size;  // the total size of all songs (in bytes)
@property iTunesERpt songRepeat;  // playback repeat mode
@property (readonly) iTunesESpK specialKind;  // special playlist kind
@property (copy, readonly) NSString *time;  // the length of all songs in MM:SS format
@property (readonly) BOOL visible;  // is this playlist visible in the Source list?

- (void) moveTo:(SBObject *)to;  // Move playlist(s) to a new location
- (iTunesTrack *) searchFor:(NSString *)for_ only:(iTunesESrA)only;  // search a playlist for tracks matching the search string. Identical to entering search text in the Search field in iTunes.

@end

// a playlist representing an audio CD
@interface iTunesAudioCDPlaylist : iTunesPlaylist

- (SBElementArray *) audioCDTracks;

@property (copy) NSString *artist;  // the artist of the CD
@property BOOL compilation;  // is this CD a compilation album?
@property (copy) NSString *composer;  // the composer of the CD
@property NSInteger discCount;  // the total number of discs in this CD’s album
@property NSInteger discNumber;  // the index of this CD disc in the source album
@property (copy) NSString *genre;  // the genre of the CD
@property NSInteger year;  // the year the album was recorded/released


@end

// the master music library playlist
@interface iTunesLibraryPlaylist : iTunesPlaylist

- (SBElementArray *) fileTracks;
- (SBElementArray *) URLTracks;
- (SBElementArray *) sharedTracks;


@end

// the radio tuner playlist
@interface iTunesRadioTunerPlaylist : iTunesPlaylist

- (SBElementArray *) URLTracks;


@end

// a music source (music library, CD, device, etc.)
@interface iTunesSource : iTunesItem

- (SBElementArray *) audioCDPlaylists;
- (SBElementArray *) libraryPlaylists;
- (SBElementArray *) playlists;
- (SBElementArray *) radioTunerPlaylists;
- (SBElementArray *) userPlaylists;

@property (readonly) long long capacity;  // the total size of the source if it has a fixed size
@property (readonly) long long freeSpace;  // the free space on the source if it has a fixed size
@property (readonly) iTunesESrc kind;

- (void) update;  // update the specified iPod
- (void) eject;  // eject the specified iPod

@end

// playable audio source
@interface iTunesTrack : iTunesItem

- (SBElementArray *) artworks;

@property (copy) NSString *album;  // the album name of the track
@property (copy) NSString *albumArtist;  // the album artist of the track
@property BOOL albumLoved;  // is the album for this track loved?
@property NSInteger albumRating;  // the rating of the album for this track (0 to 100)
@property (readonly) iTunesERtK albumRatingKind;  // the rating kind of the album rating for this track
@property (copy) NSString *artist;  // the artist/source of the track
@property (readonly) NSInteger bitRate;  // the bit rate of the track (in kbps)
@property double bookmark;  // the bookmark time of the track in seconds
@property BOOL bookmarkable;  // is the playback position for this track remembered?
@property NSInteger bpm;  // the tempo of this track in beats per minute
@property (copy) NSString *category;  // the category of the track
@property (copy) NSString *comment;  // freeform notes about the track
@property BOOL compilation;  // is this track from a compilation album?
@property (copy) NSString *composer;  // the composer of the track
@property (readonly) NSInteger databaseID;  // the common, unique ID for this track. If two tracks in different playlists have the same database ID, they are sharing the same data.
@property (copy, readonly) NSDate *dateAdded;  // the date the track was added to the playlist
@property (copy) NSString *objectDescription;  // the description of the track
@property NSInteger discCount;  // the total number of discs in the source album
@property NSInteger discNumber;  // the index of the disc containing this track on the source album
@property (readonly) double duration;  // the length of the track in seconds
@property BOOL enabled;  // is this track checked for playback?
@property (copy) NSString *episodeID;  // the episode ID of the track
@property NSInteger episodeNumber;  // the episode number of the track
@property (copy) NSString *EQ;  // the name of the EQ preset of the track
@property double finish;  // the stop time of the track in seconds
@property BOOL gapless;  // is this track from a gapless album?
@property (copy) NSString *genre;  // the music/audio genre (category) of the track
@property (copy) NSString *grouping;  // the grouping (piece) of the track. Generally used to denote movements within a classical work.
@property (readonly) BOOL iTunesU;  // is this track an iTunes U episode?
@property (copy, readonly) NSString *kind;  // a text description of the track
@property (copy) NSString *longDescription;
@property BOOL loved;  // is this track loved?
@property (copy) NSString *lyrics;  // the lyrics of the track
@property (copy, readonly) NSDate *modificationDate;  // the modification date of the content of this track
@property NSInteger playedCount;  // number of times this track has been played
@property (copy) NSDate *playedDate;  // the date and time this track was last played
@property (readonly) BOOL podcast;  // is this track a podcast episode?
@property NSInteger rating;  // the rating of this track (0 to 100)
@property (readonly) iTunesERtK ratingKind;  // the rating kind of this track
@property (copy, readonly) NSDate *releaseDate;  // the release date of this track
@property (readonly) NSInteger sampleRate;  // the sample rate of the track (in Hz)
@property NSInteger seasonNumber;  // the season number of the track
@property BOOL shufflable;  // is this track included when shuffling?
@property NSInteger skippedCount;  // number of times this track has been skipped
@property (copy) NSDate *skippedDate;  // the date and time this track was last skipped
@property (copy) NSString *show;  // the show name of the track
@property (copy) NSString *sortAlbum;  // override string to use for the track when sorting by album
@property (copy) NSString *sortArtist;  // override string to use for the track when sorting by artist
@property (copy) NSString *sortAlbumArtist;  // override string to use for the track when sorting by album artist
@property (copy) NSString *sortName;  // override string to use for the track when sorting by name
@property (copy) NSString *sortComposer;  // override string to use for the track when sorting by composer
@property (copy) NSString *sortShow;  // override string to use for the track when sorting by show name
@property (readonly) long long size;  // the size of the track (in bytes)
@property double start;  // the start time of the track in seconds
@property (copy, readonly) NSString *time;  // the length of the track in MM:SS format
@property NSInteger trackCount;  // the total number of tracks on the source album
@property NSInteger trackNumber;  // the index of the track on the source album
@property BOOL unplayed;  // is this track unplayed?
@property iTunesEVdK videoKind;  // kind of video track
@property NSInteger volumeAdjustment;  // relative volume adjustment of the track (-100% to 100%)
@property NSInteger year;  // the year the track was recorded/released


@end

// a track on an audio CD
@interface iTunesAudioCDTrack : iTunesTrack

@property (copy, readonly) NSURL *location;  // the location of the file represented by this track


@end

// a track representing an audio file (MP3, AIFF, etc.)
@interface iTunesFileTrack : iTunesTrack

@property (copy) NSURL *location;  // the location of the file represented by this track

- (void) refresh;  // update file track information from the current information in the track’s file

@end

// a track residing in a shared library
@interface iTunesSharedTrack : iTunesTrack


@end

// a track representing a network stream
@interface iTunesURLTrack : iTunesTrack

@property (copy) NSString *address;  // the URL for this track

- (void) download;  // download podcast episode

@end

// custom playlists created by the user
@interface iTunesUserPlaylist : iTunesPlaylist

- (SBElementArray *) fileTracks;
- (SBElementArray *) URLTracks;
- (SBElementArray *) sharedTracks;

@property BOOL shared;  // is this playlist shared?
@property (readonly) BOOL smart;  // is this a Smart Playlist?


@end

// a folder that contains other playlists
@interface iTunesFolderPlaylist : iTunesUserPlaylist


@end

// a visual plug-in
@interface iTunesVisual : iTunesItem


@end

// any window
@interface iTunesWindow : iTunesItem

@property NSRect bounds;  // the boundary rectangle for the window
@property (readonly) BOOL closeable;  // does the window have a close box?
@property (readonly) BOOL collapseable;  // does the window have a collapse (windowshade) box?
@property BOOL collapsed;  // is the window collapsed?
@property NSPoint position;  // the upper left position of the window
@property (readonly) BOOL resizable;  // is the window resizable?
@property BOOL visible;  // is the window visible?
@property (readonly) BOOL zoomable;  // is the window zoomable?
@property BOOL zoomed;  // is the window zoomed?


@end

// the main iTunes window
@interface iTunesBrowserWindow : iTunesWindow

@property BOOL minimized;  // is the small player visible?
@property (copy, readonly) SBObject *selection;  // the selected songs
@property (copy) iTunesPlaylist *view;  // the playlist currently displayed in the window


@end

// the iTunes equalizer window
@interface iTunesEQWindow : iTunesWindow

@property BOOL minimized;  // is the small EQ window visible?


@end

// a sub-window showing a single playlist
@interface iTunesPlaylistWindow : iTunesWindow

@property (copy, readonly) SBObject *selection;  // the selected songs
@property (copy, readonly) iTunesPlaylist *view;  // the playlist displayed in the window


@end





// default SBApplications
@interface LASApplication : NSObject
+ (SystemEventsApplication*)SystemEvents;
+ (FinderApplication*)Finder;
+ (iTunesApplication*)iTunes;
@end






