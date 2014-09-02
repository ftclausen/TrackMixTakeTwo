//
//  AppDelegate.h
//  TrackMixTakeTwo
//
//  Created by Fred Clausen on 9/2/14.
//  Copyright (c) 2014 Friedrich Clausen. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;
@property (weak) IBOutlet NSTextField *textField;

- (IBAction)mute:(id)sender;
- (IBAction)takeFloatValueForVolumeFrom:(id)sender;

@end
