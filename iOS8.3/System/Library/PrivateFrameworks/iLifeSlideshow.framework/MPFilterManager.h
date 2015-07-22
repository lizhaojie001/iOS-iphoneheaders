/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:31:33 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray;

@interface MPFilterManager : NSObject {

	NSMutableDictionary* mFilters;
	NSArray* mFilterCategories;
	NSMutableDictionary* mFilterPresets;

}
+(id)sharedManager;
+(void)releaseSharedManager;
+(void)loadFilterManagerWithPaths:(id)arg1 ;
-(void)dealloc;
-(id)initWithPaths:(id)arg1 ;
-(id)allFilterIDs;
-(id)versionOfFilterID:(id)arg1 ;
-(id)filterIDsForCategoryID:(id)arg1 ;
-(id)filterCategoryIDs;
-(id)presetIDsForFilterID:(id)arg1 ;
-(id)attributesForFilterID:(id)arg1 andPresetID:(id)arg2 ;
-(id)animationsForFilterID:(id)arg1 andPresetID:(id)arg2 ;
-(id)constraintsForFilterPresetsMatchingList:(id)arg1 andCriteria:(id)arg2 ;
-(id)randomFilterPresetFromList:(id)arg1 abidingWithConstraints:(id)arg2 ;
-(id)filterPresetsMatchingCriteria:(id)arg1 ;
-(id)randomFilter:(char)arg1 ;
@end
