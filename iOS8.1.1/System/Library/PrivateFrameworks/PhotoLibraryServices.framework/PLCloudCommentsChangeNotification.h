/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:19 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLContainerChangeNotification.h>

@class NSDictionary, PLManagedAsset;

@interface PLCloudCommentsChangeNotification : PLContainerChangeNotification {

	NSDictionary* _userInfo;

}

@property (nonatomic,retain,readonly) PLManagedAsset * asset; 
+(id)notificationWithAsset:(id)arg1 snapshot:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(id)name;
-(id)userInfo;
-(PLManagedAsset *)asset;
-(id)_contentRelationshipName;
@end
