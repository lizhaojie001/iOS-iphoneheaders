/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:52 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSManagedObjectModel, NSEntityMapping, NSError;

@interface _NSMappingModelBuilder : NSObject {

	NSManagedObjectModel* _sourceModel;
	NSManagedObjectModel* _destinationModel;
	NSEntityMapping* _currentEntityMapping;
	NSError* _error;

}
+(int)migrationDebugLevel;
+(void)setMigrationDebugLevel:(int)arg1 ;
-(void)_resetCaches;
-(id)newEntityMappingWithSource:(id)arg1 destination:(id)arg2 ;
-(BOOL)inferPropertyMappingsForEntityMapping:(id)arg1 ;
-(id)newInferredPropertyMappingWithSourceAttribute:(id)arg1 destinationAttribute:(id)arg2 ;
-(id)newInferredPropertyMappingWithSourceRelationship:(id)arg1 destinationRelationship:(id)arg2 ;
-(BOOL)_canTransformSourceAttributeType:(unsigned long long)arg1 toDestinationAttributeType:(unsigned long long)arg2 ;
-(id)initWithSourceModel:(id)arg1 destinationModel:(id)arg2 ;
-(id)newInferredMappingModel:(id*)arg1 ;
-(void)dealloc;
@end

