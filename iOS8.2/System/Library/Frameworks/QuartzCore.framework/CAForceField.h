/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:48 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/NSCopying.h>
#import <QuartzCore/NSMutableCopying.h>
#import <QuartzCore/NSCoding.h>

@class NSString, CALayer, CAValueFunction;

@interface CAForceField : NSObject <NSCopying, NSMutableCopying, NSCoding> {

	NSString* _name;
	CALayer* _layer;
	CAValueFunction* _function;
	char _enabled;
	void* _priv;

}

@property (copy) NSString * name; 
@property (getter=isEnabled) char enabled; 
@property (retain) CALayer * layer; 
@property (retain) CAValueFunction * function; 
+(id)defaultValueForKey:(id)arg1 ;
+(void)CAMLParserStartElement:(id)arg1 ;
+(id)forceField;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(Object*)CA_copyRenderValue;
-(void)setFunction:(CAValueFunction *)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(CALayer *)layer;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setLayer:(CALayer *)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(char)isEnabled;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(CAValueFunction *)function;
@end

