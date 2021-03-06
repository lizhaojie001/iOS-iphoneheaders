/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:48 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDSQLitePredicate.h>
#import <HealthDaemon/NSCopying.h>

@class HDSQLitePredicate;

@interface HDSQLiteHasAssociatedEntityPredicate : HDSQLitePredicate <NSCopying> {

	Class _associatedEntityClass;
	HDSQLitePredicate* _associatedPredicate;
	BOOL _inverted;

}
+(id)predicateWithAssociatedEntityClass:(Class)arg1 ;
+(id)predicateWithAssociatedEntityClass:(Class)arg1 associatedPredicate:(id)arg2 inverted:(BOOL)arg3 ;
-(id)SQLForEntityClass:(Class)arg1 ;
-(void)bindToStatement:(sqlite3_stmtRef)arg1 bindingIndex:(inout int*)arg2 ;
@end

