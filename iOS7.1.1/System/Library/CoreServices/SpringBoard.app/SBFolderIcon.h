/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:48 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBIcon.h>
#import <SpringBoard/SBFolderObserver.h>
#import <SpringBoard/SBIconObserver.h>
#import <SpringBoard/SBIconIndexNodeObserver.h>

@class NSMutableArray, SBFolder, NSHashTable, NSMutableSet;

@interface SBFolderIcon : SBIcon <SBFolderObserver, SBIconObserver, SBIconIndexNodeObserver> {

	NSMutableArray* _cachedMiniGrids;
	SBFolder* _folder;
	NSHashTable* _nodeObservers;
	NSMutableSet* _finishedDownloadIdentifiers;
	int _progressState;
	float _progressPercent;

}
+(unsigned)_maxIconsInGridImage;
+(Class)_iconGridImageClass;
-(void)localeChanged;
-(void)launchFromLocation:(int)arg1 ;
-(void)purgeCachedImages;
-(BOOL)isFolderIcon;
-(id)nodeIdentifier;
-(BOOL)containsNodeIdentifier:(id)arg1 ;
-(BOOL)hasFolderIconView;
-(id)nodeDescriptionWithPrefix:(id)arg1 ;
-(id)initWithFolder:(id)arg1 ;
-(id)getGenericIconImage:(int)arg1 ;
-(void)addNodeObserver:(id)arg1 ;
-(void)_appPlaceholdersDidChange:(id)arg1 ;
-(void)_updateBadgeValue;
-(void)removeNodeObserver:(id)arg1 ;
-(id)gridImages;
-(float)progressPercent;
-(void)_adjustForIconsAdded:(id)arg1 removed:(id)arg2 ;
-(void)_containedIconImageChanged:(id)arg1 ;
-(unsigned)listIndexForContainedIcon:(id)arg1 ;
-(unsigned)gridCellIndexForIconIndex:(unsigned)arg1 ;
-(id)_miniIconGridForPage:(int)arg1 ;
-(id)containedNodeIdentifiers;
-(id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2 ;
-(id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned)arg2 ;
-(void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2 ;
-(void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2 ;
-(void)folder:(id)arg1 didAddList:(id)arg2 ;
-(void)folder:(id)arg1 didRemoveLists:(id)arg2 atIndexes:(id)arg3 ;
-(void)iconImageDidUpdate:(id)arg1 ;
-(void)iconAccessoriesDidUpdate:(id)arg1 ;
-(BOOL)progressIsPaused;
-(BOOL)shouldAnimateProgress;
-(void)noteContainedIconsAdded:(id)arg1 removed:(id)arg2 ;
-(void)noteContainedIcon:(id)arg1 replacedIcon:(id)arg2 ;
-(id)miniGridCellImageForIcon:(id)arg1 ;
-(Class)iconImageViewClassForLocation:(int)arg1 ;
-(id)generateIconImage:(int)arg1 ;
-(void)_updateProgress;
-(void)updateLabel;
-(void)dealloc;
-(id)description;
-(id)displayName;
-(id)folder;
-(int)progressState;
@end

