/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:55:22 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <UIKit/UICollectionViewController.h>
#import <UIKit/UICollectionViewDelegateSCATMenuLayout.h>

@class SCATModernMenuSheet;

@interface SCATModernMenuSheetCollectionViewController : UICollectionViewController <UICollectionViewDelegateSCATMenuLayout> {

	SCATModernMenuSheet* _menuSheet;
	unsigned _visibleItemOffset;

}

@property (assign,nonatomic) SCATModernMenuSheet * menuSheet;              //@synthesize menuSheet=_menuSheet - In the implementation block
@property (assign,nonatomic) unsigned visibleItemOffset;                   //@synthesize visibleItemOffset=_visibleItemOffset - In the implementation block
-(void)showMoreItemsButtonWasActivated;
-(id)menuSheetForCollectionView:(id)arg1 ;
-(id)menuSheet;
-(CGSize)sizeForItemTitleTextAtIndexPath:(id)arg1 withMaxSize:(CGSize)arg2 ;
-(void)setMenuSheet:(id)arg1 ;
-(void)resetVisibleItemOffset;
-(unsigned)visibleItemOffset;
-(void)setVisibleItemOffset:(unsigned)arg1 ;
-(id)titleTextForItemAtIndexPath:(id)arg1 ;
-(id)description;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)initWithCollectionViewLayout:(id)arg1 ;
@end

