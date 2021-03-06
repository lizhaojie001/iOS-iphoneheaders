/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:48 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMAP/MFBaseSyncResponseQueue.h>

@class NSMutableIndexSet, NSIndexSet;

@interface MFSearchResponseQueue : MFBaseSyncResponseQueue {

	NSMutableIndexSet* indexSet;
	unsigned limit;

}

@property (nonatomic,readonly) NSIndexSet * indexSet; 
-(void)dealloc;
-(id)init;
-(bool)flush;
-(id)indexSet;
-(bool)addItem:(id)arg1 ;
-(unsigned long long)uidForItem:(id)arg1 ;
-(unsigned long long)flagsForItem:(id)arg1 ;
@end

