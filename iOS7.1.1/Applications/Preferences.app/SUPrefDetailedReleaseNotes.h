/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:14 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Preferences.app/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <UIKit/UIWebViewDelegate.h>

@class NSString;

@interface SUPrefDetailedReleaseNotes : PSListController <UIWebViewDelegate> {

	NSString* _releaseNotes;

}

@property (nonatomic,retain) NSString * releaseNotes;              //@synthesize releaseNotes=_releaseNotes - In the implementation block
-(void)dealloc;
-(id)init;
-(void)loadView;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
-(id)specifiers;
-(id)releaseNotes;
-(void)setReleaseNotes:(id)arg1 ;
@end

