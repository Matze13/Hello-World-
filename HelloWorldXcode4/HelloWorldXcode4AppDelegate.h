//
//  HelloWorldXcode4AppDelegate.h
//  HelloWorldXcode4
//
//  Created by Matthias Goetz on 15.06.11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface HelloWorldXcode4AppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *_window;
}

@property (strong) IBOutlet NSWindow *window;

@end
