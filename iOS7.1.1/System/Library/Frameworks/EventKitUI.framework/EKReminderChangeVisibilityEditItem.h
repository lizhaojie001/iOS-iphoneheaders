/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EKReminderEditItem.h>

@interface EKReminderChangeVisibilityEditItem : EKReminderEditItem {

	int _visibilityToCommit;

}

@property (nonatomic,readonly) int visibilityToCommit; 
-(bool)shouldAppearWithVisibility:(int)arg1 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 inSubsection:(unsigned long long)arg2 ;
-(bool)editor:(id)arg1 shouldClearSelectionFromSubitem:(unsigned long long)arg2 inSubsection:(unsigned long long)arg3 ;
-(void)editor:(id)arg1 didSelectSubitem:(unsigned long long)arg2 inSubsection:(unsigned long long)arg3 ;
-(bool)usesDetailViewControllerForSubitem:(unsigned long long)arg1 inSubsection:(unsigned long long)arg2 ;
-(void)addStylingToCell:(id)arg1 forSubitemAtIndex:(unsigned long long)arg2 inSubsection:(unsigned long long)arg3 ;
-(int)visibilityToCommit;
@end

