/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:10 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, MPMediaPropertyPredicate;

@interface SUScriptMediaPropertyPredicate : SUScriptObject {

	NSString* _comparisonType;
	NSString* _property;
	id _value;

}

@property (nonatomic,readonly) MPMediaPropertyPredicate * nativePredicate; 
@property (readonly) NSString * comparisonType; 
@property (readonly) NSString * property; 
@property (readonly) id value; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(NSString *)comparisonType;
-(void)dealloc;
-(id)value;
-(NSString *)property;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)attributeKeys;
-(MPMediaPropertyPredicate *)nativePredicate;
-(id)initWithProperty:(id)arg1 value:(id)arg2 comparisonType:(id)arg3 ;
-(id)_playlistAttributesForScriptArray:(id)arg1 ;
@end

