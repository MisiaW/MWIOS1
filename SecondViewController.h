//
//  SecondViewController.h
//  Aplication1
//
//  Created by student on 06/11/2023.
//  Copyright © 2023 a. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class SecondViewController;
@protocol SecondViewControllerDelegate <NSObject>

-(void) addItemViewController:(SecondViewController *) controller didFinishEnteringItem: (NSString *) item;

@end

@interface SecondViewController : UIViewController
@property (nonatomic, weak) IBOutlet UITextField *modifiedSurnameTextField;
@property (nonatomic, weak) id <SecondViewControllerDelegate> delegate;
@property (nonatomic, weak) IBOutlet UITextField *surnameTextField; 

@property NSString *surname;
- (void) dowolnaNazwa;
@end

NS_ASSUME_NONNULL_END
