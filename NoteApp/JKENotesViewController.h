//
//  JKENotesViewController.h
//  NoteApp
//
//  Created by Shalvindra Prasad on 9/25/14.
//  Copyright (c) 2014 Joyce Echessa. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface JKENotesViewController : UIViewController
@property (nonatomic, strong) PFObject *note;
@end
