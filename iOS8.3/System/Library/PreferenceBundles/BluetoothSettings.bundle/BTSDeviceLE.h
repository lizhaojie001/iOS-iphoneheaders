/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:53:23 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BluetoothSettings/BTSDevice.h>

@class CBPeripheral, CBCentralManager;

@interface BTSDeviceLE : BTSDevice {

	CBPeripheral* _peripheral;
	CBCentralManager* _centralManager;
	char healthDevice;

}
+(id)deviceWithPeripheral:(id)arg1 manager:(id)arg2 ;
-(char)paired;
-(void)dealloc;
-(id)description;
-(id)name;
-(id)identifier;
-(char)connect;
-(void)disconnect;
-(char)isHealthDevice;
-(void)setHealthDevice:(char)arg1 ;
-(char)isMyDevice;
-(char)cloudPaired;
-(void)unpair;
-(id)classicDevice;
-(id)initWithPeripheral:(id)arg1 manager:(id)arg2 ;
-(char)connected;
@end

