/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:08:11 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <SiriUI/SiriUISnippetViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@class UICollectionView, SASportsAthleteComparisonSnippet, NSString;

@interface ACSportsAthleteComparisionUIController : SiriUISnippetViewController <UICollectionViewDataSource, UICollectionViewDelegate> {

	UICollectionView* _collectionView;
	char _showImages;

}

@property (nonatomic,retain) SASportsAthleteComparisonSnippet * snippet; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_attributionButtonTouched:(id)arg1 ;
-(void)_leagueAppButtonTouched:(id)arg1 ;
-(CGSize)_sizeOfCellAtSection:(unsigned)arg1 ;
-(float)desiredHeightForWidth:(float)arg1 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(char)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(char)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)loadView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(char)arg1 ;
-(id)initWithSnippet:(id)arg1 ;
-(Class)footerViewClass;
-(void)configureReusableFooterView:(id)arg1 ;
@end

