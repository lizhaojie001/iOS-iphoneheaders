/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXScene3D : NSObject
+(id)readScene3DFromXmlNode:(xmlNode*)arg1 packagePart:(id)arg2 ;
+(id)cameraTypeEnumMap;
+(id)lightRigTypeEnumMap;
+(id)lightRigDirectionEnumMap;
+(id)readCameraFromXmlNode:(xmlNode*)arg1 ;
+(id)readLightRigFromXmlNode:(xmlNode*)arg1 ;
+(id)readBackdropFromXmlNode:(xmlNode*)arg1 ;
@end

