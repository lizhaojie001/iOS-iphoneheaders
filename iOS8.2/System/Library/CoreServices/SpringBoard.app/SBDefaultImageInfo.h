/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:23 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class UIImage;

@interface SBDefaultImageInfo : NSObject {

	char _hasSnapshot;
	char _isDownscaled;
	int _launchingInterfaceOrientation;
	float _launchingScale;
	int _originalOrientation;
	int _currentOrientation;
	UIImage* _image;
	CGSize _launchingSize;

}

@property (assign,nonatomic) int launchingInterfaceOrientation;              //@synthesize launchingInterfaceOrientation=_launchingInterfaceOrientation - In the implementation block
@property (assign,nonatomic) CGSize launchingSize;                           //@synthesize launchingSize=_launchingSize - In the implementation block
@property (assign,nonatomic) float launchingScale;                           //@synthesize launchingScale=_launchingScale - In the implementation block
@property (assign,nonatomic) int originalOrientation;                        //@synthesize originalOrientation=_originalOrientation - In the implementation block
@property (assign,nonatomic) int currentOrientation;                         //@synthesize currentOrientation=_currentOrientation - In the implementation block
@property (assign,nonatomic) char hasSnapshot;                               //@synthesize hasSnapshot=_hasSnapshot - In the implementation block
@property (nonatomic,retain) UIImage * image;                                //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) char isDownscaled;                              //@synthesize isDownscaled=_isDownscaled - In the implementation block
-(void)setLaunchingInterfaceOrientation:(int)arg1 ;
-(void)setLaunchingSize:(CGSize)arg1 ;
-(void)setLaunchingScale:(float)arg1 ;
-(void)setHasSnapshot:(char)arg1 ;
-(char)hasSnapshot;
-(int)launchingInterfaceOrientation;
-(float)launchingScale;
-(CGSize)launchingSize;
-(void)dealloc;
-(void)setImage:(UIImage *)arg1 ;
-(id)description;
-(UIImage *)image;
-(int)originalOrientation;
-(void)setOriginalOrientation:(int)arg1 ;
-(int)currentOrientation;
-(void)setCurrentOrientation:(int)arg1 ;
-(char)isDownscaled;
-(void)setIsDownscaled:(char)arg1 ;
@end

