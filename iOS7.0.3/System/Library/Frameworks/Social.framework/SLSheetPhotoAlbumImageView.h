/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Social/Social-Structs.h>
#import <Social/SLSheetImagePreviewView.h>

@class CALayer, NSMutableArray, UILabel, NSString;

@interface SLSheetPhotoAlbumImageView : SLSheetImagePreviewView {

	CALayer* _frameLayer;
	CALayer* _glossLayer;
	NSMutableArray* _frameViews;
	int _frameQuantity;
	int _imageQuantity;
	int _numPreviewImagesAdded;
	UILabel* _imageCountLabel;
	NSString* _forcedItemCountString;
	BOOL _updateLayout;

}
+(unsigned)displayedFrameMaximum;
-(void)barMetricsDidChange;
-(void)setPreviewImage:(id)arg1 forAttachment:(id)arg2 ;
-(id)_itemCountString;
-(void)addPreviewImage:(id)arg1 ;
-(BOOL)_shouldDisplayImageCountLabel;
-(CGSize)_currentSize;
-(id)initWithPrincipalAttachments:(id)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)alignmentRectInsets;
-(void)sizeToFit;
-(CGSize)intrinsicContentSize;
-(void)setItemCountString:(id)arg1 ;
-(void).cxx_destruct;
@end

