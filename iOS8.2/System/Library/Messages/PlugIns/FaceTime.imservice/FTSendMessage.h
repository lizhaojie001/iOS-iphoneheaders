/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:17 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Messages/PlugIns/FaceTime.imservice/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FaceTime/FaceTime-Structs.h>
#import <FaceTime/FTFaceTimeMessage.h>
#import <FaceTime/NSCopying.h>

@class NSArray, NSNumber, NSData;

@interface FTSendMessage : FTFaceTimeMessage <NSCopying> {

	NSArray* _peers;
	NSNumber* _reason;
	NSData* _selfPushToken;

}

@property (copy) NSArray * peers;                     //@synthesize peers=_peers - In the implementation block
@property (copy) NSNumber * reason;                   //@synthesize reason=_reason - In the implementation block
@property (copy) NSData * selfPushToken;              //@synthesize selfPushToken=_selfPushToken - In the implementation block
-(void)dealloc;
-(NSNumber *)reason;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)selfPushToken;
-(void)setSelfPushToken:(NSData *)arg1 ;
-(id)bagKey;
-(NSArray *)peers;
-(void)setPeers:(NSArray *)arg1 ;
-(id)messageBody;
-(void)setReason:(NSNumber *)arg1 ;
-(id)requiredKeys;
@end

