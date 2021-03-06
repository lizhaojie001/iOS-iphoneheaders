/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:18 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSDictionary;

@interface SPBundleManager : NSObject {

	NSArray* _searchBundles;
	NSArray* _datastores;
	NSDictionary* _domainMap;

}

@property (nonatomic,readonly) NSArray * searchBundles; 
+(id)sharedManager;
-(void)dealloc;
-(id)datastoreForDomain:(unsigned)arg1 ;
-(BOOL)lockDatastore:(id)arg1 withTimeout:(double)arg2 ;
-(void)unlockDatastore:(id)arg1 ;
-(void)_loadSearchBundles;
-(NSArray *)searchBundles;
-(void)createLockForDatastore:(id)arg1 ;
-(id)datastores;
-(id)domainMap;
-(void)resetDatastores;
-(void)lockDatastore:(id)arg1 ;
-(BOOL)tryLockDatastore:(id)arg1 ;
@end

