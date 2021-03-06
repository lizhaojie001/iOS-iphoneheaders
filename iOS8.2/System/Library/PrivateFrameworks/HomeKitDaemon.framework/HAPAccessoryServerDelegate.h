/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:15 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol HAPAccessoryServerDelegate <NSObject>
@required
-(void)accessoryServer:(id)arg1 isBlockedWithCompletionHandler:(/*^block*/id)arg2;
-(void)accessoryServer:(id)arg1 didDiscoverAccessoriesWithError:(id)arg2;
-(void)accessoryServer:(id)arg1 didStopPairingWithError:(id)arg2;
-(void)accessoryServer:(id)arg1 didUpdateValuesForCharacteristics:(id)arg2;
-(void)accessoryServer:(id)arg1 requestUserPermissionForUnauthenticatedAccessory:(id)arg2;
-(void)accessoryServer:(id)arg1 didReceiveBadPasswordThrottleAttemptsWithDelay:(int)arg2;
-(void)accessoryServer:(id)arg1 promptUserForPasswordWithType:(unsigned)arg2;

@end

