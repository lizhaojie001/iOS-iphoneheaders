/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:22 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <JavaScriptCore/JavaScriptCore-Structs.h>
@class JSContext, NSMutableDictionary, NSMapTable;

@interface JSWrapperMap : NSObject {

	JSContext* m_context;
	NSMutableDictionary* m_classMap;
	WeakGCMap<id, JSC::JSObject, WTF::PtrHash<id>, WTF::HashTraits<id> >* m_cachedJSWrappers;
	NSMapTable* m_cachedObjCWrappers;

}
-(id)jsWrapperForObject:(id)arg1 ;
-(id)objcWrapperForJSValueRef:(OpaqueJSValueRef)arg1 ;
-(id)classInfoForClass:(Class)arg1 ;
-(void)dealloc;
-(id)initWithContext:(id)arg1 ;
-(id).cxx_construct;
-(void).cxx_destruct;
@end

