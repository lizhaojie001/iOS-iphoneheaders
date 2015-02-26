/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:04:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBStarkBannerItem.h>

@class SBAlertItem, NSString, SBUISound;

@interface SBStarkAlertItemBannerItem : SBStarkBannerItem {

	SBAlertItem* _alertItem;
	NSString* _title;
	NSString* _message;
	SBUISound* _sound;

}
-(id)categoryImage;
-(void)reloadDisplayProperties;
-(BOOL)matchesContext:(id)arg1 ;
-(id)initWithAlertItem:(id)arg1 ;
-(void)dealloc;
-(/*^block*/ id)action;
-(id)title;
-(id)category;
-(unsigned)priority;
-(id)sound;
-(int)actionType;
-(BOOL)isSticky;
-(id)subActionLabels;
-(/*^block*/ id)subActionWithIndex:(unsigned)arg1 ;
@end
