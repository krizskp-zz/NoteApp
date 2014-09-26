//
//  JKELoginViewController.h
//  NoteApp
//
//  Created by Shalvindra Prasad on 9/26/14.
//  Copyright (c) 2014 Joyce Echessa. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JKELoginViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *usernameTextField;
@property (weak, nonatomic) IBOutlet UITextField *passwordTextField;

- (IBAction)login:(id)sender;
@end
