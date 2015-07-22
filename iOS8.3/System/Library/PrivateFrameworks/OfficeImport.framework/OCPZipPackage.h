/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:53:05 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OCPPackage.h>

@class OISFUZipArchive, NSMutableDictionary;

@interface OCPZipPackage : OCPPackage {

	OISFUZipArchive* mArchive;
	NSMutableDictionary* mParts;

}
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(id)partForLocation:(id)arg1 ;
-(void)resetPartForLocation:(id)arg1 ;
-(id)initWithArchive:(id)arg1 ;
@end
