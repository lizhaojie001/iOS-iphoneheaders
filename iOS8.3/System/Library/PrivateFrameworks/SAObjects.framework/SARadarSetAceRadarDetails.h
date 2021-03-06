/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:25:48 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, NSString;

@interface SARadarSetAceRadarDetails : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * attachments; 
@property (nonatomic,copy) NSString * clientConfiguration; 
@property (nonatomic,copy) NSString * radarTitle; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)setAceRadarDetails;
+(id)setAceRadarDetailsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)attachments;
-(void)setAttachments:(NSArray *)arg1 ;
-(id)encodedClassName;
-(NSString *)clientConfiguration;
-(void)setClientConfiguration:(NSString *)arg1 ;
-(NSString *)radarTitle;
-(void)setRadarTitle:(NSString *)arg1 ;
@end

