/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:54 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MobileMailSettings.bundle/MobileMailSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMailSettings/NSSecureCoding.h>

@interface MFNanoBridgeSettingsMailbox : NSObject <NSSecureCoding>
+(BOOL)supportsSecureCoding;
+(id)defaultSelectedMailbox;
-(id)icon;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isValid;
-(unsigned long long)level;
-(id)displayName;
-(void)configureCell:(id)arg1 ;
@end

