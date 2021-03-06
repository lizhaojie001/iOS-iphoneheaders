/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:35:06 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIControl.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <AddressBookUI/QLPreviewControllerDelegate.h>
#import <AddressBookUI/QLPreviewControllerDataSource.h>

@protocol ABPresenterDelegate, ABContactPhotoViewDelegate;
@class CNContact, NSDictionary, UIImage, UIImageView, UILabel, UIGestureRecognizer, NSString;

@interface ABContactPhotoView : UIControl <UINavigationControllerDelegate, UIImagePickerControllerDelegate, QLPreviewControllerDelegate, QLPreviewControllerDataSource> {

	char _editing;
	char _modified;
	char _isAnimatingBounce;
	CNContact* _contact;
	id<ABPresenterDelegate> _delegate;
	id<ABContactPhotoViewDelegate> _photoViewDelegate;
	NSDictionary* _photoPickerInfo;
	UIImage* _currentThumbnailImage;
	UIImage* _currentImage;
	UIImageView* _contactImageView;
	UILabel* _addPhotoLabel;
	UILabel* _editPhotoLabel;
	UIImageView* _attributionImageView;
	UIGestureRecognizer* _tapGesture;

}

@property (nonatomic,retain) CNContact * contact;                                           //@synthesize contact=_contact - In the implementation block
@property (assign,getter=isEditing,nonatomic) char editing;                                 //@synthesize editing=_editing - In the implementation block
@property (assign,nonatomic) char modified;                                                 //@synthesize modified=_modified - In the implementation block
@property (assign,nonatomic) id<ABPresenterDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) id<ABContactPhotoViewDelegate> photoViewDelegate;              //@synthesize photoViewDelegate=_photoViewDelegate - In the implementation block
@property (nonatomic,retain) NSDictionary * photoPickerInfo;                                //@synthesize photoPickerInfo=_photoPickerInfo - In the implementation block
@property (nonatomic,retain) UIImage * currentThumbnailImage;                               //@synthesize currentThumbnailImage=_currentThumbnailImage - In the implementation block
@property (nonatomic,retain) UIImage * currentImage;                                        //@synthesize currentImage=_currentImage - In the implementation block
@property (nonatomic,retain) UIImageView * contactImageView;                                //@synthesize contactImageView=_contactImageView - In the implementation block
@property (nonatomic,retain) UILabel * addPhotoLabel;                                       //@synthesize addPhotoLabel=_addPhotoLabel - In the implementation block
@property (nonatomic,retain) UILabel * editPhotoLabel;                                      //@synthesize editPhotoLabel=_editPhotoLabel - In the implementation block
@property (nonatomic,retain) UIImageView * attributionImageView;                            //@synthesize attributionImageView=_attributionImageView - In the implementation block
@property (assign,nonatomic) char isAnimatingBounce;                                        //@synthesize isAnimatingBounce=_isAnimatingBounce - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * tapGesture;                              //@synthesize tapGesture=_tapGesture - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedPasteboardTypes;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(char)modified;
-(id)initWithContact:(id)arg1 frame:(CGRect)arg2 ;
-(void)resetPhoto;
-(void)updatePhoto;
-(void)saveEdits;
-(void)updateFontSizes;
-(void)menuWillHide:(id)arg1 ;
-(void)disablePhotoTapGesture;
-(void)setPhotoViewDelegate:(id<ABContactPhotoViewDelegate>)arg1 ;
-(void)tapGesture:(id)arg1 ;
-(UIGestureRecognizer *)tapGesture;
-(void)longPressGesture:(id)arg1 ;
-(UILabel *)editPhotoLabel;
-(UILabel *)addPhotoLabel;
-(UIImageView *)attributionImageView;
-(id)currentImageDataAndCropRect:(CGRect*)arg1 ;
-(UIImage *)currentThumbnailImage;
-(NSDictionary *)photoPickerInfo;
-(void)setCurrentThumbnailImage:(UIImage *)arg1 ;
-(id)currentImageData;
-(void)_presentPhotoEditingSheet;
-(void)_zoomContactPhoto;
-(void)setHighlightedFrame:(char)arg1 ;
-(void)setCurrentImage:(UIImage *)arg1 ;
-(void)setPhotoPickerInfo:(NSDictionary *)arg1 ;
-(void)setModified:(char)arg1 ;
-(void)updatePhotoWithImage:(id)arg1 ;
-(void)updateAttributionBadge;
-(id<ABContactPhotoViewDelegate>)photoViewDelegate;
-(void)setAttributionImageView:(UIImageView *)arg1 ;
-(id)_createImagePicker;
-(id)_createImagePickerForEditingImageData:(id)arg1 withCropRect:(CGRect)arg2 ;
-(void)_presentFullScreenPhoto:(id)arg1 ;
-(void)_bounceSmallPhoto;
-(id)previewPath;
-(char)isAnimatingBounce;
-(void)setIsAnimatingBounce:(char)arg1 ;
-(void)setAddPhotoLabel:(UILabel *)arg1 ;
-(void)setEditPhotoLabel:(UILabel *)arg1 ;
-(void)setTapGesture:(UIGestureRecognizer *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<ABPresenterDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<ABPresenterDelegate>)delegate;
-(char)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(char)canBecomeFirstResponder;
-(void)tintColorDidChange;
-(CGSize)intrinsicContentSize;
-(char)isEditing;
-(void)setEditing:(char)arg1 ;
-(UIImage *)currentImage;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id*)arg3 ;
-(void)previewControllerDidDismiss:(id)arg1 ;
-(id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(CGRect*)arg3 ;
-(int)numberOfPreviewItemsInPreviewController:(id)arg1 ;
-(id)previewController:(id)arg1 previewItemAtIndex:(int)arg2 ;
-(void)setContactImageView:(UIImageView *)arg1 ;
-(UIImageView *)contactImageView;
-(char)hasPhoto;
@end

