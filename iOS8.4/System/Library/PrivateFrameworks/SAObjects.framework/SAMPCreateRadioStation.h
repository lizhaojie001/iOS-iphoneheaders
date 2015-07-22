/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:12 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber, NSURL;

@interface SAMPCreateRadioStation : SABaseClientBoundCommand

@property (nonatomic,copy) NSNumber * startPlaying; 
@property (nonatomic,copy) NSURL * stationUrl; 
+(id)createRadioStation;
+(id)createRadioStationWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSNumber *)startPlaying;
-(void)setStartPlaying:(NSNumber *)arg1 ;
-(NSURL *)stationUrl;
-(void)setStationUrl:(NSURL *)arg1 ;
@end
