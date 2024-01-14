//
//  SecondViewController.m
//  Aplication1
//
//  Created by student on 06/11/2023.
//  Copyright © 2023 a. All rights reserved.
//

#import "SecondViewController.h"

@interface SecondViewController ()

@end

@implementation SecondViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

- (void) prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    if ([segue.identifier isEqualToString:@"sendSurnameSeque"]) {
        SecondViewController *controller = (SecondViewController *) segue.destinationViewController;
        controller.surname = self.surnameTextField.text;
    }
}
/*
- (void) dowolnaNazwa {
    NSString *itemToPassBack = self.modifiedSurnameTextField.text;
    [self.delegate addItemViewController:self didFinishEnteringItem:itemToPassBack];
    [self dismissModalViewControllerAnimated:YES completion:nil];
} */
@end
