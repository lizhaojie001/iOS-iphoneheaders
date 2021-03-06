/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UIImage;

@interface PLCameraFlashLabelView : UIView {

	NSString* _text;
	UIImage* _image;
	BOOL _labelIsVisible;
	CGImageRef _labelVisibleContents;
	CGImageRef _labelHiddenContents;
	CGSize _contentsSize;
	float backgroundAlpha;

}

@property (nonatomic,retain) NSString * text; 
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) BOOL labelIsVisible; 
@property (assign,nonatomic) CGSize contentsSize; 
@property (assign,nonatomic) float backgroundAlpha; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(id)image;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)sizeToFit;
-(id)text;
-(void)setText:(id)arg1 ;
-(void)setBackgroundAlpha:(float)arg1 ;
-(void)updateLabelContents;
-(void)_reloadLabelContents;
-(float)backgroundAlpha;
-(CGImageRef)_newLabelImage:(BOOL)arg1 ;
-(void)setLabelIsVisible:(BOOL)arg1 ;
-(BOOL)labelIsVisible;
-(void)setContentsSize:(CGSize)arg1 ;
-(CGSize)contentsSize;
@end

