/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:39:41 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSLock, SUScriptObject;

@interface SUScriptNativeObject : NSObject {

	NSLock* _lock;
	id _nativeObject;
	SUScriptObject* _scriptObject;
	char _weak;

}

@property (assign,nonatomic) id object; 
@property (assign) SUScriptObject * scriptObject; 
+(void)clearWeakReferencesToObject:(id)arg1 ;
+(void)makeReferencesToObjectWeak:(id)arg1 ;
+(id)objectWithNativeObject:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)lock;
-(void)unlock;
-(id)object;
-(void)setObject:(id)arg1 ;
-(void)destroyNativeObject;
-(void)setupNativeObject;
-(SUScriptObject *)scriptObject;
-(void)setScriptObject:(SUScriptObject *)arg1 ;
-(void)_nativeObjectBecameWeakNotification:(id)arg1 ;
@end

