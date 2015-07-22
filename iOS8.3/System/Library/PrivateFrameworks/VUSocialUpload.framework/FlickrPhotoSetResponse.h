/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:57:54 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/VUSocialUpload.framework/VUSocialUpload
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VUSocialUpload/NSXMLParserDelegate.h>

@class NSString, FlickrPhotoSet, NSMutableString, NSMutableArray;

@interface FlickrPhotoSetResponse : NSObject <NSXMLParserDelegate> {

	char _success;
	NSString* _errorDescription;
	FlickrPhotoSet* _currentPhotoSet;
	NSMutableString* _dataString;
	int _stage;
	NSMutableArray* _photoSets;

}

@property (assign,nonatomic) int stage;                               //@synthesize stage=_stage - In the implementation block
@property (nonatomic,retain) NSMutableArray * photoSets;              //@synthesize photoSets=_photoSets - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)responseWithData:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(int)stage;
-(void)setStage:(int)arg1 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(NSMutableArray *)photoSets;
-(void)setPhotoSets:(NSMutableArray *)arg1 ;
@end
