/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:18:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/gamed
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GKFamiliarPlayerInternal.h>

@class NSString, NSDate;

@interface GKFriendRequestInternal : GKFamiliarPlayerInternal {

	NSString* _message;
	NSDate* _date;

}

@property (nonatomic,retain) NSString * message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSDate * date;                   //@synthesize date=_date - In the implementation block
+(id)secureCodedPropertyKeys;
-(void)dealloc;
-(id)date;
-(id)message;
-(void)setDate:(id)arg1 ;
-(void)setMessage:(id)arg1 ;
@end

