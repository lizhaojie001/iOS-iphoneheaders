/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:21 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXElementInteraction.framework/AXElementInteraction
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AXElementInteraction/AXElementInteraction-Structs.h>
#import <AXElementInteraction/AXUIClientDelegate.h>

@protocol AXElementInteractionManagerDelegate;
@class AXElement, AXUIClient, NSString;

@interface AXElementInteractionManager : NSObject <AXUIClientDelegate> {

	char _interactionEnabled;
	AXElement* _focusedElement;
	AXObserverRef _axEventObserver;
	AXUIClient* _client;
	char _displayCursor;
	id<AXElementInteractionManagerDelegate> _delegate;

}

@property (assign,nonatomic) id<AXElementInteractionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char displayCursor;                                            //@synthesize displayCursor=_displayCursor - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)dealloc;
-(void)setDelegate:(id<AXElementInteractionManagerDelegate>)arg1 ;
-(id)init;
-(id<AXElementInteractionManagerDelegate>)delegate;
-(void)setDisplayCursor:(char)arg1 ;
-(void)_initializeAXObserver;
-(void)initializeFocus;
-(long)_registerForAXNotifications:(char)arg1 ;
-(void)_highlightElement:(id)arg1 ;
-(id)_handleOpaqueElements:(id)arg1 startElement:(id)arg2 direction:(int)arg3 ;
-(void)_moveToElement:(id)arg1 ;
-(char)_moveFocusVertically:(int)arg1 ;
-(void)startInteractionMode;
-(void)endInteractionMode;
-(void)_handleScreenChange;
-(void)_handleLayoutChange;
-(id)focusedElement;
-(char)performDirectionalNavigation:(int)arg1 ;
-(char)performActivate;
-(char)displayCursor;
-(void)_sendMessage:(id)arg1 withIdentifier:(unsigned)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)_sendMessageWithIdentifier:(unsigned)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id)_clientIdentifier;
-(id)_client;
@end
