/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:12 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSMutableDictionary;

@interface OCPPackageRelationshipCollection : NSObject {

	NSMutableDictionary* mIdentifierMap;
	NSMutableDictionary* mTypeMap;

}
-(void)dealloc;
-(id)relationshipForIdentifier:(id)arg1 ;
-(id)relationshipsByType:(id)arg1 ;
-(id)initWithRelationshipsXml:(xmlDoc*)arg1 baseLocation:(id)arg2 ;
@end

