/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:12 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class OCPPackageRelationshipCollection, OCPPackageProperties, NSMutableDictionary;

@interface OCPPackage : NSObject {

	OCPPackageRelationshipCollection* mRelationships;
	OCPPackageProperties* mProperties;
	NSMutableDictionary* mDefaultContentTypes;
	NSMutableDictionary* mContentTypeOverrides;

}
-(void)readContentTypesXml:(xmlDoc*)arg1 ;
-(void)readDefaultContentTypeFromElement:(xmlNode*)arg1 ;
-(void)readContentTypeOverrideFromElement:(xmlNode*)arg1 ;
-(id)contentTypeForPartLocation:(id)arg1 ;
-(id)initWithRelationshipsXml:(xmlDoc*)arg1 propertiesXml:(xmlDoc*)arg2 contentTypesXml:(xmlDoc*)arg3 ;
-(void)dealloc;
-(id)init;
-(id)properties;
-(id)partForLocation:(id)arg1 ;
-(void)resetPartForLocation:(id)arg1 ;
-(id)relationshipForIdentifier:(id)arg1 ;
-(id)partByRelationshipType:(id)arg1 ;
-(id)mainDocumentPart;
-(id)relationshipsByType:(id)arg1 ;
@end

