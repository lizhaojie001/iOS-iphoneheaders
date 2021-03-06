/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:53:02 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADShade.h>

@interface OADLinearShade : OADShade {

	float mAngle;
	char mIsAngleOverridden;
	char mScaled;
	char mIsScaledOverridden;

}
+(id)defaultProperties;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)scaled;
-(void)setScaled:(char)arg1 ;
-(void)setAngle:(float)arg1 ;
-(float)angle;
-(char)isAngleOverridden;
-(char)isScaledOverridden;
-(id)initWithDefaults;
@end

