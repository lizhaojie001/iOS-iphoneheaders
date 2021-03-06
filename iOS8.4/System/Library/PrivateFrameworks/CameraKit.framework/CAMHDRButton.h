/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:05 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/CAMExpandableMenuButton.h>

@class CAMButtonLabel;

@interface CAMHDRButton : CAMExpandableMenuButton {

	BOOL _allowsAutomaticHDR;
	CAMButtonLabel* __headerLabel;

}

@property (assign,nonatomic) int HDRMode; 
@property (assign,nonatomic) BOOL allowsAutomaticHDR;                      //@synthesize allowsAutomaticHDR=_allowsAutomaticHDR - In the implementation block
@property (nonatomic,readonly) CAMButtonLabel * _headerLabel;              //@synthesize _headerLabel=__headerLabel - In the implementation block
-(void)setHDRMode:(int)arg1 ;
-(int)HDRMode;
-(void)reloadData;
-(id)headerView;
-(void)updateToContentSize:(id)arg1 ;
-(id)initWithExpansionOrientation:(long long)arg1 ;
-(id)hiddenIndexesWhileCollapsed;
-(void)setAllowsAutomaticHDR:(BOOL)arg1 ;
-(void)_commonCAMHDRButtonInitialization;
-(int)modeForIndex:(long long)arg1 ;
-(long long)indexForMode:(int)arg1 ;
-(BOOL)allowsAutomaticHDR;
-(CAMButtonLabel *)_headerLabel;
-(long long)numberOfMenuItems;
-(id)titleForMenuItemAtIndex:(long long)arg1 ;
@end

