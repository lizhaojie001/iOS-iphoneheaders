/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:26 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSPersistentStoreRequest.h>

@class NSSet;

@interface NSSaveChangesRequest : NSPersistentStoreRequest {

	NSSet* _insertedObjects;
	NSSet* _updatedObjects;
	NSSet* _deletedObjects;
	NSSet* _optimisticallyLockedObjects;
	unsigned long long _flags;
	void* _reserved1;

}

@property (readonly) NSSet * insertedObjects; 
@property (readonly) NSSet * updatedObjects; 
@property (readonly) NSSet * deletedObjects; 
@property (readonly) NSSet * lockedObjects; 
+(void)initialize;
-(int)_retryHandlerCount;
-(void)_setRetryHandlerCount:(int)arg1 ;
-(void)setDeletedObjects:(NSSet *)arg1 ;
-(BOOL)hasChanges;
-(id)initWithInsertedObjects:(id)arg1 updatedObjects:(id)arg2 deletedObjects:(id)arg3 lockedObjects:(id)arg4 ;
-(NSSet *)lockedObjects;
-(void)dealloc;
-(id)init;
-(id)description;
-(NSSet *)insertedObjects;
-(NSSet *)updatedObjects;
-(NSSet *)deletedObjects;
-(unsigned long long)requestType;
@end

