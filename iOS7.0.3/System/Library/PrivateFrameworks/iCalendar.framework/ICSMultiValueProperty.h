/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iCalendar/ICSProperty.h>

@interface ICSMultiValueProperty : ICSProperty
-(id)initWithValue:(id)arg1 type:(unsigned)arg2 ;
-(void)setValue:(id)arg1 type:(unsigned)arg2 ;
-(id)value;
-(id)values;
-(void)_ICSStringWithOptions:(unsigned)arg1 appendingToString:(id)arg2 ;
-(BOOL)isMultiValued;
-(void)_setParsedValues:(id)arg1 type:(unsigned)arg2 ;
-(void)setValues:(id)arg1 valueType:(unsigned)arg2 ;
@end

