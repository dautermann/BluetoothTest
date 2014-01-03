//
//  BluetoothManager.h
//  Xodee
//
//  Created by Michael Dautermann on 1/2/14.
//
//

#import <CoreBluetooth/CoreBluetooth.h>

@interface BluetoothManager : NSObject <CBCentralManagerDelegate>
{
}

@property (strong) CBCentralManager *cbManager;

+ (BluetoothManager *)sharedInstance;

@end
