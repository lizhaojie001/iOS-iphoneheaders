/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:48 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString;


@protocol HDSyncStore <NSObject>
@property (nonatomic,readonly) long long provenance; 
@property (nonatomic,readonly) NSString * syncStoreIdentifier; 
@optional
-(void)syncWillBeginWithContext:(id)arg1;
-(void)syncDidFinishWithContext:(id)arg1 success:(BOOL)arg2 error:(id)arg3;

@required
-(unsigned long long)syncObjectLimitForEntityClass:(Class)arg1;
-(long long)provenance;
-(id)newChangeWithSyncEntityClass:(Class)arg1;
-(void)sendChange:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3;
-(id)syncEntities;
-(NSString *)syncStoreIdentifier;

@end

