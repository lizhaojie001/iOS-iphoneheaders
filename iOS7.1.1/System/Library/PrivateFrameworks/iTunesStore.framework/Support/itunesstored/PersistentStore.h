/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:50:54 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PersistentStoreConfiguration, NSManagedObjectModel, NSPersistentStoreCoordinator, NSString, NSURL;

@interface PersistentStore : NSObject {

	PersistentStoreConfiguration* _configuration;
	NSManagedObjectModel* _model;
	NSPersistentStoreCoordinator* _storeCoordinator;
	NSString* _threadContextKey;
	NSString* _threadCountKey;

}

@property (readonly) PersistentStoreConfiguration * configuration; 
@property (readonly) NSURL * databaseFileURL; 
@property (readonly) NSURL * modelFileURL; 
-(id)databaseFileURL;
-(void)checkIntegrityWithInitializationBlock:(/*^block*/ id)arg1 ;
-(id)beginThreadContextSession;
-(void)endThreadContextSession;
-(id)initWithConfiguration:(id)arg1 error:(id*)arg2 ;
-(BOOL)_loadStoreCoordinatorWithIntegrityCheck:(BOOL)arg1 error:(id*)arg2 ;
-(id)_baseFilePath;
-(id)_newLegacyManagedObjectModel;
-(BOOL)performLightweightMigration:(id*)arg1 ;
-(id)modelFileURL;
-(BOOL)loadStoreCoordinatorWithOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)resetStore:(id*)arg1 ;
-(void)dealloc;
-(id)init;
-(id)managedObjectModel;
-(id)configuration;
@end

