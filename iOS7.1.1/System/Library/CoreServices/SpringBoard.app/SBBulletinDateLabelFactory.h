/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:54 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface SBBulletinDateLabelFactory : NSObject {

	NSMutableDictionary* _recycledLabelsByStyle;

}
+(id)sharedInstance;
-(void)recycleLabel:(id)arg1 ;
-(void)_purgeRecycledLabels;
-(id)_labelWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(BOOL)arg4 forStyle:(int)arg5 forType:(int)arg6 ;
-(int)styleForLabel:(id)arg1 ;
-(id)startLabelWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(BOOL)arg4 forStyle:(int)arg5 ;
-(id)endLabelWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(BOOL)arg4 forStyle:(int)arg5 ;
-(id)combinedDateLabelWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(BOOL)arg4 forStyle:(int)arg5 ;
-(void)dealloc;
-(id)init;
@end

