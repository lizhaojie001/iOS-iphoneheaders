/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:52 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreBluetooth/CBAttribute.h>

@class CBPeripheral, NSArray, NSNumber;

@interface CBService : CBAttribute {

	CBPeripheral* _peripheral;
	BOOL _isPrimary;
	NSArray* _includedServices;
	NSArray* _characteristics;
	NSNumber* _startHandle;
	NSNumber* _endHandle;

}

@property (nonatomic,__weak,readonly) CBPeripheral * peripheral;              //@synthesize peripheral=_peripheral - In the implementation block
@property (assign,nonatomic) BOOL isPrimary;                                  //@synthesize isPrimary=_isPrimary - In the implementation block
@property (retain) NSArray * includedServices;                                //@synthesize includedServices=_includedServices - In the implementation block
@property (retain) NSArray * characteristics;                                 //@synthesize characteristics=_characteristics - In the implementation block
@property (nonatomic,readonly) NSNumber * startHandle;                        //@synthesize startHandle=_startHandle - In the implementation block
@property (nonatomic,readonly) NSNumber * endHandle;                          //@synthesize endHandle=_endHandle - In the implementation block
-(void)setIsPrimary:(BOOL)arg1 ;
-(id)initWithPeripheral:(id)arg1 dictionary:(id)arg2 ;
-(NSNumber *)startHandle;
-(NSNumber *)endHandle;
-(void)setIncludedServices:(NSArray *)arg1 ;
-(id)handleIncludedServicesDiscovered:(id)arg1 ;
-(id)handleCharacteristicsDiscovered:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(NSArray *)characteristics;
-(void)setCharacteristics:(NSArray *)arg1 ;
-(NSArray *)includedServices;
-(CBPeripheral *)peripheral;
-(BOOL)isPrimary;
@end

