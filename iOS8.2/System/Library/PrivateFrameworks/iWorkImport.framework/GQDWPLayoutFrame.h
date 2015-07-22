/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:00 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class GQDSStyle, GQDWPLayoutStorage;

@interface GQDWPLayoutFrame : NSObject {

	char* mStyleRef;
	GQDSStyle* mStyle;
	GQDWPLayoutStorage* mStorage;
	unsigned mTextScale;

}
-(int)readAttributesFromReader:(xmlTextReaderRef)arg1 ;
-(void)resolveStyleRef;
-(void)dealloc;
-(id)storage;
-(unsigned)textScale;
-(id)layoutStyle;
-(char)isBlank;
@end
