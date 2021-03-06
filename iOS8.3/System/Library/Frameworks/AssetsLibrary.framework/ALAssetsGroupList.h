/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:36:10 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssetsLibrary/ALAssetsGroup.h>

@protocol PLAssetContainerList;
@interface ALAssetsGroupList : ALAssetsGroup {

	id<PLAssetContainerList> _containerList;

}

@property (nonatomic,retain,readonly) id<PLAssetContainerList> containerList;              //@synthesize containerList=_containerList - In the implementation block
-(id<PLAssetContainerList>)containerList;
-(id)initWithContainerList:(id)arg1 library:(id)arg2 type:(unsigned)arg3 ;
-(void)_enumerateAssetsAtIndexes:(id)arg1 options:(unsigned)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)valueForProperty:(id)arg1 ;
@end

