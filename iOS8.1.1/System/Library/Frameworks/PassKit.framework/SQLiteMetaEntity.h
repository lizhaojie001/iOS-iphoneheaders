/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:47 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <passd/SQLiteEntity.h>

@interface SQLiteMetaEntity : SQLiteEntity
+(id)anyInDatabase:(id)arg1 withType:(id)arg2 name:(id)arg3 ;
+(id)queryWithDatabase:(id)arg1 types:(id)arg2 tableName:(id)arg3 ;
+(id)_typePredicate:(id)arg1 ;
+(id)_namePredicate:(id)arg1 ;
+(id)_tableNamePredicate:(id)arg1 ;
+(id)anyInDatabase:(id)arg1 withType:(id)arg2 tableName:(id)arg3 ;
+(id)queryWithDatabase:(id)arg1 type:(id)arg2 ;
+(id)queryWithDatabase:(id)arg1 type:(id)arg2 tableName:(id)arg3 ;
+(id)databaseTable;
-(id)SQL;
-(id)type;
-(id)name;
-(id)tableName;
@end

