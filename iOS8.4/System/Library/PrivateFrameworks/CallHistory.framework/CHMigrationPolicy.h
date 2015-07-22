/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:01 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSEntityMigrationPolicy.h>

@class NSMutableDictionary, NSString;

@interface CHMigrationPolicy : NSEntityMigrationPolicy {

	NSMutableDictionary* mccToISOCountryCodeMap;
	NSString* lastQueriedISOCountryCode;
	NSString* currentLocale;

}
-(id)init;
-(id)isoCountryCodeForMCC:(id)arg1 ;
-(id)isoCountryCodeIfAbsent:(id)arg1 ;
@end
