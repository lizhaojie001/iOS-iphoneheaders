/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol EKEventGestureControllerDelegate <NSObject>
@optional
-(float)pageChangeMarginForEventGestureController:(id)arg1;
-(float)horizontalOffsetForPagingForEventGestureController:(id)arg1;
-(float)computeXDragOffsetForEventGestureController:(id)arg1 currentX:(float)arg2 startX:(float)arg3;
-(BOOL)moreThanOneDayVisibleForEventGestureController:(id)arg1;
-(BOOL)eventGestureControllerShouldAllowLongPress:(id)arg1;
-(float)eventGestureController:(id)arg1 convertXForMargin:(float)arg2;
-(CGRect*)marginFrameForEventGestureController:(id)arg1;
-(BOOL)eventEditorPopoverActiveWhileDraggingForEventGestureController:(id)arg1;
-(BOOL)eventGestureController:(id)arg1 shouldFadeOccurrenceAfterFling:(id)arg2;

@required
-(id)touchTrackingViewForEventGestureController:(id)arg1;
-(id)occurrenceViewSuperviewForEventGestureController:(id)arg1;
-(float)timedRegionOriginForEventGestureController:(id)arg1;
-(id)createOccurrenceViewForEventGestureController:(id)arg1;
-(void)eventGestureController:(id)arg1 adjustDraggingViewForAllDay:(BOOL)arg2;
-(id)createEventForEventGestureController:(id)arg1;
-(id)eventGestureController:(id)arg1 occurrenceViewAtPoint:(CGPoint)arg2;
-(float)eventGestureController:(id)arg1 yPositionPerhapsMatchingAllDayOccurrence:(id)arg2 atPoint:(CGPoint)arg3;
-(void)eventGestureController:(id)arg1 addViewToScroller:(id)arg2 isAllDay:(BOOL)arg3;
-(BOOL)eventGestureController:(id)arg1 isAllDayAtPoint:(CGPoint)arg2 requireInsistence:(BOOL)arg3;
-(double)eventGestureController:(id)arg1 dateAtPoint:(CGPoint)arg2;
-(CGPoint*)eventGestureController:(id)arg1 pointAtDate:(double)arg2 isAllDay:(BOOL)arg3;
-(float)eventGestureController:(id)arg1 widthForOccurrenceViewOfDays:(unsigned)arg2;
-(float)eventGestureController:(id)arg1 heightForOccurrenceViewOfDuration:(double)arg2 allDay:(BOOL)arg3;
-(void)eventGestureController:(id)arg1 didSetUpAtDate:(double)arg2 isAllDay:(BOOL)arg3;
-(void)eventGestureController:(id)arg1 didMoveToDate:(double)arg2 isAllDay:(BOOL)arg3;
-(BOOL)eventGestureController:(id)arg1 didCommitOccurrence:(id)arg2 toDate:(double)arg3 isAllDay:(BOOL)arg4 span:(int)arg5;
-(void)eventGestureController:(id)arg1 didCancelEditingOccurrence:(id)arg2 fadedOut:(BOOL)arg3;
-(void)eventGestureController:(id)arg1 didSingleTapOccurrence:(id)arg2;
-(BOOL)didScrollWhenEventGestureController:(id)arg1 scrollTimerFiredToMoveLeft:(BOOL)arg2 right:(BOOL)arg3 vertically:(BOOL)arg4 towardPoint:(CGPoint)arg5;
@end

