/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAVDrawable : NSObject
+(xmlDoc*)vmlDocumentFromPart:(id)arg1 ;
+(id)readDrawablesFromParent:(xmlNode*)arg1 inNamespace:(id)arg2 state:(id)arg3 ;
+(id)readDrawableFromNode:(xmlNode*)arg1 inNamespace:(id)arg2 state:(id)arg3 ;
+(void)readFromDrawable:(xmlNode*)arg1 toDrawable:(id)arg2 state:(id)arg3 ;
+(CGRect)readCoordBounds:(xmlNode*)arg1 ;
@end
