/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:54 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface WBSURLCompletionUserTypedString : NSObject {

	NSString* _string;
	const unsigned short* _unichars;
	const char* _chars;
	int _length;
	BOOL _containsAnySpaces;
	BOOL _ownsUnichars;
	BOOL _ownsChars;

}

@property (nonatomic,readonly) NSString * normalizedString;              //@synthesize string=_string - In the implementation block
+(void)initialize;
-(void)dealloc;
-(id)initWithString:(id)arg1 ;
-(NSString *)normalizedString;
@end
