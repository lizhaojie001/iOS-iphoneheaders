/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:47 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSDictionary, NSString, SCRCTargetSelectorTimer, VOTKeyInfo, SCRCThread;

@interface VOTKeyboardManager : NSObject {

	NSDictionary* _keyboardCommandsTable;
	NSDictionary* _singleLetterCommandsTable;
	NSString* _lastLayout;
	NSDictionary* _layoutToKeyboardMap;
	NSDictionary* _keyboardMap;
	unsigned _currentModifiers;
	BOOL _controlKeyDown;
	NSString* _lastCommand;
	SCRCTargetSelectorTimer* _keyRepeatTimer;
	unsigned _keyboardHelpMask;
	BOOL _isQuickNavOn;
	SCRCTargetSelectorTimer* _quickNavRepostTimer;
	SCRCTargetSelectorTimer* _quickNavKeyTimer;
	unsigned long long _quickNavStateMask;
	unsigned long long _quickNavLastDownState;
	BOOL _quickNavDidSendDown;
	BOOL _capsLockOn;
	BOOL _captureModeEnabled;
	BOOL _explictlyEnabledQuickNav;
	VOTKeyInfo* _keyDownInfo;
	SCRCThread* _keyboardThread;
	BOOL _controlKeyToggleSpeakingAllowed;
	/*^block*/id _testingEventDispatchTap;

}

@property (nonatomic,readonly) BOOL isQuickNavOn;                               //@synthesize isQuickNavOn=_isQuickNavOn - In the implementation block
@property (assign,nonatomic) BOOL captureModeEnabled;                           //@synthesize captureModeEnabled=_captureModeEnabled - In the implementation block
@property (assign,nonatomic) BOOL explictlyEnabledQuickNav;                     //@synthesize explictlyEnabledQuickNav=_explictlyEnabledQuickNav - In the implementation block
@property (nonatomic,copy) id testingEventDispatchTap;                          //@synthesize testingEventDispatchTap=_testingEventDispatchTap - In the implementation block
@property (assign,nonatomic) BOOL controlKeyToggleSpeakingAllowed;              //@synthesize controlKeyToggleSpeakingAllowed=_controlKeyToggleSpeakingAllowed - In the implementation block
+(id)keyboardManager;
+(void)initialize;
-(void)handleKeyboardKeyEvent:(id)arg1 eventOrigin:(int)arg2 ;
-(void)updateQuickNavState:(BOOL)arg1 ;
-(void)setCaptureModeEnabled:(BOOL)arg1 ;
-(id)singleLetterCommandForKeyInfo:(id)arg1 ;
-(BOOL)isQuickNavOn;
-(void)setExplictlyEnabledQuickNav:(BOOL)arg1 ;
-(void)loadKeyboardMap;
-(void)_initializeQuickNav;
-(void)_initializeThread;
-(void)_keyRepeat:(id)arg1 ;
-(void)setControlKeyToggleSpeakingAllowed:(BOOL)arg1 ;
-(void)_handleKeyboardKeyEvent:(id)arg1 ;
-(id)_localizeKeyboardString:(id)arg1 ;
-(void)_postEvent:(id)arg1 ;
-(void)setKeyDownInfo:(id)arg1 ;
-(BOOL)controlKeyToggleSpeakingAllowed;
-(BOOL)_handleArrowKeyEvent:(id)arg1 ;
-(id)_voiceOverCommandForKeyInfo:(id)arg1 ;
-(void)_sendEventForCommand:(id)arg1 withKeyInfo:(id)arg2 arrowInfo:(id)arg3 ;
-(void)_handleQuickNavPressTimer:(id)arg1 ;
-(void)_handleQuickNavDownArrowRepostPress:(id)arg1 ;
-(void)_handleQuickNavPress:(id)arg1 ;
-(void)_postKeyboardKey:(id)arg1 keyCode:(unsigned short)arg2 eventFlags:(unsigned)arg3 keyFlags:(unsigned short)arg4 keyDown:(BOOL)arg5 source:(unsigned short)arg6 ;
-(void)_updateEventFlags:(id)arg1 ;
-(void)_handleAnnouncementsForKeyInfo:(id)arg1 ;
-(BOOL)_dispatchCommandForKeyInfo:(id)arg1 ;
-(id)testingEventDispatchTap;
-(id)keyboardCommandForKeyInfo:(id)arg1 ;
-(id)keyDownInfo;
-(BOOL)captureModeEnabled;
-(BOOL)explictlyEnabledQuickNav;
-(void)setTestingEventDispatchTap:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)postEvent:(id)arg1 ;
@end

