/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:47 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLAssetContainerListChangeNotification.h>
#import <PhotoLibraryServices/PLIndexMapperDataSource.h>

@class PLFilteredAlbumList, NSIndexSet, PLIndexMapper, PLAssetContainerListChangeNotification, NSString;

@interface PLFilteredAlbumListChangeNotification : PLAssetContainerListChangeNotification <PLIndexMapperDataSource> {

	PLFilteredAlbumList* _albumList;
	NSIndexSet* _oldFilteredIndexes;
	NSIndexSet* _filteredIndexes;
	PLIndexMapper* _indexMapper;
	PLAssetContainerListChangeNotification* _backingNotification;

}

@property (nonatomic,retain,readonly) NSIndexSet * updatedFilteredIndexes; 
@property (nonatomic,copy) NSIndexSet * filteredIndexes; 
@property (nonatomic,retain,readonly) PLIndexMapper * indexMapper; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)notificationForDerivedObject:(id)arg1 priorChangeState:(id)arg2 forBackingObjectNotification:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(id)object;
-(NSIndexSet *)filteredIndexes;
-(char)shouldIncludeObjectAtIndex:(unsigned)arg1 ;
-(PLIndexMapper *)indexMapper;
-(id)albumList;
-(char)shouldReload;
-(id)_diffDescription;
-(char)_getOldSet:(id*)arg1 newSet:(id*)arg2 ;
-(id)_changedObjects;
-(NSIndexSet *)updatedFilteredIndexes;
-(char)countDidChange;
-(void)setFilteredIndexes:(NSIndexSet *)arg1 ;
-(id)initWithFilteredAlbumList:(id)arg1 albumListChangeNotification:(id)arg2 ;
@end

