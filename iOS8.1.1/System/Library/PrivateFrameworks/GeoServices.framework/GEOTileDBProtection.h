/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:51 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface GEOTileDBProtection : NSObject {

	int _currentState;
	int _notifyToken;

}
+(id)sharedObject;
-(void)dealloc;
-(id)init;
-(int)state;
-(void)updateState;
-(void)_statusChanged;
@end

