/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:09 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIPopoverController.h>

@protocol _UIViewServiceDummyPopoverControllerDelegate;
@interface _UIViewServiceDummyPopoverController : UIPopoverController {

	id<_UIViewServiceDummyPopoverControllerDelegate> _dummyPopoverControllerDelegate;

}

@property (nonatomic,retain) id<_UIViewServiceDummyPopoverControllerDelegate> dummyPopoverControllerDelegate;              //@synthesize dummyPopoverControllerDelegate=_dummyPopoverControllerDelegate - In the implementation block
+(Class)_popoverViewClass;
-(void)setPopoverContentSize:(CGSize)arg1 animated:(char)arg2 ;
-(char)_attemptsToAvoidKeyboard;
-(id<_UIViewServiceDummyPopoverControllerDelegate>)dummyPopoverControllerDelegate;
-(void)_popoverView:(id)arg1 didSetUseToolbarShine:(char)arg2 ;
-(void)_super_setPopoverContentSize:(CGSize)arg1 ;
-(void)setDummyPopoverControllerDelegate:(id<_UIViewServiceDummyPopoverControllerDelegate>)arg1 ;
@end

