/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKeyboardCandidateView.h>
#import <UIKit/UIKeyboardCandidateViewInline.h>

@interface UIKeyboardCandidateView_Floating : UIKeyboardCandidateView <UIKeyboardCandidateViewInline> {

	CGRect _collapsedRect;
	CGSize presentationSize;

}

@property (assign) CGSize presentationSize; 
+(float)defaultExtendedControlHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)candidatesDidChange;
-(id)activeCandidateList;
-(void)setCandidateViewExtended:(BOOL)arg1 ;
-(unsigned)_numberOfColumns:(BOOL)arg1 ;
-(void)setPresentationSize:(CGSize)arg1 ;
-(CGSize)presentationSize;
@end

