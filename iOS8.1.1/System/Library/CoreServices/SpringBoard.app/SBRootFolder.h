/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SBFolder.h>

@class SBIconListModel;

@interface SBRootFolder : SBFolder

@property (nonatomic,readonly) BOOL supportsDock; 
@property (nonatomic,retain) SBIconListModel * dock; 
+(BOOL)isRootFolderClass;
-(id)nodeIdentifier;
-(BOOL)supportsDock;
-(id)nodeDescriptionWithPrefix:(id)arg1 ;
-(void)placeIconsOnFirstPage:(id)arg1 ;
-(id)_listsForCompaction;
-(BOOL)canRemoveIcons;
-(BOOL)canEditDisplayName;
-(void)_setDock:(id)arg1 ;
-(SBIconListModel *)dock;
-(BOOL)isRootFolder;
@end
