/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSPropertyDescription.h>

@class NSFetchRequest, NSString;

@interface NSFetchedPropertyDescription : NSPropertyDescription {

	void* _reserved5;
	void* _reserved6;
	NSFetchRequest* _fetchRequest;
	NSString* _lazyFetchRequestEntityName;

}
-(void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7 ;
-(unsigned long long)_propertyType;
-(void)_createCachesAndOptimizeState;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(bool)isTransient;
-(bool)isReadOnly;
-(id)fetchRequest;
-(void)setFetchRequest:(id)arg1 ;
@end
