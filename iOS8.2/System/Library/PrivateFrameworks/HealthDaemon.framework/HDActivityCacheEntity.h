/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:12 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HDSampleEntity.h>

@interface HDActivityCacheEntity : HDSampleEntity
+(id)codableObjectsFromObjectCollection:(id)arg1 ;
+(id)_databaseTable;
+(id)_columnsSQL;
+(Class)_associatedDataObjectClass;
+(id)_propertySettersForDataObject;
+(id)_tableValuesFromDataObject:(id)arg1 ;
+(id)activityCacheForIndex:(long long)arg1 healthDaemon:(id)arg2 error:(id*)arg3 ;
+(id)activityCachesInRangeStart:(id)arg1 end:(id)arg2 inHealthDaemon:(id)arg3 error:(id*)arg4 ;
+(id)entitiesToDeleteBeforeInsertingObject:(id)arg1 sourceEntity:(id)arg2 database:(id)arg3 ;
@end

