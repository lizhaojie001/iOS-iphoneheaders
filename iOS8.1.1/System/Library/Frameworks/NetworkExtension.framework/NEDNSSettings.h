/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:42 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEConfigurationValidating.h>
#import <NetworkExtension/NEPrettyDescription.h>
#import <NetworkExtension/NEConfigurationLegacySupport.h>
#import <NetworkExtension/NSSecureCoding.h>
#import <NetworkExtension/NSCopying.h>

@class NSArray;

@interface NEDNSSettings : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying> {

	NSArray* _servers;
	NSArray* _searchDomains;

}

@property (readonly) NSArray * servers;                    //@synthesize servers=_servers - In the implementation block
@property (readonly) NSArray * searchDomains;              //@synthesize searchDomains=_searchDomains - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 ;
-(id)copyLegacyDictionary;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(NSArray *)servers;
-(NSArray *)searchDomains;
-(id)initWithServers:(id)arg1 andSearchDomains:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
