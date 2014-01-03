//
//  ViewController.m
//  BluetoothTest
//
//  Created by Michael Dautermann on 1/2/14.
//  Copyright (c) 2014 Michael Dautermann. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    self.externalAccessoryMgr = [EAManager sharedInstance];
    
    self.blueMgr = [BluetoothManager sharedInstance];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction) checkAccessories:(id)sender
{
    [self.externalAccessoryMgr checkDevicesNow:sender];
}

@end
