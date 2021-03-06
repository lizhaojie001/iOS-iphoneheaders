/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:15:56 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <CoreSuggestions/SGObject.h>

@class SGSimpleMailMessage;

@interface SGMailMessage : NSObject <SGObject> {

	SGSimpleMailMessage* _value;

}

@property (nonatomic,readonly) SGSimpleMailMessage * value;              //@synthesize value=_value - In the implementation block
+(char)supportsSecureCoding;
+(id)mailMessageWithValue:(id)arg1 ;
-(id)initWithValue:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(SGSimpleMailMessage *)value;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqualToMailMessage:(id)arg1 ;
@end

