//
//  ViewController.m
//  Mario
//
//  Created by Gabriel Ruiz on 12/10/14.
//  Copyright (c) 2014 Destroy Me Productions. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [self marioWithLevels:10];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)marioWithLevels: (int)level {
    NSMutableString *result = [[NSMutableString alloc]init];
    for (int i = 0; i <= level; i++) {
        for (int j = 0; j < i; j++) {
            [result appendString:@"#"];
        }
        [result appendString:@"\n"];
    }
    NSLog(@"%@",result);
    self.outputView.text = result;
}

- (IBAction)clearMario:(id)sender {
    self.outputView.text = @"";
}

- (IBAction)runMario:(id)sender {
    UIAlertView *inputAlert = [[UIAlertView alloc]initWithTitle:@"Enter a height" message:@"Mario" delegate:self cancelButtonTitle:@"Done" otherButtonTitles: nil];
    inputAlert.alertViewStyle = UIAlertViewStylePlainTextInput;
    [inputAlert show];
}

- (void)alertView:(UIAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex{
    NSString* text = [[alertView textFieldAtIndex:0]text];
    int value = [text intValue];
    [self marioWithLevels:value];
    NSLog(@"%@", text);
}
@end
