/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSString;

@interface _UIDatePickerComponent : NSObject {

	unsigned _equivalentUnit;
	NSString* _formatString;
	unsigned _calendarUnit;
	float _width;
	NSRange _unitRange;

}

@property (nonatomic,readonly) NSString * formatString;              //@synthesize formatString=_formatString - In the implementation block
@property (nonatomic,readonly) unsigned calendarUnit;                //@synthesize calendarUnit=_calendarUnit - In the implementation block
@property (nonatomic,readonly) unsigned equivalentUnit; 
@property (assign,nonatomic) NSRange unitRange;                      //@synthesize unitRange=_unitRange - In the implementation block
@property (assign,nonatomic) float width;                            //@synthesize width=_width - In the implementation block
+(id)componentsFromDateFormatString:(id)arg1 locale:(id)arg2 ;
+(id)componentsFromDateFormatString:(id)arg1 locale:(id)arg2 desiredUnits:(int)arg3 ;
-(void)dealloc;
-(id)description;
-(float)width;
-(void)setWidth:(float)arg1 ;
-(unsigned)calendarUnit;
-(id)formatString;
-(unsigned)equivalentUnit;
-(void)setUnitRange:(NSRange)arg1 ;
-(NSRange)unitRange;
-(id)_initWithFormatString:(id)arg1 calendarUnit:(unsigned)arg2 ;
@end

