/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:30 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <passd/SQLiteEntity.h>

@interface PassType : SQLiteEntity
+(id)anyInDatabase:(id)arg1 withPassTypeID:(id)arg2 ;
+(id)insertPassTypeWithPassTypeID:(id)arg1 teamID:(id)arg2 inDatabase:(id)arg3 ;
+(id)_insertionDictionaryWithPassTypeID:(id)arg1 teamID:(id)arg2 ;
+(id)_passTypeIDPredicate:(id)arg1 ;
+(id)associationPropertyForEntityClass:(Class)arg1 ;
+(id)databaseTable;
+(id)joinClauseForProperty:(id)arg1 ;
-(id)passTypeID;
-(id)lastPushDate;
-(double)frequencyScore;
-(void)updateLastPushDate:(id)arg1 ;
-(void)updateFrequencyScore:(double)arg1 ;
-(void)updateLastUpdateDate:(id)arg1 ;
-(id)initWithPassTypeID:(id)arg1 teamID:(id)arg2 inDatabase:(id)arg3 ;
-(id)teamID;
-(id)lastUpdateDate;
@end

