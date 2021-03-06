/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:47 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface PSLanguage : NSObject {

	NSString* _languageCode;
	NSString* _languageName;
	NSString* _localizedLanguageName;

}

@property (nonatomic,retain) NSString * languageCode;                       //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,retain) NSString * languageName;                       //@synthesize languageName=_languageName - In the implementation block
@property (nonatomic,retain) NSString * localizedLanguageName;              //@synthesize localizedLanguageName=_localizedLanguageName - In the implementation block
+(id)languageWithCode:(id)arg1 name:(id)arg2 localizedName:(id)arg3 ;
-(void)dealloc;
-(NSString *)localizedLanguageName;
-(NSString *)languageCode;
-(void)setLanguageCode:(NSString *)arg1 ;
-(void)setLanguageName:(NSString *)arg1 ;
-(void)setLocalizedLanguageName:(NSString *)arg1 ;
-(NSString *)languageName;
-(BOOL)displayNamesAreEqual;
@end

