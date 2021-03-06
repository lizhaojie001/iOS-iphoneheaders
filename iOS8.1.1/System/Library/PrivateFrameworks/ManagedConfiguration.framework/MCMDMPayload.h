/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:24 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSString, NSData, NSArray;

@interface MCMDMPayload : MCPayload {

	NSString* _identityUUID;
	NSData* _identityPersistentID;
	BOOL _useDevelopmentAPNS;
	NSString* _topic;
	NSString* _serverURLString;
	NSString* _checkInURLString;
	int _accessRights;
	BOOL _signMessage;
	BOOL _checkOutWhenRemoved;

}

@property (nonatomic,retain,readonly) NSString * identityUUID;                                 //@synthesize identityUUID=_identityUUID - In the implementation block
@property (nonatomic,retain) NSData * identityPersistentID;                                    //@synthesize identityPersistentID=_identityPersistentID - In the implementation block
@property (nonatomic,retain,readonly) NSString * topic;                                        //@synthesize topic=_topic - In the implementation block
@property (nonatomic,retain,readonly) NSString * serverURLString;                              //@synthesize serverURLString=_serverURLString - In the implementation block
@property (nonatomic,readonly) BOOL useDevelopmentAPNS;                                        //@synthesize useDevelopmentAPNS=_useDevelopmentAPNS - In the implementation block
@property (nonatomic,retain,readonly) NSString * checkInURLString;                             //@synthesize checkInURLString=_checkInURLString - In the implementation block
@property (nonatomic,readonly) int accessRights;                                               //@synthesize accessRights=_accessRights - In the implementation block
@property (nonatomic,retain,readonly) NSArray * localizedAccessRightDescriptions; 
@property (nonatomic,readonly) BOOL signMessage;                                               //@synthesize signMessage=_signMessage - In the implementation block
@property (nonatomic,readonly) BOOL checkOutWhenRemoved;                                       //@synthesize checkOutWhenRemoved=_checkOutWhenRemoved - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)description;
-(id)title;
-(NSString *)topic;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)payloadDescriptionKeyValueSections;
-(id)installationWarnings;
-(id)_invalidRightsError;
-(id)_invalidTopicError;
-(id)_nonHTTPSURLErrorForField:(id)arg1 ;
-(NSArray *)localizedAccessRightDescriptions;
-(NSString *)identityUUID;
-(NSData *)identityPersistentID;
-(void)setIdentityPersistentID:(NSData *)arg1 ;
-(NSString *)serverURLString;
-(BOOL)useDevelopmentAPNS;
-(NSString *)checkInURLString;
-(int)accessRights;
-(BOOL)signMessage;
-(BOOL)checkOutWhenRemoved;
@end

