/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/_PlaceCardPhotoCollectionViewCellDelegate.h>
#import <Maps/PlaceViewControllerDataSource.h>

@protocol MUPlaceCardPhotosControllerDelegate;
@class SearchResult, GEOBusiness, UITableView;

@interface MUPlaceCardPhotosController : NSObject <_PlaceCardPhotoCollectionViewCellDelegate, PlaceViewControllerDataSource> {

	SearchResult* _searchResult;
	BOOL _showAddPhotoButton;
	BOOL _showMorePhotosButton;
	BOOL _showAttributionButtons;
	<MUPlaceCardPhotosControllerDelegate>* _photosControllerDelegate;
	GEOBusiness* _business;
	UITableView* _tableView;

}

@property (nonatomic,retain) UITableView * tableView;                                                       //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) SearchResult * searchResult;                                                   //@synthesize searchResult=_searchResult - In the implementation block
@property (assign,nonatomic) <MUPlaceCardPhotosControllerDelegate> * photosControllerDelegate;              //@synthesize photosControllerDelegate=_photosControllerDelegate - In the implementation block
@property (assign,nonatomic) BOOL showAttributionButtons;                                                   //@synthesize showAttributionButtons=_showAttributionButtons - In the implementation block
@property (assign,nonatomic) BOOL showMorePhotosButton;                                                     //@synthesize showMorePhotosButton=_showMorePhotosButton - In the implementation block
@property (assign,nonatomic) BOOL showAddPhotoButton;                                                       //@synthesize showAddPhotoButton=_showAddPhotoButton - In the implementation block
@property (nonatomic,retain) GEOBusiness * business;                                                        //@synthesize business=_business - In the implementation block
-(void)setSearchResult:(id)arg1 ;
-(void)setShowAttributionButtons:(BOOL)arg1 ;
-(void)setShowAddPhotoButton:(BOOL)arg1 ;
-(void)setShowMorePhotosButton:(BOOL)arg1 ;
-(id)photosControllerDelegate;
-(BOOL)showAttributionButtons;
-(BOOL)showMorePhotosButton;
-(BOOL)showAddPhotoButton;
-(float)_heightForGridView;
-(void)_addPhoto;
-(void)_morePhotos;
-(void)photoCollectionViewCell:(id)arg1 didSelectPhotoWithInfo:(id)arg2 ;
-(void)setPhotosControllerDelegate:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)initWithTableView:(id)arg1 ;
-(void)setTableView:(id)arg1 ;
-(float)marginForTableView:(id)arg1 ;
-(id)tableView;
-(id)business;
-(void)setBusiness:(id)arg1 ;
-(id)searchResult;
@end

