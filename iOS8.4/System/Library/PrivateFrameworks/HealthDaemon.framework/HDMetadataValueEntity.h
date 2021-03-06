/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:49 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HDHealthEntity.h>

@interface HDMetadataValueEntity : HDHealthEntity
+(id)createTableSQL;
+(long long)protectionClass;
+(id)createNonUniqueIndicesForColumns;
+(id)deleteStatementForObjectMetadataWithDatabase:(id)arg1 ;
+(id)metadataValueStatementWithDatabase:(id)arg1 ;
+(id)_insertMetadataValueWithKeyID:(id)arg1 objectID:(id)arg2 value:(id)arg3 database:(id)arg4 error:(id*)arg5 ;
+(id)_propertySettersForResult;
+(id)_predicateForEntityWithObjectID:(id)arg1 ;
+(id)_resultsForPredicate:(id)arg1 database:(id)arg2 ;
+(id)insertMetadataValueWithKeyID:(id)arg1 objectID:(id)arg2 value:(id)arg3 healthDatabase:(id)arg4 error:(id*)arg5 ;
+(id)resultsForObjectID:(id)arg1 database:(id)arg2 ;
+(BOOL)_deleteMetadataValuesWithObjectID:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
+(id)_predicateForEntityWithKeyID:(id)arg1 ;
+(id)databaseTable;
-(id)_clientValueForProperty:(id)arg1 value:(id)arg2 ;
-(id)valueWithDatabase:(id)arg1 ;
@end

