/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:22 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <JavaScriptCore/JavaScriptCore-Structs.h>
@interface JSManagedValue : NSObject {

	Weak<JSC::JSGlobalObject>* m_globalObject;
	WeakValueRef* m_weakValue;

}
+(id)managedValueWithValue:(id)arg1 ;
-(id)initWithValue:(id)arg1 ;
-(void)disconnectValue;
-(id)init;
-(id)value;
-(id).cxx_construct;
-(void).cxx_destruct;
@end

