/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:00 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameController/_GCControllerButtonInput.h>

@protocol _GCACHomeButtonDelegate;
@interface _GCACHomeButton : _GCControllerButtonInput {

	id<_GCACHomeButtonDelegate> _delegate;
	BOOL needsReset;

}
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)_setValue:(float)arg1 ;
@end

