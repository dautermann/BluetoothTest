//
//  ViewController.h
//  BluetoothTest
//
//  Created by Michael Dautermann on 1/2/14.
//  Copyright (c) 2014 Michael Dautermann. All rights reserved.
//

#import "BluetoothManager.h"
#import "EAManager.h"

@interface ViewController : UIViewController

- (IBAction) checkAccessories:(id)sender;

@property (strong) BluetoothManager *blueMgr;

@property (strong) EAManager *externalAccessoryMgr;

@end
