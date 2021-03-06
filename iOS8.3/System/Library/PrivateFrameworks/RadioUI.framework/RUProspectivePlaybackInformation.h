/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:21:56 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RadioUI/RadioUI-Structs.h>
#import <MediaPlayerUI/MPUProspectivePlaybackInformation.h>

@class RadioStation;

@interface RUProspectivePlaybackInformation : MPUProspectivePlaybackInformation {

	RadioStation* _radioStation;

}

@property (nonatomic,readonly) RadioStation * radioStation;              //@synthesize radioStation=_radioStation - In the implementation block
-(RadioStation *)radioStation;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isRadioProspectivePlaybackInformation;
-(id)initWithRadioStation:(id)arg1 ;
@end

