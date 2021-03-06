/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:32:19 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLifeSlideshow/MCContainer.h>

@class NSMutableDictionary, NSString, MCPlugHaven, NSSet;

@interface MCContainerNavigator : MCContainer {

	NSMutableDictionary* mPlugs;
	NSString* mStartPlugID;
	MCPlugHaven* mStartPlug;

}

@property (readonly) NSSet * plugs; 
@property (readonly) unsigned countOfPlugs; 
@property (nonatomic,copy) NSString * startPlugID; 
@property (readonly) MCPlugHaven * startPlug; 
-(id)init;
-(id)imprint;
-(id)plugForID:(id)arg1 ;
-(void)removePlugForID:(id)arg1 ;
-(id)setPlugForContainer:(id)arg1 forID:(id)arg2 ;
-(void)demolish;
-(void)removePlug:(id)arg1 ;
-(NSString *)startPlugID;
-(void)setStartPlugID:(NSString *)arg1 ;
-(NSSet *)plugs;
-(MCPlugHaven *)startPlug;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(unsigned)countOfPlugs;
-(void)changeIDOfPlug:(id)arg1 toID:(id)arg2 ;
-(void)removeAllPlugs;
@end

