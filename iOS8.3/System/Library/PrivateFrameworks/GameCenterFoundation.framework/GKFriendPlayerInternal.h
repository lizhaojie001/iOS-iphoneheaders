/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:46:36 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GKFamiliarPlayerInternal.h>

@class NSString, NSDate, GKGameInternal;

@interface GKFriendPlayerInternal : GKFamiliarPlayerInternal {

	NSString* _status;
	NSDate* _lastPlayedDate;
	GKGameInternal* _lastPlayedGame;

}
+(id)secureCodedPropertyKeys;
-(id)lastPlayedDate;
-(void)setLastPlayedDate:(id)arg1 ;
-(void)dealloc;
-(id)status;
-(void)setStatus:(id)arg1 ;
-(int)defaultFamiliarity;
-(void)setLastPlayedGame:(id)arg1 ;
-(char)isFriend;
-(id)lastPlayedGame;
@end

