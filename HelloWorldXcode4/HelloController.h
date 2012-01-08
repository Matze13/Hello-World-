//
//  HelloController.h
//  HelloWorldXcode4
//
//  Created by Matthias Goetz on 15.06.11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HelloController : NSObject {
@private
    
    IBOutlet NSTextField *eingabe;
    IBOutlet NSTextField *ausgabe;
}
- (IBAction)x02100:(id)sender;
- (IBAction)lowerCase:(id)sender;
- (IBAction)upperCase:(id)sender;
- (IBAction)pushStart:(id)sender;
- (IBAction)clear:(id)sender;
@end
