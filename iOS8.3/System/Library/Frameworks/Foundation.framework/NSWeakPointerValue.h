/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:50:26 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSValue.h>

@interface NSWeakPointerValue : NSValue {

	void* _value;
	void* _weakValue;

}
-(id)initWithPointer:(void*)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)getValue:(void*)arg1 ;
-(id)nonretainedObjectValue;
-(const char*)objCType;
-(char)isEqualToValue:(id)arg1 ;
@end
