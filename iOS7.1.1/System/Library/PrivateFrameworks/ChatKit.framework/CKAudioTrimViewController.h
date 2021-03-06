/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <ChatKit/RCAudioTrimmingModalItemDelegate.h>

@protocol CKTrimControllerDelegate;
@class CKMediaObject;

@interface CKAudioTrimViewController : UIViewController <RCAudioTrimmingModalItemDelegate> {

	<CKTrimControllerDelegate>* _delegate;
	double _maxDuration;
	CKMediaObject* _originalMediaObject;
	CKMediaObject* _trimmedMediaObject;

}

@property (assign,nonatomic) <CKTrimControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double maxDuration;                                 //@synthesize maxDuration=_maxDuration - In the implementation block
@property (nonatomic,retain) CKMediaObject * originalMediaObject;                //@synthesize originalMediaObject=_originalMediaObject - In the implementation block
@property (nonatomic,retain) CKMediaObject * trimmedMediaObject;                 //@synthesize trimmedMediaObject=_trimmedMediaObject - In the implementation block
-(double)maxDuration;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)loadView;
-(void)viewDidAppear:(bool)arg1 ;
-(id)initWithMediaObject:(id)arg1 ;
-(void)setMaxDuration:(double)arg1 ;
-(void)setOriginalMediaObject:(id)arg1 ;
-(id)originalMediaObject;
-(void)setTrimmedMediaObject:(id)arg1 ;
-(id)trimmedMediaObject;
@end

