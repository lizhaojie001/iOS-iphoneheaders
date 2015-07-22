/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:04 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Assistant/UIPlugins/Settings.siriUIBundle/Settings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ACSettingsUpdateDelegate;
@class NSString, UIImage, NSURL, UIColor;

@interface ACSettingsBasicSetting : NSObject {

	NSString* _name;
	id<ACSettingsUpdateDelegate> _delegate;

}

@property (nonatomic,readonly) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) UIImage * icon; 
@property (nonatomic,readonly) NSURL * preferencesURL; 
@property (nonatomic,readonly) UIColor * tintColor; 
@property (assign,nonatomic,__weak) id<ACSettingsUpdateDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)settingWithAceString:(id)arg1 ;
+(id)setting;
-(Class)settingsDetailClass;
-(UIImage *)icon;
-(void)setDelegate:(id<ACSettingsUpdateDelegate>)arg1 ;
-(id<ACSettingsUpdateDelegate>)delegate;
-(NSString *)name;
-(UIColor *)tintColor;
-(NSURL *)preferencesURL;
@end
