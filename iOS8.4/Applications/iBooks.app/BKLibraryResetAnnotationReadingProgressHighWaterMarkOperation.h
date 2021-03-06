/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:21 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/IMOperation.h>

@class AEAnnotationProvider, NSSet;

@interface BKLibraryResetAnnotationReadingProgressHighWaterMarkOperation : IMOperation {

	AEAnnotationProvider* _annotationProvider;
	NSSet* _databaseKeys;

}

@property (nonatomic,retain) AEAnnotationProvider * annotationProvider;              //@synthesize annotationProvider=_annotationProvider - In the implementation block
@property (nonatomic,retain) NSSet * databaseKeys;                                   //@synthesize databaseKeys=_databaseKeys - In the implementation block
-(void)performOperation;
-(id)initWithDatabaseKeys:(id)arg1 ;
-(void)setAnnotationProvider:(AEAnnotationProvider *)arg1 ;
-(void)setDatabaseKeys:(NSSet *)arg1 ;
-(void)p_poplateMissingReadingProgressHighWaterMarks;
-(NSSet *)databaseKeys;
-(AEAnnotationProvider *)annotationProvider;
-(char)p_resetHighWaterMarkForBook:(id)arg1 globalAnnotation:(id)arg2 ;
@end

