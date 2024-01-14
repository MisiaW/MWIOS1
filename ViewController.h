//
//  ViewController.h
//  Aplication1
//
//  Created by student on 30/10/2023.
//  Copyright © 2023 a. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (nonatomic, weak) IBOutlet UILabel *messageLabel;
@property (nonatomic, weak) IBOutlet UITextField *inputField;
- (IBAction)enter;

@end

