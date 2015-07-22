/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:25 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirTraffic/ATMessage.h>
#import <AirTraffic/NSSecureCoding.h>

@class NSError;

@interface ATResponse : ATMessage <NSSecureCoding> {

	char _partial;
	NSError* _error;

}

@property (assign,getter=isPartial,nonatomic) char partial;              //@synthesize partial=_partial - In the implementation block
@property (nonatomic,retain) NSError * error;                            //@synthesize error=_error - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithATPMessage:(id)arg1 ;
-(id)ATPMessage;
-(id)ATPMessageWithPayloadData:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)additionalDescription;
-(char)isPartial;
-(void)setPartial:(char)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
@end
