/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:07 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SBStarkBannerItem.h>

@class BBBulletin, SBUISound;

@interface SBStarkBulletinBannerItem : SBStarkBannerItem {

	BBBulletin* _bulletin;
	SBUISound* _sound;
	unsigned long long _feed;

}
-(id)sourceDate;
-(BOOL)_supportsSubActions;
-(id)_uiBannerActionForBBAction:(id)arg1 context:(id)arg2 ;
-(long long)defaultActionType;
-(id)categoryImage;
-(BOOL)matchesContext:(id)arg1 ;
-(id)_bbDismissAppearance;
-(id)_bbDismissAction;
-(id)bbActions;
-(id)initWithBulletin:(id)arg1 feed:(unsigned long long)arg2 ;
-(void)updateBulletinToInstance:(id)arg1 ;
-(id)subTitle;
-(void)dealloc;
-(/*^block*/id)action;
-(id)title;
-(id)message;
-(id)sound;
-(id)subActions;
-(id)subActionLabels;
@end

