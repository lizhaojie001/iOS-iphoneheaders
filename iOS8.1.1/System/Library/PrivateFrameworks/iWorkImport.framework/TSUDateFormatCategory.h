/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:17 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableArray;

@interface TSUDateFormatCategory : NSObject {

	CFDateFormatterRef mInitialFormatter;
	NSMutableArray* mEntries;

}
-(id)initialPattern;
-(id)formatStringsDictionary;
-(void)dealloc;
-(CFDateRef)newDateFromString:(CFStringRef)arg1 forceAllowAMPM:(BOOL)arg2 successfulFormatString:(const _CFString*)arg3 perfect:(BOOL*)arg4 ;
-(id)initWithInitialPattern:(id)arg1 locale:(CFLocaleRef)arg2 ;
-(void)addSeparator:(unsigned short)arg1 format:(id)arg2 locale:(CFLocaleRef)arg3 ;
-(id)entryForSeparator:(unsigned short)arg1 ;
@end

