/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface GrammarPart : NSObject {

	int _order;
	int _depth;
	NSString* _name;

}

@property (readonly) int order;                    //@synthesize order=_order - In the implementation block
@property (readonly) int depth;                    //@synthesize depth=_depth - In the implementation block
@property (readonly) NSString * name;              //@synthesize name=_name - In the implementation block
+(id)instanceFromPlist:(id)arg1 ;
-(void)genericSetUpFromPlist:(id)arg1 ;
-(long long)orderComparedTo:(id)arg1 ;
-(id)appliedTo:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)name;
-(int)order;
-(int)depth;
@end

