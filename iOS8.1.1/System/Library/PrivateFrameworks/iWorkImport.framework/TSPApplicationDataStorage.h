/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:19 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSPDocumentResourceDataStorage.h>

@interface TSPApplicationDataStorage : TSPDocumentResourceDataStorage {

	BOOL _isValidated;

}
-(id)filenameForPreferredFilename:(id)arg1 ;
-(void)performReadWithAccessor:(/*^block*/id)arg1 ;
-(id)initWithManager:(id)arg1 documentResourceInfo:(id)arg2 isValidated:(BOOL)arg3 ;
-(id)initWithManager:(id)arg1 documentResourceInfo:(id)arg2 ;
-(void)validateIfNeeded;
-(id)fileURLForInfo:(id)arg1 ;
-(BOOL)isReadable;
@end

