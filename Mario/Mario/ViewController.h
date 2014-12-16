//
//  ViewController.h
//  Mario
//
//  Created by Gabriel Ruiz on 12/10/14.
//  Copyright (c) 2014 Destroy Me Productions. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UIAlertViewDelegate>

@property (weak, nonatomic) IBOutlet UITextView *outputView;
- (IBAction)clearMario:(id)sender;
- (IBAction)runMario:(id)sender;

@end

