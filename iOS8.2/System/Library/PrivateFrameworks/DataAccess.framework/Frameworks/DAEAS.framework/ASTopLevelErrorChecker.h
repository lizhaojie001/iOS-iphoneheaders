/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:58 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>
#import <DAEAS/ASParsingNotifyOfUnknownTokens.h>

@class NSNumber, NSDictionary;

@interface ASTopLevelErrorChecker : ASItem <ASParsingNotifyOfUnknownTokens> {

	NSNumber* _foundStatus;
	NSDictionary* _parseRules;

}

@property (nonatomic,retain) NSNumber * foundStatus;                 //@synthesize foundStatus=_foundStatus - In the implementation block
@property (nonatomic,retain) NSDictionary * parseRules;              //@synthesize parseRules=_parseRules - In the implementation block
+(char)acceptsTopLevelLeaves;
+(char)parsingLeafNode;
+(char)parsingWithSubItems;
+(char)frontingBasicTypes;
+(char)notifyOfUnknownTokens;
-(void)unknownToken:(int)arg1 receivedForCodePage:(int)arg2 ;
-(id)asParseRules;
-(id)initWithCodePage:(int)arg1 statusToken:(int)arg2 ;
-(NSNumber *)foundStatus;
-(void)setFoundStatus:(NSNumber *)arg1 ;
-(void)setParseRules:(NSDictionary *)arg1 ;
-(NSDictionary *)parseRules;
@end

