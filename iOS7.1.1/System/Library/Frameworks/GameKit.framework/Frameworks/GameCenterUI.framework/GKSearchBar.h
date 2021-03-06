/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UISearchBar.h>

@class GKCollectionViewDataSource;

@interface GKSearchBar : UISearchBar {

	GKCollectionViewDataSource* _dataSource;
	long long _sectionIndex;

}

@property (nonatomic,retain) GKCollectionViewDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) long long sectionIndex;                               //@synthesize sectionIndex=_sectionIndex - In the implementation block
-(void)dealloc;
-(void)setDataSource:(id)arg1 ;
-(id)dataSource;
-(long long)sectionIndex;
-(void)setSectionIndex:(long long)arg1 ;
@end

