//
//  HelloController.m
//  HelloWorldXcode4
//
//  Created by Matthias Goetz on 15.06.11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "HelloController.h"

@implementation HelloController

- (IBAction)x02100:(id)sender {
    NSString* name;
    name = @"0x02100";
    [eingabe setStringValue:name];
}

- (IBAction)lowerCase:(id)sender {
    NSString* name;
    name = [eingabe stringValue];
    name = [name lowercaseString];
    [ausgabe setStringValue:name];
}

- (IBAction)upperCase:(id)sender {
    NSString* name;
    name = [eingabe stringValue];
    name = [name uppercaseString];
    [ausgabe setStringValue:name];
}

- (IBAction)pushStart:(id)sender {
    NSString* name;
    name = [eingabe stringValue];
    [ausgabe setStringValue:name];
}

- (IBAction)clear:(id)sender {
    NSString* name;
    name = @"";
    [eingabe setStringValue:name];
    [ausgabe setStringValue:name];
}
@end
