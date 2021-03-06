/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:46:19 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class LSApplicationWorkspace;

@interface GKApplicationWorkspace : NSObject {

	LSApplicationWorkspace* _lsWorkspace;

}

@property (nonatomic,retain) LSApplicationWorkspace * lsWorkspace;              //@synthesize lsWorkspace=_lsWorkspace - In the implementation block
+(id)defaultWorkspace;
-(void)dealloc;
-(char)applicationIsInstalled:(id)arg1 ;
-(void)openSettings;
-(void)setLsWorkspace:(LSApplicationWorkspace *)arg1 ;
-(id)applicationProxyForBundleID:(id)arg1 ;
-(void)openICloudSettings;
-(LSApplicationWorkspace *)lsWorkspace;
-(id)initWithWorkspace:(id)arg1 ;
@end

