/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:53 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <CoreSuggestions/NSCopying.h>

@class NSString;

@interface SGEntityTag : NSObject <NSCopying> {

	char _indexed;
	char _stored;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) char indexed;                 //@synthesize indexed=_indexed - In the implementation block
@property (nonatomic,readonly) char stored;                  //@synthesize stored=_stored - In the implementation block
+(void)initialize;
+(id)remember:(id)arg1 ;
+(void)rememberPrefix:(id)arg1 stored:(char)arg2 indexed:(char)arg3 ;
+(id)tagForPrefix:(id)arg1 value:(id)arg2 ;
+(id)extractedEvent;
+(id)fromExtractedDomain;
+(id)testTag:(int)arg1 ;
+(id)inhuman;
+(id)url:(id)arg1 ;
+(id)hardName;
+(id)human;
+(id)extractedEventCancellation;
+(id)fromForwardedMessage;
+(id)fromReply;
+(id)contactDetail:(id)arg1 ;
+(id)identity:(id)arg1 ;
+(id)messageWithMessageIdHash:(long long)arg1 fromSource:(id)arg2 ;
+(id)containsEntityExtraction:(long long)arg1 ;
+(id)extraKey:(id)arg1 ;
+(id)extractedFlight;
+(id)extractedBus;
+(id)extractedTrain;
+(id)extractedHotel;
+(id)extractedCarRental;
+(id)extractedTicket;
+(id)extractedMovie;
+(id)extractedFood;
+(id)extractedSocial;
+(id)defaultDuration;
+(id)extractedFromTemplateWithShortName:(id)arg1 ;
+(id)allDay;
+(id)resolveName:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)name;
-(id)value;
-(id)initWithName:(id)arg1 stored:(char)arg2 indexed:(char)arg3 ;
-(char)indexed;
-(char)isContactDetail;
-(char)isTemplateShortName;
-(char)isEqualToEntityTag:(id)arg1 ;
-(char)isExtraKey;
-(char)isUrl;
-(char)stored;
@end

