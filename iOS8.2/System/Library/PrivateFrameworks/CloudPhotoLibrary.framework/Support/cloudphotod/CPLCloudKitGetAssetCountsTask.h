/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:08 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <cloudphotod/CPLCloudKitTransportTask.h>
#import <cloudphotod/CPLEngineTransportGetAssetCountsTask.h>

@class NSString;

@interface CPLCloudKitGetAssetCountsTask : CPLCloudKitTransportTask <CPLEngineTransportGetAssetCountsTask> {

	/*^block*/id _completionHandler;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char foreground; 
-(id)initWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)run;
@end

