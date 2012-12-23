//
//  DPQuickHuePrefsViewController.h
//  QuickHue
//
//  Created by Dan Parsons on 12/21/12.
//  Copyright (c) 2012 Dan Parsons. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "DPHueDiscover.h"

@interface DPQuickHuePrefsViewController : NSViewController <DPHueDiscoverDelegate, NSTableViewDataSource, NSTableViewDelegate>

// Properties of main prefs window
@property (nonatomic, strong) id delegate;
@property (weak) IBOutlet NSWindow *window;
@property (weak) IBOutlet NSPanel *discoverySheet;
@property (weak) IBOutlet NSTextField *hueBridgeHostLabel;
@property (weak) IBOutlet NSButton *startAtLoginCheckbox;
@property (weak) IBOutlet NSTableView *presetsTableView;
@property (weak) IBOutlet NSButton *removePresetButton;
- (IBAction)addPreset:(id)sender;
- (IBAction)removePreset:(id)sender;
- (IBAction)tableViewSelected:(id)sender;


- (IBAction)startDiscovery:(id)sender;


// Properties of sheet
@property (weak) IBOutlet NSProgressIndicator *discoveryProgressIndicator;
@property (weak) IBOutlet NSTextField *discoveryStatusLabel;
@property (weak) IBOutlet NSButton *discoverySaveButton;
- (IBAction)cancelDiscovery:(id)sender;
- (IBAction)saveDiscovery:(id)sender;



@end
